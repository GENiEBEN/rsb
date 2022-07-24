#include "gui.h"
#include "ui_gui.h"
#include "benches/aquamark3.h"      //provides support functions for benchmarks
#include "picker.h"                 //so we can launch the dialog window "Picker"
#include "systeminfo/sysinfo.h"     //system information library (optional
#include <QStyleFactory>            //for Theme changes
#include <QSettings>                //store and retrieve app settings
#include <QMessageBox>              //adds support for MsgBoxes
#include <QCloseEvent>              //contains parameters that describe a close event.
#include <QDebug>
#include <QtWidgets>

QString currentBenchToStart;
QString currentPresetToUse;

gui::gui(QWidget *parent) : QMainWindow(parent), ui(new Ui::gui)
{
    ui->setupUi(this);
    //Read settings
    readSettings();
    //hide parts of interface that we don't need right now
    ui->GUI_ScoreDock->setVisible(false);
    ui->GUI_StartBtn->setVisible(false);
    //Read SystemInfo
    QSettings registry(QSettings::UserScope,"GENiEBEN", "RSB");
    if (registry.value("SystemInfo").toString().toLower()=="enabled"){
        if (_getSMBIOS() == true){
            qInfo() << "Retrieved SMBIOS information successfully.";
            // Create an empty row at bottom of System Information table in the interface
            int numRows = ui->GUI_Sysinfo->rowCount();

            ui->GUI_Sysinfo->setColumnCount(2);
            ui->GUI_Sysinfo->insertRow(numRows);
            ui->GUI_Sysinfo->setItem(numRows,0, new QTableWidgetItem(QString("BIOS")));
            ui->GUI_Sysinfo->setItem(numRows,1, new QTableWidgetItem(QString("%1 %2").
                                                                      arg(SYSINFO_BIOS_VENDOR(),
                                                                          SYSINFO_BIOS_VERSION()

                                                                          )));



            ui->GUI_Sysinfo->setSelectionMode(QAbstractItemView::NoSelection);
            ui->GUI_Sysinfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        } else {
            qInfo() << "Failed to get SMBIOS information";
        }
    }
}

gui::~gui()
{
    delete ui;
}

//Check with user before quitting the app
bool gui::reallyQuit()
{
    QMessageBox::StandardButton ret;
    if (QString::number(ui->GUI_Score->value()) == "0"){
        ret = QMessageBox::question(this, this->windowTitle(),
                                   tr("Do you really want to close the application?"),
                                   QMessageBox::Yes | QMessageBox::No,QMessageBox::No);
        if (ret == QMessageBox::No)
            return false;
    } else {
        ret = QMessageBox::warning(this, this->windowTitle(),
                                   tr("Did you remember to save before closing?"),
                                   QMessageBox::Save | QMessageBox::Yes,QMessageBox::Yes);
        if (ret == QMessageBox::Save)
            return saveScore();
    }
    return true;
}

//Save app settings to the registry
void gui::writeSettings()
{
    QSettings registry(QSettings::UserScope,"GENiEBEN", "RSB");
    registry.beginGroup("MainWindow");
    registry.setValue("size",size());
    registry.setValue("pos",pos());
    registry.setValue("KeepBest",ui->GUI_Menus_Start_KeepBest->isChecked());
    registry.endGroup();
    switch (registry.status()){
    case QSettings::NoError:        qInfo() << "MainWindow settings saved to registry."; break;
    case QSettings::AccessError:    qWarning() << "An access error occurred while saving MainWindow settings to registry."; break;
    case QSettings::FormatError:    qWarning() << "A format error occurred while saving MainWindow settings to registry."; break;
    }
}

//Read app settings from the registry
void gui::readSettings()
{
    QSettings registry(QSettings::UserScope,"GENiEBEN", "RSB");
    registry.beginGroup("MainWindow");
    if (registry.contains("size"))  //avoids issue if key isn't found (eg: running app for first time)
        resize(registry.value("size").toSize());
    if (registry.contains("pos"))   //avoids issue if key isn't found (eg: running app for first time)
        move(registry.value("pos").toPoint());
    if (registry.contains("KeepBest"))
        ui->GUI_Menus_Start_KeepBest->setChecked(registry.value("KeepBest").toBool());
    registry.endGroup();
    setTheme(registry.value("Theme","Fusion").toString(),registry.value("ThemeIsDark", true).toBool());
    switch (registry.status()){
    case QSettings::NoError:    qInfo() << "MainWindow settings loaded from registry"; break;
    case QSettings::AccessError:qWarning() << "An access error occurred while reading MainWindow settings from registry"; break;
    case QSettings::FormatError:qWarning() << "A format error occurred while reading MainWindow settings from registry"; break;
    }
}

