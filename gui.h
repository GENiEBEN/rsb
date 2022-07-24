#ifndef GUI_H
#define GUI_H

#include <QMainWindow>

namespace Ui {
class gui;
}

class gui : public QMainWindow
{
    Q_OBJECT

public:
    explicit gui(QWidget *parent = 0);
    ~gui();

protected:
    void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;

private slots:

    void on_GUI_Menus_Theme_FusionD_triggered();

    void on_GUI_Menus_Theme_FusionL_triggered();

    void on_GUI_Menus_Theme_Win_triggered();

    void on_GUI_Menus_Theme_WinXP_triggered();

    void on_GUI_Menus_Theme_Vista_triggered();

    void on_GUI_Menus_Picker_triggered();

    void benchmarkChosen(QString benchName, QString benchPreset);

    void on_GUI_StartBtn_clicked();

private:
    Ui::gui *ui;
    void readSettings();
    void writeSettings();
    void setTheme(QString name, bool isDark = false);
    bool reallyQuit();
    bool saveScore(bool toDesktop = true);
    void insertSubscore(QString type, QString value);
};

#endif // GUI_H
