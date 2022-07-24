#ifndef PICKER_H
#define PICKER_H

#include <QDialog>


namespace Ui {
class picker;
}

class picker : public QDialog
{
    Q_OBJECT

public:
    explicit picker(QWidget *parent = 0);
    ~picker();

private slots:

    void on_GUI_OKBtn_clicked();

    void on_GUI_BenchType_currentIndexChanged(int index);

    void on_GUI_BenchName_currentIndexChanged(const QString &arg1);

    void on_GUI_CancelBtn_clicked();

    void on_GUI_LODDial_AMD_valueChanged(int value);


    void on_GUI_BenchPreset_currentIndexChanged(const QString &arg1);

signals:
    void benchmarkChosen(QString,QString);

private:
    Ui::picker *ui;
    void loadBenches(QString benchType);
    void loadSettings();
    void saveSettings();

};

#endif // PICKER_H
