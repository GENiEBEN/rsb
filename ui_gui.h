/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gui
{
public:
    QAction *GUI_Menus_Select_Aqua3;
    QAction *GUI_Menus_Select_Cine03;
    QAction *GUI_Menus_Select_Cine115;
    QAction *GUI_Menus_Select_Cine15;
    QAction *GUI_Menus_About;
    QAction *GUI_Menus_Update;
    QAction *GUI_Menus_BenchOptions;
    QAction *GUI_Menus_WrapperOptions;
    QAction *GUI_Menus_Theme_FusionD;
    QAction *GUI_Menus_Theme_FusionL;
    QAction *GUI_Menus_Theme_Win;
    QAction *GUI_Menus_Theme_WinXP;
    QAction *GUI_Menus_Theme_Vista;
    QAction *GUI_Menus_Select_UniDX9;
    QAction *GUI_Menus_Select_UniDX11;
    QAction *GUI_Menus_SaveToDesk;
    QAction *GUI_Menus_SaveTo;
    QAction *GUI_Menus_SubmitOnline;
    QAction *GUI_Menus_Picker;
    QAction *GUI_Menus_Start_Now;
    QAction *GUI_Menus_Start_KeepBest;
    QAction *GUI_Menus_Start_Batch;
    QAction *GUI_Menus_Exit;
    QAction *action_Report_bug;
    QAction *actionRe_quest_feature;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *GUI_Sysinfo;
    QPushButton *GUI_StartBtn;
    QMenuBar *GUI_MenuBar;
    QMenu *GUI_Menus_Settings;
    QMenu *GUI_Menus_Themes;
    QMenu *GUI_Menus_Save;
    QMenu *GUI_Menus_Help;
    QMenu *GUI_Menus_Start;
    QDockWidget *GUI_ScoreDock;
    QWidget *GUI_ScoreDock_Layout;
    QVBoxLayout *verticalLayout;
    QLCDNumber *GUI_Score;
    QTableWidget *GUI_Subscores;
    QPushButton *GUI_SaveBtn;

    void setupUi(QMainWindow *gui)
    {
        if (gui->objectName().isEmpty())
            gui->setObjectName(QStringLiteral("gui"));
        gui->resize(469, 449);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gui->sizePolicy().hasHeightForWidth());
        gui->setSizePolicy(sizePolicy);
        gui->setWindowTitle(QStringLiteral("RSB"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/splash.png"), QSize(), QIcon::Normal, QIcon::Off);
        gui->setWindowIcon(icon);
        gui->setAnimated(false);
        gui->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks);
        gui->setUnifiedTitleAndToolBarOnMac(true);
        GUI_Menus_Select_Aqua3 = new QAction(gui);
        GUI_Menus_Select_Aqua3->setObjectName(QStringLiteral("GUI_Menus_Select_Aqua3"));
        GUI_Menus_Select_Aqua3->setCheckable(true);
        GUI_Menus_Select_Cine03 = new QAction(gui);
        GUI_Menus_Select_Cine03->setObjectName(QStringLiteral("GUI_Menus_Select_Cine03"));
        GUI_Menus_Select_Cine03->setCheckable(true);
        GUI_Menus_Select_Cine115 = new QAction(gui);
        GUI_Menus_Select_Cine115->setObjectName(QStringLiteral("GUI_Menus_Select_Cine115"));
        GUI_Menus_Select_Cine115->setCheckable(true);
        GUI_Menus_Select_Cine15 = new QAction(gui);
        GUI_Menus_Select_Cine15->setObjectName(QStringLiteral("GUI_Menus_Select_Cine15"));
        GUI_Menus_Select_Cine15->setCheckable(true);
        GUI_Menus_About = new QAction(gui);
        GUI_Menus_About->setObjectName(QStringLiteral("GUI_Menus_About"));
        GUI_Menus_Update = new QAction(gui);
        GUI_Menus_Update->setObjectName(QStringLiteral("GUI_Menus_Update"));
        GUI_Menus_BenchOptions = new QAction(gui);
        GUI_Menus_BenchOptions->setObjectName(QStringLiteral("GUI_Menus_BenchOptions"));
        GUI_Menus_WrapperOptions = new QAction(gui);
        GUI_Menus_WrapperOptions->setObjectName(QStringLiteral("GUI_Menus_WrapperOptions"));
        GUI_Menus_WrapperOptions->setMenuRole(QAction::PreferencesRole);
        GUI_Menus_Theme_FusionD = new QAction(gui);
        GUI_Menus_Theme_FusionD->setObjectName(QStringLiteral("GUI_Menus_Theme_FusionD"));
        GUI_Menus_Theme_FusionL = new QAction(gui);
        GUI_Menus_Theme_FusionL->setObjectName(QStringLiteral("GUI_Menus_Theme_FusionL"));
        GUI_Menus_Theme_Win = new QAction(gui);
        GUI_Menus_Theme_Win->setObjectName(QStringLiteral("GUI_Menus_Theme_Win"));
        GUI_Menus_Theme_WinXP = new QAction(gui);
        GUI_Menus_Theme_WinXP->setObjectName(QStringLiteral("GUI_Menus_Theme_WinXP"));
        GUI_Menus_Theme_Vista = new QAction(gui);
        GUI_Menus_Theme_Vista->setObjectName(QStringLiteral("GUI_Menus_Theme_Vista"));
        GUI_Menus_Select_UniDX9 = new QAction(gui);
        GUI_Menus_Select_UniDX9->setObjectName(QStringLiteral("GUI_Menus_Select_UniDX9"));
        GUI_Menus_Select_UniDX9->setCheckable(true);
        GUI_Menus_Select_UniDX11 = new QAction(gui);
        GUI_Menus_Select_UniDX11->setObjectName(QStringLiteral("GUI_Menus_Select_UniDX11"));
        GUI_Menus_Select_UniDX11->setCheckable(true);
        GUI_Menus_SaveToDesk = new QAction(gui);
        GUI_Menus_SaveToDesk->setObjectName(QStringLiteral("GUI_Menus_SaveToDesk"));
        GUI_Menus_SaveTo = new QAction(gui);
        GUI_Menus_SaveTo->setObjectName(QStringLiteral("GUI_Menus_SaveTo"));
        GUI_Menus_SubmitOnline = new QAction(gui);
        GUI_Menus_SubmitOnline->setObjectName(QStringLiteral("GUI_Menus_SubmitOnline"));
        GUI_Menus_Picker = new QAction(gui);
        GUI_Menus_Picker->setObjectName(QStringLiteral("GUI_Menus_Picker"));
        QFont font;
        font.setBold(true);
        GUI_Menus_Picker->setFont(font);
        GUI_Menus_Start_Now = new QAction(gui);
        GUI_Menus_Start_Now->setObjectName(QStringLiteral("GUI_Menus_Start_Now"));
        GUI_Menus_Start_Now->setEnabled(false);
        GUI_Menus_Start_Now->setFont(font);
        GUI_Menus_Start_KeepBest = new QAction(gui);
        GUI_Menus_Start_KeepBest->setObjectName(QStringLiteral("GUI_Menus_Start_KeepBest"));
        GUI_Menus_Start_KeepBest->setCheckable(true);
        GUI_Menus_Start_KeepBest->setChecked(true);
        GUI_Menus_Start_Batch = new QAction(gui);
        GUI_Menus_Start_Batch->setObjectName(QStringLiteral("GUI_Menus_Start_Batch"));
        GUI_Menus_Start_Batch->setEnabled(false);
        GUI_Menus_Exit = new QAction(gui);
        GUI_Menus_Exit->setObjectName(QStringLiteral("GUI_Menus_Exit"));
        action_Report_bug = new QAction(gui);
        action_Report_bug->setObjectName(QStringLiteral("action_Report_bug"));
        actionRe_quest_feature = new QAction(gui);
        actionRe_quest_feature->setObjectName(QStringLiteral("actionRe_quest_feature"));
        centralWidget = new QWidget(gui);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        GUI_Sysinfo = new QTableWidget(centralWidget);
        if (GUI_Sysinfo->columnCount() < 2)
            GUI_Sysinfo->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setText(QStringLiteral("Part"));
        GUI_Sysinfo->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setText(QStringLiteral("Description"));
        GUI_Sysinfo->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        GUI_Sysinfo->setObjectName(QStringLiteral("GUI_Sysinfo"));
        GUI_Sysinfo->setEditTriggers(QAbstractItemView::NoEditTriggers);
        GUI_Sysinfo->setTabKeyNavigation(false);
        GUI_Sysinfo->setProperty("showDropIndicator", QVariant(false));
        GUI_Sysinfo->setAlternatingRowColors(true);
        GUI_Sysinfo->setSelectionMode(QAbstractItemView::NoSelection);
        GUI_Sysinfo->setSelectionBehavior(QAbstractItemView::SelectRows);
        GUI_Sysinfo->setIconSize(QSize(32, 32));
        GUI_Sysinfo->setShowGrid(false);
        GUI_Sysinfo->horizontalHeader()->setVisible(false);
        GUI_Sysinfo->horizontalHeader()->setStretchLastSection(true);
        GUI_Sysinfo->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(GUI_Sysinfo);

        GUI_StartBtn = new QPushButton(centralWidget);
        GUI_StartBtn->setObjectName(QStringLiteral("GUI_StartBtn"));
        GUI_StartBtn->setEnabled(false);
        GUI_StartBtn->setMinimumSize(QSize(75, 31));
        GUI_StartBtn->setFont(font);

        verticalLayout_2->addWidget(GUI_StartBtn);

        gui->setCentralWidget(centralWidget);
        GUI_MenuBar = new QMenuBar(gui);
        GUI_MenuBar->setObjectName(QStringLiteral("GUI_MenuBar"));
        GUI_MenuBar->setGeometry(QRect(0, 0, 469, 21));
        GUI_Menus_Settings = new QMenu(GUI_MenuBar);
        GUI_Menus_Settings->setObjectName(QStringLiteral("GUI_Menus_Settings"));
        GUI_Menus_Themes = new QMenu(GUI_Menus_Settings);
        GUI_Menus_Themes->setObjectName(QStringLiteral("GUI_Menus_Themes"));
        GUI_Menus_Save = new QMenu(GUI_MenuBar);
        GUI_Menus_Save->setObjectName(QStringLiteral("GUI_Menus_Save"));
        GUI_Menus_Help = new QMenu(GUI_MenuBar);
        GUI_Menus_Help->setObjectName(QStringLiteral("GUI_Menus_Help"));
        GUI_Menus_Start = new QMenu(GUI_MenuBar);
        GUI_Menus_Start->setObjectName(QStringLiteral("GUI_Menus_Start"));
        gui->setMenuBar(GUI_MenuBar);
        GUI_ScoreDock = new QDockWidget(gui);
        GUI_ScoreDock->setObjectName(QStringLiteral("GUI_ScoreDock"));
        GUI_ScoreDock->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(GUI_ScoreDock->sizePolicy().hasHeightForWidth());
        GUI_ScoreDock->setSizePolicy(sizePolicy1);
        GUI_ScoreDock->setMinimumSize(QSize(175, 233));
        GUI_ScoreDock->setMaximumSize(QSize(200, 524287));
        GUI_ScoreDock->setFloating(false);
        GUI_ScoreDock->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        GUI_ScoreDock->setAllowedAreas(Qt::LeftDockWidgetArea|Qt::RightDockWidgetArea);
        GUI_ScoreDock->setWindowTitle(QStringLiteral(""));
        GUI_ScoreDock_Layout = new QWidget();
        GUI_ScoreDock_Layout->setObjectName(QStringLiteral("GUI_ScoreDock_Layout"));
        verticalLayout = new QVBoxLayout(GUI_ScoreDock_Layout);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        GUI_Score = new QLCDNumber(GUI_ScoreDock_Layout);
        GUI_Score->setObjectName(QStringLiteral("GUI_Score"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(GUI_Score->sizePolicy().hasHeightForWidth());
        GUI_Score->setSizePolicy(sizePolicy2);
        GUI_Score->setMinimumSize(QSize(0, 60));
        GUI_Score->setLayoutDirection(Qt::RightToLeft);
        GUI_Score->setFrameShape(QFrame::NoFrame);
        GUI_Score->setSmallDecimalPoint(true);
        GUI_Score->setDigitCount(8);
        GUI_Score->setSegmentStyle(QLCDNumber::Flat);
        GUI_Score->setProperty("value", QVariant(0));
        GUI_Score->setProperty("intValue", QVariant(0));

        verticalLayout->addWidget(GUI_Score);

        GUI_Subscores = new QTableWidget(GUI_ScoreDock_Layout);
        if (GUI_Subscores->columnCount() < 2)
            GUI_Subscores->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        GUI_Subscores->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        GUI_Subscores->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        GUI_Subscores->setObjectName(QStringLiteral("GUI_Subscores"));
        GUI_Subscores->setEnabled(false);
        GUI_Subscores->setEditTriggers(QAbstractItemView::NoEditTriggers);
        GUI_Subscores->setTabKeyNavigation(false);
        GUI_Subscores->setProperty("showDropIndicator", QVariant(false));
        GUI_Subscores->setAlternatingRowColors(true);
        GUI_Subscores->setSelectionMode(QAbstractItemView::NoSelection);
        GUI_Subscores->setSelectionBehavior(QAbstractItemView::SelectRows);
        GUI_Subscores->setShowGrid(false);
        GUI_Subscores->horizontalHeader()->setCascadingSectionResizes(true);
        GUI_Subscores->horizontalHeader()->setDefaultSectionSize(50);
        GUI_Subscores->horizontalHeader()->setHighlightSections(false);
        GUI_Subscores->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        GUI_Subscores->horizontalHeader()->setStretchLastSection(true);
        GUI_Subscores->verticalHeader()->setVisible(false);
        GUI_Subscores->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(GUI_Subscores);

        GUI_SaveBtn = new QPushButton(GUI_ScoreDock_Layout);
        GUI_SaveBtn->setObjectName(QStringLiteral("GUI_SaveBtn"));
        GUI_SaveBtn->setEnabled(false);
        GUI_SaveBtn->setMinimumSize(QSize(141, 31));
        QFont font1;
        font1.setBold(false);
        GUI_SaveBtn->setFont(font1);

        verticalLayout->addWidget(GUI_SaveBtn);

        GUI_ScoreDock->setWidget(GUI_ScoreDock_Layout);
        gui->addDockWidget(static_cast<Qt::DockWidgetArea>(2), GUI_ScoreDock);

        GUI_MenuBar->addAction(GUI_Menus_Settings->menuAction());
        GUI_MenuBar->addAction(GUI_Menus_Start->menuAction());
        GUI_MenuBar->addAction(GUI_Menus_Save->menuAction());
        GUI_MenuBar->addAction(GUI_Menus_Help->menuAction());
        GUI_Menus_Settings->addAction(GUI_Menus_WrapperOptions);
        GUI_Menus_Settings->addSeparator();
        GUI_Menus_Settings->addAction(GUI_Menus_Start_KeepBest);
        GUI_Menus_Settings->addAction(GUI_Menus_Themes->menuAction());
        GUI_Menus_Settings->addSeparator();
        GUI_Menus_Settings->addAction(GUI_Menus_Exit);
        GUI_Menus_Themes->addAction(GUI_Menus_Theme_FusionL);
        GUI_Menus_Themes->addAction(GUI_Menus_Theme_FusionD);
        GUI_Menus_Themes->addAction(GUI_Menus_Theme_Win);
        GUI_Menus_Themes->addAction(GUI_Menus_Theme_WinXP);
        GUI_Menus_Themes->addAction(GUI_Menus_Theme_Vista);
        GUI_Menus_Save->addAction(GUI_Menus_SaveTo);
        GUI_Menus_Save->addAction(GUI_Menus_SaveToDesk);
        GUI_Menus_Save->addSeparator();
        GUI_Menus_Save->addAction(GUI_Menus_SubmitOnline);
        GUI_Menus_Help->addAction(GUI_Menus_Update);
        GUI_Menus_Help->addSeparator();
        GUI_Menus_Help->addAction(actionRe_quest_feature);
        GUI_Menus_Help->addAction(action_Report_bug);
        GUI_Menus_Help->addSeparator();
        GUI_Menus_Help->addAction(GUI_Menus_About);
        GUI_Menus_Start->addAction(GUI_Menus_Picker);
        GUI_Menus_Start->addAction(GUI_Menus_Start_Now);
        GUI_Menus_Start->addSeparator();
        GUI_Menus_Start->addAction(GUI_Menus_Start_Batch);

        retranslateUi(gui);

        GUI_StartBtn->setDefault(true);


        QMetaObject::connectSlotsByName(gui);
    } // setupUi

    void retranslateUi(QMainWindow *gui)
    {
        GUI_Menus_Select_Aqua3->setText(QApplication::translate("gui", "Aquamark3", Q_NULLPTR));
        GUI_Menus_Select_Cine03->setText(QApplication::translate("gui", "Cinebench 2003", Q_NULLPTR));
        GUI_Menus_Select_Cine115->setText(QApplication::translate("gui", "Cinebench R11.5", Q_NULLPTR));
        GUI_Menus_Select_Cine15->setText(QApplication::translate("gui", "Cinebench R15", Q_NULLPTR));
        GUI_Menus_About->setText(QApplication::translate("gui", "About", Q_NULLPTR));
        GUI_Menus_Update->setText(QApplication::translate("gui", "Check for updates", Q_NULLPTR));
        GUI_Menus_BenchOptions->setText(QApplication::translate("gui", "Benchmark &Options", Q_NULLPTR));
        GUI_Menus_WrapperOptions->setText(QApplication::translate("gui", "&Options", Q_NULLPTR));
        GUI_Menus_Theme_FusionD->setText(QApplication::translate("gui", "Fusion Dark", Q_NULLPTR));
        GUI_Menus_Theme_FusionL->setText(QApplication::translate("gui", "Fusion Light", Q_NULLPTR));
        GUI_Menus_Theme_Win->setText(QApplication::translate("gui", "Windows", Q_NULLPTR));
        GUI_Menus_Theme_WinXP->setText(QApplication::translate("gui", "Windows XP", Q_NULLPTR));
        GUI_Menus_Theme_Vista->setText(QApplication::translate("gui", "Windows Vista", Q_NULLPTR));
        GUI_Menus_Select_UniDX9->setText(QApplication::translate("gui", "Unigine Basic", Q_NULLPTR));
        GUI_Menus_Select_UniDX11->setText(QApplication::translate("gui", "Unigine Xtreme", Q_NULLPTR));
        GUI_Menus_SaveToDesk->setText(QApplication::translate("gui", "Save to desktop", Q_NULLPTR));
        GUI_Menus_SaveTo->setText(QApplication::translate("gui", "Save as...", Q_NULLPTR));
        GUI_Menus_SubmitOnline->setText(QApplication::translate("gui", "Submit online...", Q_NULLPTR));
        GUI_Menus_Picker->setText(QApplication::translate("gui", "Select &Benchmark", Q_NULLPTR));
        GUI_Menus_Start_Now->setText(QApplication::translate("gui", "&Start now", Q_NULLPTR));
        GUI_Menus_Start_KeepBest->setText(QApplication::translate("gui", "Show best score only", Q_NULLPTR));
        GUI_Menus_Start_Batch->setText(QApplication::translate("gui", "Batch &Run", Q_NULLPTR));
        GUI_Menus_Exit->setText(QApplication::translate("gui", "E&xit", Q_NULLPTR));
        action_Report_bug->setText(QApplication::translate("gui", "&Report bug...", Q_NULLPTR));
        actionRe_quest_feature->setText(QApplication::translate("gui", "Re&quest feature...", Q_NULLPTR));
        GUI_StartBtn->setText(QApplication::translate("gui", "START", Q_NULLPTR));
        GUI_StartBtn->setShortcut(QApplication::translate("gui", "Ctrl+S", Q_NULLPTR));
        GUI_Menus_Settings->setTitle(QApplication::translate("gui", "Settings", Q_NULLPTR));
        GUI_Menus_Themes->setTitle(QApplication::translate("gui", "Theme", Q_NULLPTR));
        GUI_Menus_Save->setTitle(QApplication::translate("gui", "Save && Submit", Q_NULLPTR));
        GUI_Menus_Help->setTitle(QApplication::translate("gui", "Help", Q_NULLPTR));
        GUI_Menus_Start->setTitle(QApplication::translate("gui", "Start", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        GUI_ScoreDock->setToolTip(QApplication::translate("gui", "Double-click on titlebar or press the button\n"
"to detach from the main window.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        QTableWidgetItem *___qtablewidgetitem = GUI_Subscores->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("gui", "Test", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = GUI_Subscores->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("gui", "Score", Q_NULLPTR));
        GUI_SaveBtn->setText(QApplication::translate("gui", "Save to desktop", Q_NULLPTR));
        GUI_SaveBtn->setShortcut(QApplication::translate("gui", "F7", Q_NULLPTR));
        Q_UNUSED(gui);
    } // retranslateUi

};

namespace Ui {
    class gui: public Ui_gui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
