/********************************************************************************
** Form generated from reading UI file 'picker.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKER_H
#define UI_PICKER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_picker
{
public:
    QVBoxLayout *verticalLayout;
    QComboBox *GUI_BenchType;
    QComboBox *GUI_BenchName;
    QComboBox *GUI_BenchPreset;
    QTabWidget *GUI_Tabs;
    QWidget *GUI_TabCPU;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *GUI_TabCPU_;
    QWidget *GUI_TabCPU__;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *GUI_Cores_Groupbox;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *GUI_Cores_;
    QWidget *GUI_Cores__;
    QGridLayout *gridLayout;
    QCheckBox *ckbCore03;
    QCheckBox *ckbCore05;
    QCheckBox *ckbCore01;
    QCheckBox *ckbCore02;
    QCheckBox *ckbCore06;
    QCheckBox *ckbCore07;
    QCheckBox *ckbCore04;
    QCheckBox *ckbCore08;
    QCheckBox *ckbCore09;
    QCheckBox *ckbCore10;
    QCheckBox *ckbCore27;
    QCheckBox *ckbCore39;
    QCheckBox *ckbCore41;
    QCheckBox *ckbCore42;
    QCheckBox *ckbCore13;
    QCheckBox *ckbCore18;
    QCheckBox *ckbCore20;
    QCheckBox *ckbCore28;
    QCheckBox *ckbCore38;
    QCheckBox *ckbCore40;
    QCheckBox *ckbCore34;
    QCheckBox *ckbCore15;
    QCheckBox *ckbCore12;
    QCheckBox *ckbCore14;
    QCheckBox *ckbCore23;
    QCheckBox *ckbCore11;
    QCheckBox *ckbCore25;
    QCheckBox *ckbCore16;
    QCheckBox *ckbCore26;
    QCheckBox *ckbCore29;
    QCheckBox *ckbCore21;
    QCheckBox *ckbCore30;
    QCheckBox *ckbCore36;
    QCheckBox *ckbCore22;
    QCheckBox *ckbCore19;
    QCheckBox *ckbCore31;
    QCheckBox *ckbCore33;
    QCheckBox *ckbCore35;
    QCheckBox *ckbCore17;
    QCheckBox *ckbCore24;
    QCheckBox *ckbCore32;
    QCheckBox *ckbCore37;
    QCheckBox *ckbCore51;
    QCheckBox *ckbCore49;
    QCheckBox *ckbCore59;
    QCheckBox *ckbCore60;
    QCheckBox *ckbCore45;
    QCheckBox *ckbCore47;
    QCheckBox *ckbCore50;
    QCheckBox *ckbCore46;
    QCheckBox *ckbCore52;
    QCheckBox *ckbCore43;
    QCheckBox *ckbCore44;
    QCheckBox *ckbCore54;
    QCheckBox *ckbCore55;
    QCheckBox *ckbCore48;
    QCheckBox *ckbCore56;
    QCheckBox *ckbCore57;
    QCheckBox *ckbCore53;
    QCheckBox *ckbCore58;
    QCheckBox *ckbCore63;
    QCheckBox *ckbCore62;
    QCheckBox *ckbCore64;
    QCheckBox *ckbCore61;
    QComboBox *GUI_ProcessPrio;
    QWidget *GUI_TabVGA;
    QVBoxLayout *verticalLayout_11;
    QTabWidget *GUI_TabVGA_Brand;
    QWidget *GUI_TabVGA_AMD;
    QVBoxLayout *verticalLayout_15;
    QScrollArea *GUI_TabVGA_AMD_;
    QWidget *GUI_TabVGA_AMD__;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *GUI_TabVGA_AMD_Lod;
    QVBoxLayout *verticalLayout_13;
    QScrollArea *GUI_TabVGA_AMD_Lod_;
    QWidget *GUI_TabVGA_AMD_Lod__;
    QVBoxLayout *verticalLayout_14;
    QDial *GUI_LODDial_AMD;
    QLabel *GUI_LODValue_AMD;
    QGroupBox *GUI_TabVGA_AMD_Misc;
    QHBoxLayout *horizontalLayout_7;
    QScrollArea *GUI_TabVGA_AMD_Misc_;
    QWidget *GUI_TabVGA_AMD_Misc__;
    QWidget *GUI_TabVGA_NVIDIA;
    QVBoxLayout *verticalLayout_12;
    QLabel *GUI_TabVGA_NVIDIA_Message;
    QWidget *GUI_TabExtra;
    QHBoxLayout *horizontalLayout_6;
    QScrollArea *GUI_TabExtra_;
    QWidget *GUI_TabExtra__;
    QHBoxLayout *horizontalLayout_4;
    QStackedWidget *GUI_ExtraSettings;
    QWidget *GUI_ExtraSettings_Page0;
    QHBoxLayout *horizontalLayout_8;
    QLabel *GUI_ExtraSettings_Page0_Message;
    QWidget *GUI_ExtraSettings_Aquamark3;
    QHBoxLayout *horizontalLayout_9;
    QScrollArea *GUI_ExtraSettings_Aqua3_;
    QWidget *GUI_ExtraSettings_Aqua3__;
    QFormLayout *formLayout;
    QLabel *lblRunMode;
    QComboBox *GUI_Aqua3_RunMode;
    QLabel *lblHideLogo;
    QComboBox *GUI_Aqua3_HideLogo;
    QLabel *lblOSD;
    QComboBox *GUI_Aqua3_OSD;
    QLabel *lblOSD_2;
    QComboBox *GUI_Aqua3_HideReset;
    QWidget *GUI_ExtraSettings_Unigine;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *GUI_ExtraSettings_Unigine_;
    QWidget *GUI_ExtraSettings_Unigine__;
    QFrame *GUI_ButtonsLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *GUI_AddBtn;
    QPushButton *GUI_OKBtn;
    QPushButton *GUI_CancelBtn;

    void setupUi(QDialog *picker)
    {
        if (picker->objectName().isEmpty())
            picker->setObjectName(QStringLiteral("picker"));
        picker->setWindowModality(Qt::ApplicationModal);
        picker->resize(473, 418);
        QFont font;
        font.setPointSize(8);
        picker->setFont(font);
        picker->setSizeGripEnabled(true);
        picker->setModal(true);
        verticalLayout = new QVBoxLayout(picker);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        GUI_BenchType = new QComboBox(picker);
        GUI_BenchType->setObjectName(QStringLiteral("GUI_BenchType"));

        verticalLayout->addWidget(GUI_BenchType);

        GUI_BenchName = new QComboBox(picker);
        GUI_BenchName->setObjectName(QStringLiteral("GUI_BenchName"));
        GUI_BenchName->setEnabled(false);
        GUI_BenchName->setCurrentText(QStringLiteral(""));
        GUI_BenchName->setFrame(true);

        verticalLayout->addWidget(GUI_BenchName);

        GUI_BenchPreset = new QComboBox(picker);
        GUI_BenchPreset->setObjectName(QStringLiteral("GUI_BenchPreset"));
        GUI_BenchPreset->setEnabled(false);
        GUI_BenchPreset->setFrame(true);

        verticalLayout->addWidget(GUI_BenchPreset);

        GUI_Tabs = new QTabWidget(picker);
        GUI_Tabs->setObjectName(QStringLiteral("GUI_Tabs"));
        GUI_Tabs->setEnabled(true);
        GUI_Tabs->setTabShape(QTabWidget::Rounded);
        GUI_Tabs->setMovable(true);
        GUI_Tabs->setTabBarAutoHide(true);
        GUI_TabCPU = new QWidget();
        GUI_TabCPU->setObjectName(QStringLiteral("GUI_TabCPU"));
        verticalLayout_3 = new QVBoxLayout(GUI_TabCPU);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        GUI_TabCPU_ = new QScrollArea(GUI_TabCPU);
        GUI_TabCPU_->setObjectName(QStringLiteral("GUI_TabCPU_"));
        GUI_TabCPU_->setFrameShape(QFrame::NoFrame);
        GUI_TabCPU_->setWidgetResizable(true);
        GUI_TabCPU__ = new QWidget();
        GUI_TabCPU__->setObjectName(QStringLiteral("GUI_TabCPU__"));
        GUI_TabCPU__->setGeometry(QRect(0, 0, 449, 259));
        verticalLayout_2 = new QVBoxLayout(GUI_TabCPU__);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        GUI_Cores_Groupbox = new QGroupBox(GUI_TabCPU__);
        GUI_Cores_Groupbox->setObjectName(QStringLiteral("GUI_Cores_Groupbox"));
        verticalLayout_4 = new QVBoxLayout(GUI_Cores_Groupbox);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 1);
        GUI_Cores_ = new QScrollArea(GUI_Cores_Groupbox);
        GUI_Cores_->setObjectName(QStringLiteral("GUI_Cores_"));
        GUI_Cores_->setFrameShape(QFrame::NoFrame);
        GUI_Cores_->setFrameShadow(QFrame::Plain);
        GUI_Cores_->setWidgetResizable(true);
        GUI_Cores__ = new QWidget();
        GUI_Cores__->setObjectName(QStringLiteral("GUI_Cores__"));
        GUI_Cores__->setGeometry(QRect(0, 0, 435, 205));
        gridLayout = new QGridLayout(GUI_Cores__);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        ckbCore03 = new QCheckBox(GUI_Cores__);
        ckbCore03->setObjectName(QStringLiteral("ckbCore03"));

        gridLayout->addWidget(ckbCore03, 0, 2, 1, 1);

        ckbCore05 = new QCheckBox(GUI_Cores__);
        ckbCore05->setObjectName(QStringLiteral("ckbCore05"));

        gridLayout->addWidget(ckbCore05, 0, 4, 1, 1);

        ckbCore01 = new QCheckBox(GUI_Cores__);
        ckbCore01->setObjectName(QStringLiteral("ckbCore01"));

        gridLayout->addWidget(ckbCore01, 0, 0, 1, 1);

        ckbCore02 = new QCheckBox(GUI_Cores__);
        ckbCore02->setObjectName(QStringLiteral("ckbCore02"));

        gridLayout->addWidget(ckbCore02, 0, 1, 1, 1);

        ckbCore06 = new QCheckBox(GUI_Cores__);
        ckbCore06->setObjectName(QStringLiteral("ckbCore06"));

        gridLayout->addWidget(ckbCore06, 0, 5, 1, 1);

        ckbCore07 = new QCheckBox(GUI_Cores__);
        ckbCore07->setObjectName(QStringLiteral("ckbCore07"));

        gridLayout->addWidget(ckbCore07, 0, 6, 1, 1);

        ckbCore04 = new QCheckBox(GUI_Cores__);
        ckbCore04->setObjectName(QStringLiteral("ckbCore04"));

        gridLayout->addWidget(ckbCore04, 0, 3, 1, 1);

        ckbCore08 = new QCheckBox(GUI_Cores__);
        ckbCore08->setObjectName(QStringLiteral("ckbCore08"));

        gridLayout->addWidget(ckbCore08, 0, 7, 1, 1);

        ckbCore09 = new QCheckBox(GUI_Cores__);
        ckbCore09->setObjectName(QStringLiteral("ckbCore09"));

        gridLayout->addWidget(ckbCore09, 1, 0, 1, 1);

        ckbCore10 = new QCheckBox(GUI_Cores__);
        ckbCore10->setObjectName(QStringLiteral("ckbCore10"));

        gridLayout->addWidget(ckbCore10, 1, 1, 1, 1);

        ckbCore27 = new QCheckBox(GUI_Cores__);
        ckbCore27->setObjectName(QStringLiteral("ckbCore27"));

        gridLayout->addWidget(ckbCore27, 3, 2, 1, 1);

        ckbCore39 = new QCheckBox(GUI_Cores__);
        ckbCore39->setObjectName(QStringLiteral("ckbCore39"));

        gridLayout->addWidget(ckbCore39, 4, 6, 1, 1);

        ckbCore41 = new QCheckBox(GUI_Cores__);
        ckbCore41->setObjectName(QStringLiteral("ckbCore41"));

        gridLayout->addWidget(ckbCore41, 5, 0, 1, 1);

        ckbCore42 = new QCheckBox(GUI_Cores__);
        ckbCore42->setObjectName(QStringLiteral("ckbCore42"));

        gridLayout->addWidget(ckbCore42, 5, 1, 1, 1);

        ckbCore13 = new QCheckBox(GUI_Cores__);
        ckbCore13->setObjectName(QStringLiteral("ckbCore13"));

        gridLayout->addWidget(ckbCore13, 1, 4, 1, 1);

        ckbCore18 = new QCheckBox(GUI_Cores__);
        ckbCore18->setObjectName(QStringLiteral("ckbCore18"));

        gridLayout->addWidget(ckbCore18, 2, 1, 1, 1);

        ckbCore20 = new QCheckBox(GUI_Cores__);
        ckbCore20->setObjectName(QStringLiteral("ckbCore20"));

        gridLayout->addWidget(ckbCore20, 2, 3, 1, 1);

        ckbCore28 = new QCheckBox(GUI_Cores__);
        ckbCore28->setObjectName(QStringLiteral("ckbCore28"));

        gridLayout->addWidget(ckbCore28, 3, 3, 1, 1);

        ckbCore38 = new QCheckBox(GUI_Cores__);
        ckbCore38->setObjectName(QStringLiteral("ckbCore38"));

        gridLayout->addWidget(ckbCore38, 4, 5, 1, 1);

        ckbCore40 = new QCheckBox(GUI_Cores__);
        ckbCore40->setObjectName(QStringLiteral("ckbCore40"));

        gridLayout->addWidget(ckbCore40, 4, 7, 1, 1);

        ckbCore34 = new QCheckBox(GUI_Cores__);
        ckbCore34->setObjectName(QStringLiteral("ckbCore34"));

        gridLayout->addWidget(ckbCore34, 4, 1, 1, 1);

        ckbCore15 = new QCheckBox(GUI_Cores__);
        ckbCore15->setObjectName(QStringLiteral("ckbCore15"));

        gridLayout->addWidget(ckbCore15, 1, 6, 1, 1);

        ckbCore12 = new QCheckBox(GUI_Cores__);
        ckbCore12->setObjectName(QStringLiteral("ckbCore12"));

        gridLayout->addWidget(ckbCore12, 1, 3, 1, 1);

        ckbCore14 = new QCheckBox(GUI_Cores__);
        ckbCore14->setObjectName(QStringLiteral("ckbCore14"));

        gridLayout->addWidget(ckbCore14, 1, 5, 1, 1);

        ckbCore23 = new QCheckBox(GUI_Cores__);
        ckbCore23->setObjectName(QStringLiteral("ckbCore23"));

        gridLayout->addWidget(ckbCore23, 2, 6, 1, 1);

        ckbCore11 = new QCheckBox(GUI_Cores__);
        ckbCore11->setObjectName(QStringLiteral("ckbCore11"));

        gridLayout->addWidget(ckbCore11, 1, 2, 1, 1);

        ckbCore25 = new QCheckBox(GUI_Cores__);
        ckbCore25->setObjectName(QStringLiteral("ckbCore25"));

        gridLayout->addWidget(ckbCore25, 3, 0, 1, 1);

        ckbCore16 = new QCheckBox(GUI_Cores__);
        ckbCore16->setObjectName(QStringLiteral("ckbCore16"));

        gridLayout->addWidget(ckbCore16, 1, 7, 1, 1);

        ckbCore26 = new QCheckBox(GUI_Cores__);
        ckbCore26->setObjectName(QStringLiteral("ckbCore26"));

        gridLayout->addWidget(ckbCore26, 3, 1, 1, 1);

        ckbCore29 = new QCheckBox(GUI_Cores__);
        ckbCore29->setObjectName(QStringLiteral("ckbCore29"));

        gridLayout->addWidget(ckbCore29, 3, 4, 1, 1);

        ckbCore21 = new QCheckBox(GUI_Cores__);
        ckbCore21->setObjectName(QStringLiteral("ckbCore21"));

        gridLayout->addWidget(ckbCore21, 2, 4, 1, 1);

        ckbCore30 = new QCheckBox(GUI_Cores__);
        ckbCore30->setObjectName(QStringLiteral("ckbCore30"));

        gridLayout->addWidget(ckbCore30, 3, 5, 1, 1);

        ckbCore36 = new QCheckBox(GUI_Cores__);
        ckbCore36->setObjectName(QStringLiteral("ckbCore36"));

        gridLayout->addWidget(ckbCore36, 4, 3, 1, 1);

        ckbCore22 = new QCheckBox(GUI_Cores__);
        ckbCore22->setObjectName(QStringLiteral("ckbCore22"));

        gridLayout->addWidget(ckbCore22, 2, 5, 1, 1);

        ckbCore19 = new QCheckBox(GUI_Cores__);
        ckbCore19->setObjectName(QStringLiteral("ckbCore19"));

        gridLayout->addWidget(ckbCore19, 2, 2, 1, 1);

        ckbCore31 = new QCheckBox(GUI_Cores__);
        ckbCore31->setObjectName(QStringLiteral("ckbCore31"));

        gridLayout->addWidget(ckbCore31, 3, 6, 1, 1);

        ckbCore33 = new QCheckBox(GUI_Cores__);
        ckbCore33->setObjectName(QStringLiteral("ckbCore33"));

        gridLayout->addWidget(ckbCore33, 4, 0, 1, 1);

        ckbCore35 = new QCheckBox(GUI_Cores__);
        ckbCore35->setObjectName(QStringLiteral("ckbCore35"));

        gridLayout->addWidget(ckbCore35, 4, 2, 1, 1);

        ckbCore17 = new QCheckBox(GUI_Cores__);
        ckbCore17->setObjectName(QStringLiteral("ckbCore17"));

        gridLayout->addWidget(ckbCore17, 2, 0, 1, 1);

        ckbCore24 = new QCheckBox(GUI_Cores__);
        ckbCore24->setObjectName(QStringLiteral("ckbCore24"));

        gridLayout->addWidget(ckbCore24, 2, 7, 1, 1);

        ckbCore32 = new QCheckBox(GUI_Cores__);
        ckbCore32->setObjectName(QStringLiteral("ckbCore32"));

        gridLayout->addWidget(ckbCore32, 3, 7, 1, 1);

        ckbCore37 = new QCheckBox(GUI_Cores__);
        ckbCore37->setObjectName(QStringLiteral("ckbCore37"));

        gridLayout->addWidget(ckbCore37, 4, 4, 1, 1);

        ckbCore51 = new QCheckBox(GUI_Cores__);
        ckbCore51->setObjectName(QStringLiteral("ckbCore51"));

        gridLayout->addWidget(ckbCore51, 6, 2, 1, 1);

        ckbCore49 = new QCheckBox(GUI_Cores__);
        ckbCore49->setObjectName(QStringLiteral("ckbCore49"));

        gridLayout->addWidget(ckbCore49, 6, 0, 1, 1);

        ckbCore59 = new QCheckBox(GUI_Cores__);
        ckbCore59->setObjectName(QStringLiteral("ckbCore59"));

        gridLayout->addWidget(ckbCore59, 7, 2, 1, 1);

        ckbCore60 = new QCheckBox(GUI_Cores__);
        ckbCore60->setObjectName(QStringLiteral("ckbCore60"));

        gridLayout->addWidget(ckbCore60, 7, 3, 1, 1);

        ckbCore45 = new QCheckBox(GUI_Cores__);
        ckbCore45->setObjectName(QStringLiteral("ckbCore45"));

        gridLayout->addWidget(ckbCore45, 5, 4, 1, 1);

        ckbCore47 = new QCheckBox(GUI_Cores__);
        ckbCore47->setObjectName(QStringLiteral("ckbCore47"));

        gridLayout->addWidget(ckbCore47, 5, 6, 1, 1);

        ckbCore50 = new QCheckBox(GUI_Cores__);
        ckbCore50->setObjectName(QStringLiteral("ckbCore50"));

        gridLayout->addWidget(ckbCore50, 6, 1, 1, 1);

        ckbCore46 = new QCheckBox(GUI_Cores__);
        ckbCore46->setObjectName(QStringLiteral("ckbCore46"));

        gridLayout->addWidget(ckbCore46, 5, 5, 1, 1);

        ckbCore52 = new QCheckBox(GUI_Cores__);
        ckbCore52->setObjectName(QStringLiteral("ckbCore52"));

        gridLayout->addWidget(ckbCore52, 6, 3, 1, 1);

        ckbCore43 = new QCheckBox(GUI_Cores__);
        ckbCore43->setObjectName(QStringLiteral("ckbCore43"));

        gridLayout->addWidget(ckbCore43, 5, 2, 1, 1);

        ckbCore44 = new QCheckBox(GUI_Cores__);
        ckbCore44->setObjectName(QStringLiteral("ckbCore44"));

        gridLayout->addWidget(ckbCore44, 5, 3, 1, 1);

        ckbCore54 = new QCheckBox(GUI_Cores__);
        ckbCore54->setObjectName(QStringLiteral("ckbCore54"));

        gridLayout->addWidget(ckbCore54, 6, 5, 1, 1);

        ckbCore55 = new QCheckBox(GUI_Cores__);
        ckbCore55->setObjectName(QStringLiteral("ckbCore55"));

        gridLayout->addWidget(ckbCore55, 6, 6, 1, 1);

        ckbCore48 = new QCheckBox(GUI_Cores__);
        ckbCore48->setObjectName(QStringLiteral("ckbCore48"));

        gridLayout->addWidget(ckbCore48, 5, 7, 1, 1);

        ckbCore56 = new QCheckBox(GUI_Cores__);
        ckbCore56->setObjectName(QStringLiteral("ckbCore56"));

        gridLayout->addWidget(ckbCore56, 6, 7, 1, 1);

        ckbCore57 = new QCheckBox(GUI_Cores__);
        ckbCore57->setObjectName(QStringLiteral("ckbCore57"));

        gridLayout->addWidget(ckbCore57, 7, 0, 1, 1);

        ckbCore53 = new QCheckBox(GUI_Cores__);
        ckbCore53->setObjectName(QStringLiteral("ckbCore53"));

        gridLayout->addWidget(ckbCore53, 6, 4, 1, 1);

        ckbCore58 = new QCheckBox(GUI_Cores__);
        ckbCore58->setObjectName(QStringLiteral("ckbCore58"));

        gridLayout->addWidget(ckbCore58, 7, 1, 1, 1);

        ckbCore63 = new QCheckBox(GUI_Cores__);
        ckbCore63->setObjectName(QStringLiteral("ckbCore63"));

        gridLayout->addWidget(ckbCore63, 7, 6, 1, 1);

        ckbCore62 = new QCheckBox(GUI_Cores__);
        ckbCore62->setObjectName(QStringLiteral("ckbCore62"));

        gridLayout->addWidget(ckbCore62, 7, 5, 1, 1);

        ckbCore64 = new QCheckBox(GUI_Cores__);
        ckbCore64->setObjectName(QStringLiteral("ckbCore64"));

        gridLayout->addWidget(ckbCore64, 7, 7, 1, 1);

        ckbCore61 = new QCheckBox(GUI_Cores__);
        ckbCore61->setObjectName(QStringLiteral("ckbCore61"));

        gridLayout->addWidget(ckbCore61, 7, 4, 1, 1);

        GUI_Cores_->setWidget(GUI_Cores__);

        verticalLayout_4->addWidget(GUI_Cores_);


        verticalLayout_2->addWidget(GUI_Cores_Groupbox);

        GUI_ProcessPrio = new QComboBox(GUI_TabCPU__);
        GUI_ProcessPrio->setObjectName(QStringLiteral("GUI_ProcessPrio"));

        verticalLayout_2->addWidget(GUI_ProcessPrio);

        GUI_TabCPU_->setWidget(GUI_TabCPU__);

        verticalLayout_3->addWidget(GUI_TabCPU_);

        GUI_Tabs->addTab(GUI_TabCPU, QString());
        GUI_TabVGA = new QWidget();
        GUI_TabVGA->setObjectName(QStringLiteral("GUI_TabVGA"));
        verticalLayout_11 = new QVBoxLayout(GUI_TabVGA);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(6, 6, 6, 6);
        GUI_TabVGA_Brand = new QTabWidget(GUI_TabVGA);
        GUI_TabVGA_Brand->setObjectName(QStringLiteral("GUI_TabVGA_Brand"));
        GUI_TabVGA_Brand->setTabPosition(QTabWidget::West);
        GUI_TabVGA_AMD = new QWidget();
        GUI_TabVGA_AMD->setObjectName(QStringLiteral("GUI_TabVGA_AMD"));
        verticalLayout_15 = new QVBoxLayout(GUI_TabVGA_AMD);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(6, 6, 6, 6);
        GUI_TabVGA_AMD_ = new QScrollArea(GUI_TabVGA_AMD);
        GUI_TabVGA_AMD_->setObjectName(QStringLiteral("GUI_TabVGA_AMD_"));
        GUI_TabVGA_AMD_->setFrameShape(QFrame::NoFrame);
        GUI_TabVGA_AMD_->setFrameShadow(QFrame::Plain);
        GUI_TabVGA_AMD_->setWidgetResizable(true);
        GUI_TabVGA_AMD__ = new QWidget();
        GUI_TabVGA_AMD__->setObjectName(QStringLiteral("GUI_TabVGA_AMD__"));
        GUI_TabVGA_AMD__->setGeometry(QRect(0, 0, 179, 106));
        horizontalLayout_5 = new QHBoxLayout(GUI_TabVGA_AMD__);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        GUI_TabVGA_AMD_Lod = new QGroupBox(GUI_TabVGA_AMD__);
        GUI_TabVGA_AMD_Lod->setObjectName(QStringLiteral("GUI_TabVGA_AMD_Lod"));
        verticalLayout_13 = new QVBoxLayout(GUI_TabVGA_AMD_Lod);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 2);
        GUI_TabVGA_AMD_Lod_ = new QScrollArea(GUI_TabVGA_AMD_Lod);
        GUI_TabVGA_AMD_Lod_->setObjectName(QStringLiteral("GUI_TabVGA_AMD_Lod_"));
        GUI_TabVGA_AMD_Lod_->setMinimumSize(QSize(100, 0));
        GUI_TabVGA_AMD_Lod_->setFrameShape(QFrame::NoFrame);
        GUI_TabVGA_AMD_Lod_->setWidgetResizable(true);
        GUI_TabVGA_AMD_Lod__ = new QWidget();
        GUI_TabVGA_AMD_Lod__->setObjectName(QStringLiteral("GUI_TabVGA_AMD_Lod__"));
        GUI_TabVGA_AMD_Lod__->setGeometry(QRect(0, 0, 98, 68));
        verticalLayout_14 = new QVBoxLayout(GUI_TabVGA_AMD_Lod__);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        GUI_LODDial_AMD = new QDial(GUI_TabVGA_AMD_Lod__);
        GUI_LODDial_AMD->setObjectName(QStringLiteral("GUI_LODDial_AMD"));
        GUI_LODDial_AMD->setMinimum(-108);
        GUI_LODDial_AMD->setMaximum(108);
        GUI_LODDial_AMD->setSingleStep(1);
        GUI_LODDial_AMD->setPageStep(13);
        GUI_LODDial_AMD->setOrientation(Qt::Horizontal);
        GUI_LODDial_AMD->setNotchesVisible(true);

        verticalLayout_14->addWidget(GUI_LODDial_AMD);

        GUI_TabVGA_AMD_Lod_->setWidget(GUI_TabVGA_AMD_Lod__);

        verticalLayout_13->addWidget(GUI_TabVGA_AMD_Lod_);

        GUI_LODValue_AMD = new QLabel(GUI_TabVGA_AMD_Lod);
        GUI_LODValue_AMD->setObjectName(QStringLiteral("GUI_LODValue_AMD"));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        GUI_LODValue_AMD->setFont(font1);
        GUI_LODValue_AMD->setAlignment(Qt::AlignCenter);

        verticalLayout_13->addWidget(GUI_LODValue_AMD);


        horizontalLayout_5->addWidget(GUI_TabVGA_AMD_Lod);

        GUI_TabVGA_AMD_Misc = new QGroupBox(GUI_TabVGA_AMD__);
        GUI_TabVGA_AMD_Misc->setObjectName(QStringLiteral("GUI_TabVGA_AMD_Misc"));
        horizontalLayout_7 = new QHBoxLayout(GUI_TabVGA_AMD_Misc);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 2);
        GUI_TabVGA_AMD_Misc_ = new QScrollArea(GUI_TabVGA_AMD_Misc);
        GUI_TabVGA_AMD_Misc_->setObjectName(QStringLiteral("GUI_TabVGA_AMD_Misc_"));
        GUI_TabVGA_AMD_Misc_->setFrameShape(QFrame::NoFrame);
        GUI_TabVGA_AMD_Misc_->setWidgetResizable(true);
        GUI_TabVGA_AMD_Misc__ = new QWidget();
        GUI_TabVGA_AMD_Misc__->setObjectName(QStringLiteral("GUI_TabVGA_AMD_Misc__"));
        GUI_TabVGA_AMD_Misc__->setGeometry(QRect(0, 0, 100, 30));
        GUI_TabVGA_AMD_Misc_->setWidget(GUI_TabVGA_AMD_Misc__);

        horizontalLayout_7->addWidget(GUI_TabVGA_AMD_Misc_);


        horizontalLayout_5->addWidget(GUI_TabVGA_AMD_Misc);

        GUI_TabVGA_AMD_->setWidget(GUI_TabVGA_AMD__);

        verticalLayout_15->addWidget(GUI_TabVGA_AMD_);

        GUI_TabVGA_Brand->addTab(GUI_TabVGA_AMD, QString());
        GUI_TabVGA_NVIDIA = new QWidget();
        GUI_TabVGA_NVIDIA->setObjectName(QStringLiteral("GUI_TabVGA_NVIDIA"));
        verticalLayout_12 = new QVBoxLayout(GUI_TabVGA_NVIDIA);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        GUI_TabVGA_NVIDIA_Message = new QLabel(GUI_TabVGA_NVIDIA);
        GUI_TabVGA_NVIDIA_Message->setObjectName(QStringLiteral("GUI_TabVGA_NVIDIA_Message"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        GUI_TabVGA_NVIDIA_Message->setFont(font2);
        GUI_TabVGA_NVIDIA_Message->setScaledContents(false);
        GUI_TabVGA_NVIDIA_Message->setAlignment(Qt::AlignCenter);
        GUI_TabVGA_NVIDIA_Message->setWordWrap(true);

        verticalLayout_12->addWidget(GUI_TabVGA_NVIDIA_Message);

        GUI_TabVGA_Brand->addTab(GUI_TabVGA_NVIDIA, QString());

        verticalLayout_11->addWidget(GUI_TabVGA_Brand);

        GUI_Tabs->addTab(GUI_TabVGA, QString());
        GUI_TabExtra = new QWidget();
        GUI_TabExtra->setObjectName(QStringLiteral("GUI_TabExtra"));
        horizontalLayout_6 = new QHBoxLayout(GUI_TabExtra);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        GUI_TabExtra_ = new QScrollArea(GUI_TabExtra);
        GUI_TabExtra_->setObjectName(QStringLiteral("GUI_TabExtra_"));
        GUI_TabExtra_->setFrameShape(QFrame::NoFrame);
        GUI_TabExtra_->setFrameShadow(QFrame::Plain);
        GUI_TabExtra_->setWidgetResizable(true);
        GUI_TabExtra__ = new QWidget();
        GUI_TabExtra__->setObjectName(QStringLiteral("GUI_TabExtra__"));
        GUI_TabExtra__->setGeometry(QRect(0, 0, 449, 259));
        horizontalLayout_4 = new QHBoxLayout(GUI_TabExtra__);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        GUI_ExtraSettings = new QStackedWidget(GUI_TabExtra__);
        GUI_ExtraSettings->setObjectName(QStringLiteral("GUI_ExtraSettings"));
#ifndef QT_NO_ACCESSIBILITY
        GUI_ExtraSettings->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        GUI_ExtraSettings->setFrameShape(QFrame::NoFrame);
        GUI_ExtraSettings_Page0 = new QWidget();
        GUI_ExtraSettings_Page0->setObjectName(QStringLiteral("GUI_ExtraSettings_Page0"));
#ifndef QT_NO_ACCESSIBILITY
        GUI_ExtraSettings_Page0->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        horizontalLayout_8 = new QHBoxLayout(GUI_ExtraSettings_Page0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        GUI_ExtraSettings_Page0_Message = new QLabel(GUI_ExtraSettings_Page0);
        GUI_ExtraSettings_Page0_Message->setObjectName(QStringLiteral("GUI_ExtraSettings_Page0_Message"));
        GUI_ExtraSettings_Page0_Message->setFont(font2);
        GUI_ExtraSettings_Page0_Message->setScaledContents(false);
        GUI_ExtraSettings_Page0_Message->setAlignment(Qt::AlignCenter);
        GUI_ExtraSettings_Page0_Message->setWordWrap(true);

        horizontalLayout_8->addWidget(GUI_ExtraSettings_Page0_Message);

        GUI_ExtraSettings->addWidget(GUI_ExtraSettings_Page0);
        GUI_ExtraSettings_Aquamark3 = new QWidget();
        GUI_ExtraSettings_Aquamark3->setObjectName(QStringLiteral("GUI_ExtraSettings_Aquamark3"));
#ifndef QT_NO_ACCESSIBILITY
        GUI_ExtraSettings_Aquamark3->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        horizontalLayout_9 = new QHBoxLayout(GUI_ExtraSettings_Aquamark3);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        GUI_ExtraSettings_Aqua3_ = new QScrollArea(GUI_ExtraSettings_Aquamark3);
        GUI_ExtraSettings_Aqua3_->setObjectName(QStringLiteral("GUI_ExtraSettings_Aqua3_"));
        GUI_ExtraSettings_Aqua3_->setFrameShape(QFrame::NoFrame);
        GUI_ExtraSettings_Aqua3_->setFrameShadow(QFrame::Sunken);
        GUI_ExtraSettings_Aqua3_->setWidgetResizable(true);
        GUI_ExtraSettings_Aqua3__ = new QWidget();
        GUI_ExtraSettings_Aqua3__->setObjectName(QStringLiteral("GUI_ExtraSettings_Aqua3__"));
        GUI_ExtraSettings_Aqua3__->setGeometry(QRect(0, 0, 431, 241));
        formLayout = new QFormLayout(GUI_ExtraSettings_Aqua3__);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(6);
        formLayout->setVerticalSpacing(6);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lblRunMode = new QLabel(GUI_ExtraSettings_Aqua3__);
        lblRunMode->setObjectName(QStringLiteral("lblRunMode"));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        lblRunMode->setFont(font3);

        formLayout->setWidget(0, QFormLayout::LabelRole, lblRunMode);

        GUI_Aqua3_RunMode = new QComboBox(GUI_ExtraSettings_Aqua3__);
        GUI_Aqua3_RunMode->setObjectName(QStringLiteral("GUI_Aqua3_RunMode"));

        formLayout->setWidget(0, QFormLayout::FieldRole, GUI_Aqua3_RunMode);

        lblHideLogo = new QLabel(GUI_ExtraSettings_Aqua3__);
        lblHideLogo->setObjectName(QStringLiteral("lblHideLogo"));
        lblHideLogo->setFont(font3);

        formLayout->setWidget(1, QFormLayout::LabelRole, lblHideLogo);

        GUI_Aqua3_HideLogo = new QComboBox(GUI_ExtraSettings_Aqua3__);
        GUI_Aqua3_HideLogo->setObjectName(QStringLiteral("GUI_Aqua3_HideLogo"));

        formLayout->setWidget(1, QFormLayout::FieldRole, GUI_Aqua3_HideLogo);

        lblOSD = new QLabel(GUI_ExtraSettings_Aqua3__);
        lblOSD->setObjectName(QStringLiteral("lblOSD"));
        lblOSD->setFont(font3);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblOSD);

        GUI_Aqua3_OSD = new QComboBox(GUI_ExtraSettings_Aqua3__);
        GUI_Aqua3_OSD->setObjectName(QStringLiteral("GUI_Aqua3_OSD"));

        formLayout->setWidget(2, QFormLayout::FieldRole, GUI_Aqua3_OSD);

        lblOSD_2 = new QLabel(GUI_ExtraSettings_Aqua3__);
        lblOSD_2->setObjectName(QStringLiteral("lblOSD_2"));
        lblOSD_2->setFont(font3);

        formLayout->setWidget(3, QFormLayout::LabelRole, lblOSD_2);

        GUI_Aqua3_HideReset = new QComboBox(GUI_ExtraSettings_Aqua3__);
        GUI_Aqua3_HideReset->setObjectName(QStringLiteral("GUI_Aqua3_HideReset"));

        formLayout->setWidget(3, QFormLayout::FieldRole, GUI_Aqua3_HideReset);

        GUI_ExtraSettings_Aqua3_->setWidget(GUI_ExtraSettings_Aqua3__);

        horizontalLayout_9->addWidget(GUI_ExtraSettings_Aqua3_);

        GUI_ExtraSettings->addWidget(GUI_ExtraSettings_Aquamark3);
        GUI_ExtraSettings_Unigine = new QWidget();
        GUI_ExtraSettings_Unigine->setObjectName(QStringLiteral("GUI_ExtraSettings_Unigine"));
#ifndef QT_NO_ACCESSIBILITY
        GUI_ExtraSettings_Unigine->setAccessibleName(QStringLiteral(""));
#endif // QT_NO_ACCESSIBILITY
        horizontalLayout_2 = new QHBoxLayout(GUI_ExtraSettings_Unigine);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        GUI_ExtraSettings_Unigine_ = new QScrollArea(GUI_ExtraSettings_Unigine);
        GUI_ExtraSettings_Unigine_->setObjectName(QStringLiteral("GUI_ExtraSettings_Unigine_"));
        GUI_ExtraSettings_Unigine_->setFrameShape(QFrame::NoFrame);
        GUI_ExtraSettings_Unigine_->setWidgetResizable(true);
        GUI_ExtraSettings_Unigine__ = new QWidget();
        GUI_ExtraSettings_Unigine__->setObjectName(QStringLiteral("GUI_ExtraSettings_Unigine__"));
        GUI_ExtraSettings_Unigine__->setGeometry(QRect(0, 0, 100, 30));
        GUI_ExtraSettings_Unigine_->setWidget(GUI_ExtraSettings_Unigine__);

        horizontalLayout_2->addWidget(GUI_ExtraSettings_Unigine_);

        GUI_ExtraSettings->addWidget(GUI_ExtraSettings_Unigine);

        horizontalLayout_4->addWidget(GUI_ExtraSettings);

        GUI_TabExtra_->setWidget(GUI_TabExtra__);

        horizontalLayout_6->addWidget(GUI_TabExtra_);

        GUI_Tabs->addTab(GUI_TabExtra, QString());

        verticalLayout->addWidget(GUI_Tabs);

        GUI_ButtonsLayout = new QFrame(picker);
        GUI_ButtonsLayout->setObjectName(QStringLiteral("GUI_ButtonsLayout"));
        GUI_ButtonsLayout->setFrameShape(QFrame::NoFrame);
        GUI_ButtonsLayout->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(GUI_ButtonsLayout);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        GUI_AddBtn = new QPushButton(GUI_ButtonsLayout);
        GUI_AddBtn->setObjectName(QStringLiteral("GUI_AddBtn"));
        GUI_AddBtn->setEnabled(true);
        GUI_AddBtn->setMinimumSize(QSize(141, 31));
        QFont font4;
        font4.setBold(false);
        font4.setWeight(50);
        GUI_AddBtn->setFont(font4);
        GUI_AddBtn->setAutoDefault(false);

        horizontalLayout->addWidget(GUI_AddBtn);

        GUI_OKBtn = new QPushButton(GUI_ButtonsLayout);
        GUI_OKBtn->setObjectName(QStringLiteral("GUI_OKBtn"));
        GUI_OKBtn->setEnabled(false);
        GUI_OKBtn->setMinimumSize(QSize(141, 31));
        GUI_OKBtn->setFont(font4);
        GUI_OKBtn->setAutoDefault(false);

        horizontalLayout->addWidget(GUI_OKBtn);

        GUI_CancelBtn = new QPushButton(GUI_ButtonsLayout);
        GUI_CancelBtn->setObjectName(QStringLiteral("GUI_CancelBtn"));
        GUI_CancelBtn->setEnabled(true);
        GUI_CancelBtn->setMinimumSize(QSize(141, 31));
        GUI_CancelBtn->setFont(font4);
        GUI_CancelBtn->setAutoDefault(false);

        horizontalLayout->addWidget(GUI_CancelBtn);


        verticalLayout->addWidget(GUI_ButtonsLayout);


        retranslateUi(picker);

        GUI_BenchType->setCurrentIndex(-1);
        GUI_Tabs->setCurrentIndex(0);
        GUI_ProcessPrio->setCurrentIndex(2);
        GUI_TabVGA_Brand->setCurrentIndex(0);
        GUI_ExtraSettings->setCurrentIndex(1);
        GUI_OKBtn->setDefault(true);


        QMetaObject::connectSlotsByName(picker);
    } // setupUi

    void retranslateUi(QDialog *picker)
    {
        picker->setWindowTitle(QApplication::translate("picker", "Select a benchmark", Q_NULLPTR));
        GUI_BenchType->clear();
        GUI_BenchType->insertItems(0, QStringList()
         << QApplication::translate("picker", "2D Benchmarks", Q_NULLPTR)
         << QApplication::translate("picker", "3D Benchmarks", Q_NULLPTR)
         << QApplication::translate("picker", "Video Games", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        GUI_BenchType->setToolTip(QApplication::translate("picker", "Please select a benchmark category.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GUI_BenchType->setCurrentText(QString());
#ifndef QT_NO_TOOLTIP
        GUI_BenchName->setToolTip(QApplication::translate("picker", "Please select a benchmark.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        GUI_BenchPreset->setToolTip(QApplication::translate("picker", "Please select a preset for the current benchmark.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GUI_BenchPreset->setCurrentText(QString());
#ifndef QT_NO_TOOLTIP
        GUI_Tabs->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        GUI_Cores_Groupbox->setTitle(QApplication::translate("picker", "Core Affinity", Q_NULLPTR));
        ckbCore03->setText(QApplication::translate("picker", "3", Q_NULLPTR));
        ckbCore05->setText(QApplication::translate("picker", "5", Q_NULLPTR));
        ckbCore01->setText(QApplication::translate("picker", "1", Q_NULLPTR));
        ckbCore02->setText(QApplication::translate("picker", "2", Q_NULLPTR));
        ckbCore06->setText(QApplication::translate("picker", "6", Q_NULLPTR));
        ckbCore07->setText(QApplication::translate("picker", "7", Q_NULLPTR));
        ckbCore04->setText(QApplication::translate("picker", "4", Q_NULLPTR));
        ckbCore08->setText(QApplication::translate("picker", "8", Q_NULLPTR));
        ckbCore09->setText(QApplication::translate("picker", "9", Q_NULLPTR));
        ckbCore10->setText(QApplication::translate("picker", "10", Q_NULLPTR));
        ckbCore27->setText(QApplication::translate("picker", "27", Q_NULLPTR));
        ckbCore39->setText(QApplication::translate("picker", "39", Q_NULLPTR));
        ckbCore41->setText(QApplication::translate("picker", "41", Q_NULLPTR));
        ckbCore42->setText(QApplication::translate("picker", "42", Q_NULLPTR));
        ckbCore13->setText(QApplication::translate("picker", "13", Q_NULLPTR));
        ckbCore18->setText(QApplication::translate("picker", "18", Q_NULLPTR));
        ckbCore20->setText(QApplication::translate("picker", "20", Q_NULLPTR));
        ckbCore28->setText(QApplication::translate("picker", "28", Q_NULLPTR));
        ckbCore38->setText(QApplication::translate("picker", "38", Q_NULLPTR));
        ckbCore40->setText(QApplication::translate("picker", "40", Q_NULLPTR));
        ckbCore34->setText(QApplication::translate("picker", "34", Q_NULLPTR));
        ckbCore15->setText(QApplication::translate("picker", "15", Q_NULLPTR));
        ckbCore12->setText(QApplication::translate("picker", "12", Q_NULLPTR));
        ckbCore14->setText(QApplication::translate("picker", "14", Q_NULLPTR));
        ckbCore23->setText(QApplication::translate("picker", "23", Q_NULLPTR));
        ckbCore11->setText(QApplication::translate("picker", "11", Q_NULLPTR));
        ckbCore25->setText(QApplication::translate("picker", "25", Q_NULLPTR));
        ckbCore16->setText(QApplication::translate("picker", "16", Q_NULLPTR));
        ckbCore26->setText(QApplication::translate("picker", "26", Q_NULLPTR));
        ckbCore29->setText(QApplication::translate("picker", "29", Q_NULLPTR));
        ckbCore21->setText(QApplication::translate("picker", "21", Q_NULLPTR));
        ckbCore30->setText(QApplication::translate("picker", "30", Q_NULLPTR));
        ckbCore36->setText(QApplication::translate("picker", "36", Q_NULLPTR));
        ckbCore22->setText(QApplication::translate("picker", "22", Q_NULLPTR));
        ckbCore19->setText(QApplication::translate("picker", "19", Q_NULLPTR));
        ckbCore31->setText(QApplication::translate("picker", "31", Q_NULLPTR));
        ckbCore33->setText(QApplication::translate("picker", "33", Q_NULLPTR));
        ckbCore35->setText(QApplication::translate("picker", "35", Q_NULLPTR));
        ckbCore17->setText(QApplication::translate("picker", "17", Q_NULLPTR));
        ckbCore24->setText(QApplication::translate("picker", "24", Q_NULLPTR));
        ckbCore32->setText(QApplication::translate("picker", "32", Q_NULLPTR));
        ckbCore37->setText(QApplication::translate("picker", "37", Q_NULLPTR));
        ckbCore51->setText(QApplication::translate("picker", "51", Q_NULLPTR));
        ckbCore49->setText(QApplication::translate("picker", "49", Q_NULLPTR));
        ckbCore59->setText(QApplication::translate("picker", "59", Q_NULLPTR));
        ckbCore60->setText(QApplication::translate("picker", "60", Q_NULLPTR));
        ckbCore45->setText(QApplication::translate("picker", "45", Q_NULLPTR));
        ckbCore47->setText(QApplication::translate("picker", "47", Q_NULLPTR));
        ckbCore50->setText(QApplication::translate("picker", "50", Q_NULLPTR));
        ckbCore46->setText(QApplication::translate("picker", "46", Q_NULLPTR));
        ckbCore52->setText(QApplication::translate("picker", "52", Q_NULLPTR));
        ckbCore43->setText(QApplication::translate("picker", "43", Q_NULLPTR));
        ckbCore44->setText(QApplication::translate("picker", "44", Q_NULLPTR));
        ckbCore54->setText(QApplication::translate("picker", "54", Q_NULLPTR));
        ckbCore55->setText(QApplication::translate("picker", "55", Q_NULLPTR));
        ckbCore48->setText(QApplication::translate("picker", "48", Q_NULLPTR));
        ckbCore56->setText(QApplication::translate("picker", "56", Q_NULLPTR));
        ckbCore57->setText(QApplication::translate("picker", "57", Q_NULLPTR));
        ckbCore53->setText(QApplication::translate("picker", "53", Q_NULLPTR));
        ckbCore58->setText(QApplication::translate("picker", "58", Q_NULLPTR));
        ckbCore63->setText(QApplication::translate("picker", "63", Q_NULLPTR));
        ckbCore62->setText(QApplication::translate("picker", "62", Q_NULLPTR));
        ckbCore64->setText(QApplication::translate("picker", "64", Q_NULLPTR));
        ckbCore61->setText(QApplication::translate("picker", "61", Q_NULLPTR));
        GUI_ProcessPrio->clear();
        GUI_ProcessPrio->insertItems(0, QStringList()
         << QApplication::translate("picker", "Idle", Q_NULLPTR)
         << QApplication::translate("picker", "Below Normal", Q_NULLPTR)
         << QApplication::translate("picker", "Normal", Q_NULLPTR)
         << QApplication::translate("picker", "Above Normal", Q_NULLPTR)
         << QApplication::translate("picker", "High", Q_NULLPTR)
         << QApplication::translate("picker", "Realtime", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        GUI_ProcessPrio->setToolTip(QApplication::translate("picker", "Set process priority.\n"
"Higher means more processor load.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        GUI_ProcessPrio->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        GUI_ProcessPrio->setCurrentText(QApplication::translate("picker", "Normal", Q_NULLPTR));
        GUI_Tabs->setTabText(GUI_Tabs->indexOf(GUI_TabCPU), QApplication::translate("picker", "CPU Settings", Q_NULLPTR));
        GUI_Tabs->setTabToolTip(GUI_Tabs->indexOf(GUI_TabCPU), QApplication::translate("picker", "Processor tweaks.", Q_NULLPTR));
        GUI_Tabs->setTabWhatsThis(GUI_Tabs->indexOf(GUI_TabCPU), QApplication::translate("picker", "Processor tweaks.", Q_NULLPTR));
        GUI_TabVGA_AMD_Lod->setTitle(QApplication::translate("picker", "Level of detail", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        GUI_LODValue_AMD->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        GUI_LODValue_AMD->setText(QApplication::translate("picker", "------", Q_NULLPTR));
        GUI_TabVGA_AMD_Misc->setTitle(QApplication::translate("picker", "Misc", Q_NULLPTR));
        GUI_TabVGA_Brand->setTabText(GUI_TabVGA_Brand->indexOf(GUI_TabVGA_AMD), QApplication::translate("picker", "AMD/ATI", Q_NULLPTR));
        GUI_TabVGA_NVIDIA_Message->setText(QApplication::translate("picker", "NOT SUPPORTED", Q_NULLPTR));
        GUI_TabVGA_Brand->setTabText(GUI_TabVGA_Brand->indexOf(GUI_TabVGA_NVIDIA), QApplication::translate("picker", "NVIDIA", Q_NULLPTR));
        GUI_Tabs->setTabText(GUI_Tabs->indexOf(GUI_TabVGA), QApplication::translate("picker", "VGA Settings", Q_NULLPTR));
        GUI_Tabs->setTabToolTip(GUI_Tabs->indexOf(GUI_TabVGA), QApplication::translate("picker", "Video card settings and tweaks.", Q_NULLPTR));
        GUI_Tabs->setTabWhatsThis(GUI_Tabs->indexOf(GUI_TabVGA), QApplication::translate("picker", "Video card settings and tweaks.", Q_NULLPTR));
        GUI_ExtraSettings_Page0_Message->setText(QApplication::translate("picker", "No settings available for the selected benchmark preset.", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        lblRunMode->setWhatsThis(QApplication::translate("picker", "Use Manual if you experience problems with old cards or IGP.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        lblRunMode->setText(QApplication::translate("picker", "Run Mode", Q_NULLPTR));
        GUI_Aqua3_RunMode->clear();
        GUI_Aqua3_RunMode->insertItems(0, QStringList()
         << QApplication::translate("picker", "Automatic", Q_NULLPTR)
         << QApplication::translate("picker", "Manual", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        GUI_Aqua3_RunMode->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        GUI_Aqua3_RunMode->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        lblHideLogo->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        lblHideLogo->setText(QApplication::translate("picker", "Hide Logo", Q_NULLPTR));
        GUI_Aqua3_HideLogo->clear();
        GUI_Aqua3_HideLogo->insertItems(0, QStringList()
         << QApplication::translate("picker", "True", Q_NULLPTR)
         << QApplication::translate("picker", "False", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        GUI_Aqua3_HideLogo->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        GUI_Aqua3_HideLogo->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_WHATSTHIS
        lblOSD->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        lblOSD->setText(QApplication::translate("picker", "OSD Statistics", Q_NULLPTR));
        GUI_Aqua3_OSD->clear();
        GUI_Aqua3_OSD->insertItems(0, QStringList()
         << QApplication::translate("picker", "True", Q_NULLPTR)
         << QApplication::translate("picker", "False", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        GUI_Aqua3_OSD->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        GUI_Aqua3_OSD->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_TOOLTIP
        lblOSD_2->setToolTip(QApplication::translate("picker", "If set to TRUE it will no longer ask the user if he wants to reset settings after a session that was closed prematurely.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lblOSD_2->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        lblOSD_2->setText(QApplication::translate("picker", "Hide Reset Error", Q_NULLPTR));
        GUI_Aqua3_HideReset->clear();
        GUI_Aqua3_HideReset->insertItems(0, QStringList()
         << QApplication::translate("picker", "True", Q_NULLPTR)
         << QApplication::translate("picker", "False", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        GUI_Aqua3_HideReset->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        GUI_Aqua3_HideReset->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        GUI_Tabs->setTabText(GUI_Tabs->indexOf(GUI_TabExtra), QApplication::translate("picker", "Benchmark Settings", Q_NULLPTR));
        GUI_Tabs->setTabToolTip(GUI_Tabs->indexOf(GUI_TabExtra), QApplication::translate("picker", "Settings for the selected benchmark.", Q_NULLPTR));
        GUI_Tabs->setTabWhatsThis(GUI_Tabs->indexOf(GUI_TabExtra), QApplication::translate("picker", "Settings for the selected benchmark.", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GUI_AddBtn->setToolTip(QApplication::translate("picker", "Add a new benchmark or game.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        GUI_AddBtn->setText(QApplication::translate("picker", "&Add new...", Q_NULLPTR));
        GUI_OKBtn->setText(QApplication::translate("picker", "&OK", Q_NULLPTR));
        GUI_CancelBtn->setText(QApplication::translate("picker", "&Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class picker: public Ui_picker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKER_H
