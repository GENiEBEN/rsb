#include "picker.h"
#include "ui_picker.h"
#include "gui.h"            //provides access to main window
#include <QSettings>        //store and retrieve app settings
#include <QThread>          //platform-independent way to manage threads.
#include <QCloseEvent>      //contains parameters that describe a close event.
#include <QSpinBox>
#include <QDebug>



picker::picker(QWidget *parent) : QDialog(parent), ui(new Ui::picker)
{
    ui->setupUi(this);
    //don't let the user do anything other than selecting a benchmark
    ui->GUI_Tabs->setEnabled(false);
    ui->GUI_ExtraSettings->setCurrentIndex(0);
    loadSettings();


}

picker::~picker()
{
    delete ui;
}


//save settings to registry
void picker::saveSettings()
{
    //open registry
    QSettings registry(QSettings::UserScope,"GENiEBEN", "RSB");
    registry.beginGroup("PickerWindow");
    //save all settings from the tabpage "CPU Settings"
    registry.beginGroup("Processor");
    QList<QCheckBox *> lstCheckboxes = ui->GUI_Cores__->findChildren<QCheckBox *>();
    for (int i=0; i < lstCheckboxes.count(); i++){
        registry.setValue(QString::number(i+1),lstCheckboxes[i]->isChecked());
    }
    registry.setValue("Priority",ui->GUI_ProcessPrio->currentIndex());
    registry.endGroup();

    //save all settings from the tabpage "Benchmark Settings"
    QList<QSpinBox *> allSpinBox = ui->GUI_ExtraSettings->findChildren<QSpinBox *>();
    QList<QComboBox *> allComboBox = ui->GUI_ExtraSettings->findChildren<QComboBox *>();
    registry.beginGroup("Benchmark");
    for (int i=0;i<allSpinBox.count();i++){
        registry.setValue(QString("sb%1").arg(QString::number(i)),QString::number(allSpinBox.at(i)->value()));
    }
    for (int j=0;j<allComboBox.count();j++){
        registry.setValue(QString("cb%1").arg(QString::number(j)),allComboBox.at(j)->currentIndex());
    }
    registry.endGroup();
    //close registry
    registry.endGroup();
}

//load last used settings from registry
void picker::loadSettings()
{
    //set registry path
    QSettings registry(QSettings::UserScope,"GENiEBEN", "RSB");
    registry.beginGroup("PickerWindow");
    //load all settings for the tabpage "CPU Settings"
    QString foo;
    registry.beginGroup("Processor");
    QList<QCheckBox *> lstCheckboxes = ui->GUI_Cores__->findChildren<QCheckBox *>();
    for (int i=0; i < lstCheckboxes.count(); i++){
        if ( i < QThread::idealThreadCount()){
            lstCheckboxes[i]->setChecked(true);
            foo = registry.value(QString::number(i+1)).toString();//check which cores were used by user previously
            if (foo.toLower() == "false"){ lstCheckboxes[i]->setChecked(false);;}//select the ones user previously used
        } else {
            lstCheckboxes[i]->setEnabled(false);
        }
    }
    ui->GUI_ProcessPrio->setCurrentIndex(registry.value("Priority").toInt());
    registry.endGroup();

    //load all settings for the tabpage "Benchmark Settings"
    QList<QSpinBox *> allSpinBox = ui->GUI_ExtraSettings->findChildren<QSpinBox *>();
    QList<QComboBox *> allComboBox = ui->GUI_ExtraSettings->findChildren<QComboBox *>();
    registry.beginGroup("Benchmark");
    for (int sb=0;sb<allSpinBox.count();sb++){
        allSpinBox.at(sb)->setValue(registry.value(QString("sb%1").arg(QString::number(sb))).toInt());
    }
    for (int cb=0;cb<allComboBox.count();cb++){
        allComboBox.at(cb)->setCurrentIndex(registry.value(QString("cb%1").arg(QString::number(cb))).toInt());
    }
    registry.endGroup();
    //close registry
    registry.endGroup();
}

//Looks in the registry for installed benchmarks
void picker::loadBenches(QString benchType)
{
    QSettings registry(QSettings::UserScope,"GENiEBEN", "RSB");
    registry.beginGroup("PickerWindow");
    registry.beginGroup(QString("List %1").arg(benchType));
    ui->GUI_BenchName->addItems(registry.allKeys());
    registry.endGroup();
    registry.endGroup();
}

//Load benchmarks list based on what type of benchmark user selected
void picker::on_GUI_BenchType_currentIndexChanged(int index)
{
    ui->GUI_BenchName->setEnabled(true);
    ui->GUI_BenchName->clear();
    ui->GUI_BenchPreset->clear();
    loadBenches(QString::number(index + 1));
    qInfo() << "Selected Benchmark Type: " << QString::number(index + 1) << ui->GUI_BenchType->currentText();
}

//Load presets for the selected benchmark
void picker::on_GUI_BenchName_currentIndexChanged(const QString &arg1)
{
    //prepare the combobox
    ui->GUI_BenchPreset->setEnabled(true);
    ui->GUI_BenchPreset->clear();
    //recursive registry
    QSettings registry(QSettings::UserScope,"GENiEBEN", "RSB");
    registry.beginGroup("PickerWindow");
    registry.beginGroup(QString("List %1").arg(ui->GUI_BenchType->currentIndex() + 1)); //browse all keys from a given category
    ui->GUI_BenchPreset->addItems(registry.value(arg1).toString().split(";")); //add all those presets
    ui->GUI_BenchPreset->addItem(tr("Custom"));
    registry.endGroup();
    registry.endGroup();
    //load settings
    loadSettings();
    //let the user leave
    ui->GUI_OKBtn->setEnabled(true);
}

//Load settings for the selected preset
void picker::on_GUI_BenchPreset_currentIndexChanged(const QString &arg1)
{
    //let the user change settings
    ui->GUI_ExtraSettings->setCurrentIndex(0);
    ui->GUI_Tabs->setEnabled(true);
    //find the page with settings for the selected benchmark
    QList<QWidget *> allPages = ui->GUI_ExtraSettings->findChildren<QWidget *>(QString(), Qt::FindDirectChildrenOnly);//all StackedWidget pages
    QString searchTerm = QString("GUI_ExtraSettings_%1").
            arg(ui->GUI_BenchName->currentText()).
            replace(QChar::Space,"").replace(":","").replace("-",""); //name of the page we are looking for
    for (int i=1;i<allPages.count();i++){   //iterate through all pages (skip first)
        ui->GUI_ExtraSettings->setCurrentIndex(i);  //display next page
        if (ui->GUI_ExtraSettings->currentWidget()->objectName()==searchTerm){  //stop if it's the one we were looking for
            break;
        } else {
            ui->GUI_ExtraSettings->setCurrentIndex(0);  //display first page in case the benchmark doesn't have its own page
        }
    }
    //
}

//Exit Dialog (OK button)
void picker::on_GUI_OKBtn_clicked()
{
    saveSettings();
    emit benchmarkChosen(ui->GUI_BenchName->currentText(),
                         ui->GUI_BenchPreset->currentText()); //send signal to main window that we closed the dialog
    this->close();
}

//Exit Dialog (Cancel button)
void picker::on_GUI_CancelBtn_clicked()
{
    this->close();
}

void picker::on_GUI_LODDial_AMD_valueChanged(int value)
{
    ui->GUI_LODValue_AMD->setText(QString::number(value*0.25));
}