//Apply a theme to our GUI
void gui::setTheme(QString name, bool isDark){
    if (isDark==true){
        qApp->setStyle(QStyleFactory::create(name));
        QPalette darkPalette;
        darkPalette.setColor(QPalette::Window, QColor(53,53,53));
        darkPalette.setColor(QPalette::WindowText, Qt::white);
        darkPalette.setColor(QPalette::Base, QColor(25,25,25));
        darkPalette.setColor(QPalette::AlternateBase, QColor(53,53,53));
        darkPalette.setColor(QPalette::ToolTipBase, Qt::white);
        darkPalette.setColor(QPalette::ToolTipText, Qt::white);
        darkPalette.setColor(QPalette::Text, Qt::white);
        darkPalette.setColor(QPalette::Button, QColor(53,53,53));
        if (name=="Fusion"){
          darkPalette.setColor(QPalette::ButtonText, Qt::white);
        } else {
          darkPalette.setColor(QPalette::ButtonText, Qt::black);
        }
        darkPalette.setColor(QPalette::BrightText, Qt::red);
        darkPalette.setColor(QPalette::Link, QColor(42, 130, 218));
        darkPalette.setColor(QPalette::Highlight, QColor(42, 130, 218));
        darkPalette.setColor(QPalette::HighlightedText, Qt::black);
        qApp->setPalette(darkPalette);
        qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");
    } else {
        qApp->setStyle(name);
        qApp->setPalette(qApp->style()->standardPalette());
        qApp->setStyleSheet(" ");
    }
    //save theme choice to registry
    QSettings registry(QSettings::UserScope,"GENiEBEN", "RSB");
    registry.setValue("Theme",name);
    registry.setValue("ThemeIsDark",isDark);
}

bool gui::saveScore(bool toDesktop){
    //"Add saving mechanism";
    return true;
}

void gui::on_GUI_Menus_Theme_FusionD_triggered()
{
    setTheme("Fusion",true);
}

void gui::on_GUI_Menus_Theme_FusionL_triggered()
{
    setTheme("Fusion");
}

void gui::on_GUI_Menus_Theme_Win_triggered()
{
    setTheme("Windows");
}

void gui::on_GUI_Menus_Theme_WinXP_triggered()
{
    setTheme("WindowsXP");
}

void gui::on_GUI_Menus_Theme_Vista_triggered()
{
    setTheme("WindowsVista");
}

void gui::closeEvent(QCloseEvent *event)
{
    if (reallyQuit()){
        writeSettings();
        event->accept();
    } else {
        event->ignore();
    }
}

void gui::on_GUI_Menus_Picker_triggered()
{
    picker *foo = new picker;
    foo->setAttribute(Qt::WA_DeleteOnClose); //so we don't leak memory
    connect(foo,
            SIGNAL(benchmarkChosen(QString,QString)),
            this,
            SLOT(benchmarkChosen(QString,QString))
            );
    foo->exec();
}

//Inserts a value into Subscores table
void gui::insertSubscore(QString type, QString value)
{
    int row;
    ui->GUI_Subscores->setRowCount(ui->GUI_Subscores->rowCount() + 1);
    row = ui->GUI_Subscores->rowCount() - 1  ; //count starts at 0 so decrease index
    ui->GUI_Subscores->setItem(row,0,new QTableWidgetItem(type)); //#
    ui->GUI_Subscores->setItem(row,1,new QTableWidgetItem(value));//Value
}

//What happens after we closed the 'Select a benchmark' dialog
void gui::benchmarkChosen(QString benchName, QString benchPreset)
{
    //display the name and preset of the benchmark selected
    ui->GUI_ScoreDock->setWindowTitle(QString("[%1] %2").arg(benchPreset, benchName));

    //enable the start buttons
    ui->GUI_StartBtn->setVisible(true);
    ui->GUI_StartBtn->setEnabled(true);
    ui->GUI_Menus_Start_Now->setEnabled(true);
    ui->GUI_Menus_Start_Batch->setEnabled(true);

    //store the name and preset since we are waiting on user to press the START button
    currentBenchToStart = benchName;
    currentPresetToUse = benchPreset;
}


void gui::on_GUI_StartBtn_clicked()
{
    //QSettings ShellFolders("HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Shell Folders",QSettings::NativeFormat);
    //Aquamark3_WriteLicenseFile(ShellFolders.value("Personal").toString() + "/AquaMark3");

    //disable the start buttons
    ui->GUI_StartBtn->setVisible(false);
    ui->GUI_StartBtn->setEnabled(false);
    ui->GUI_Menus_Start_Now->setEnabled(false);
    ui->GUI_Menus_Start_Batch->setEnabled(false);

    //check which benchmark we are going to run
    if(currentBenchToStart == "Aquamark 3"){
        if(currentPresetToUse == "Default"){
            //Create settings file that automates Aquamark3
            Aquamark3_WriteRunFile("C:/",0,0,0,0,0,0,"0"); //TODO: change values
        qInfo() << QString("Starting benchmark %1 using preset %2").arg(currentBenchToStart, currentPresetToUse);
        }
    }
}
