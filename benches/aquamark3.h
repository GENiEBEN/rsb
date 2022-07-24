#ifndef AQUAMARK3_H
#define AQUAMARK3_H
#include <QApplication>

extern bool Aquamark3_ClearMyDocs(QString FolderPath);
extern bool Aquamark3_WriteLicenseFile(QString FolderPath);
extern bool Aquamark3_WriteRunFile(QString FolderPath, int EnableSound, int Depth, int AAM, int AAQ, int AF, int Detail, QString Resolution);
extern QStringList Aquamark3_ReadScore(QString File);
extern QStringList Aquamark3_ReadChapters(QString File);
bool Aquamark3_RanAtDefaultSettings(QString File);



class aquamark3
{
public:


signals:

public slots:
};

#endif // AQUAMARK3_H
