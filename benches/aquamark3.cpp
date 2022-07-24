#include "benches/aquamark3.h"
#include "helpers/misc.h"
#include <QDebug>
#include <QDir>

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//AQUAMARK3//////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Aquamark3_ClearMyDocs
/// \param FolderPath
/// \return
/// Delete and recreate MyDocuments\Aquamark3 folder
bool Aquamark3_ClearMyDocs(QString FolderPath)
{
    QDir folder; folder.setPath(FolderPath);
    if (folder.removeRecursively()){
        qInfo() << "Removed folder" << folder.absolutePath();
    } else {
        qCritical() << "Failed to remove folder" << folder.absolutePath();
        return false;
    }
    if (!folder.exists()) {
        if (folder.mkpath(".")){
            qInfo() << "Created folder" << folder.absolutePath();
            return true;
        } else {
            qCritical() << "Failed to create folder" << folder.absolutePath();
            return false;
        }
    }
    return false;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Aquamark3_WriteLicenseFile
/// \param FolderPath
/// \return
///
bool Aquamark3_WriteLicenseFile(QString FolderPath)
{
    QDir folder; folder.setPath(FolderPath);
    QFile outfile(QString("%1/License.txt").arg(folder.absolutePath()));
    if (outfile.open(QIODevice::ReadWrite)){
        QTextStream stream( &outfile );
        stream << "[AquaMark3License]\n{\n\tLicenseType = \"Commercial Plus\"\n\tUserID = \"John Urbanic (dhiltonmd@aol.com)\"\n\tKey = \"JU7R-T7GY-UYM3-JH4K-X4E6-S8F9-N7C5-XWUE-H3TU\"\n}" << endl;
    }
    outfile.close();
    if (outfile.exists()){
        qInfo() << "Aquamark3 License.txt created in" << folder.absolutePath();
        return true;
    } else {
        qWarning() << "Failed to create Aquamark3 License.txt in" << folder.absolutePath();
        return false;
    }
    return false;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Aquamark3_WriteRunFile
/// \param FolderPath
/// \param EnableSound
/// \param Depth
/// \param AAM
/// \param AAQ
/// \param AF
/// \param Detail
/// \param Resolution
/// \return
///Creates the Run.txt file needed for AUTO mode (skipping the menus and automatically starting)
bool Aquamark3_WriteRunFile(QString FolderPath, int EnableSound, int Depth, int AAM, int AAQ, int AF, int Detail, QString Resolution)
{
    QDir folder; folder.setPath(FolderPath);
    QFile outfile(QString("%1/Run.txt").arg(folder.absolutePath()));
    if (outfile.open(QIODevice::ReadWrite)){
        QTextStream stream( &outfile );
        stream << "EnableSound=" << EnableSound
               << "\nDepth=" << Depth
               << "\nResolution=" << Resolution
               << "\nAntialiasingMode=" << AAM
               << "\nAntialiasingQuality=" << AAQ
               << "\nAnisotropy=" << AF
               << "\nDetail=" << Detail
               << endl;
   }
    outfile.close();
    if (outfile.exists()){
        qInfo() << "Aquamark3 Run.txt created in" << folder.absolutePath();
        qInfo() << "Aquamark3 Run.txt settings:";
        qInfo() << "\tEnable Sound =" << EnableSound;
        qInfo() << "\tDepth =" << Depth;
        qInfo() << "\tResolution =" << Resolution;
        qInfo() << "\tAntialiasing Mode =" << AAM;
        qInfo() << "\tAntialiasing Quality =" << AAQ;
        qInfo() << "\tAnisotropy =" << AF;
        qInfo() << "\tDetail =" << Detail;
        return true;
    } else {
        qWarning() << "Failed to create Aquamark3 Run.txt in" << folder.absolutePath();
        return false;
    }
    return false;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////

QStringList Aquamark3_ReadScore(QString File){
    QString foo; int fooloop = 0;QStringList foolist; QStringList result;
    QFile inputFile(File);
    if (inputFile.exists()){
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            while ( !in.atEnd() ){
                if (fooloop > 31 ){ foo = in.readLine(); }
                fooloop += 1;
            }
            inputFile.close();
            qInfo() << "Opened and read the Aquamark3 score file.";
        }
        foolist = foo.split( 0x09 );//split by TAB delimiter.
        result << QString::number(round(foolist.at(1).toDouble() * 1000));
        result << QString::number(round(foolist.at(4).toDouble() * 100));
        result << QString::number(round(foolist.at(5).toDouble() * 50));
    } else {
        result << 0;
        qWarning() << "Could not read the Aquamark3 score file.";
    }
    return result;
}

QStringList Aquamark3_ReadChapters(QString File){
    QString foo; int fooloop = 0;QStringList foolist; QStringList result;
    QFile inputFile(File);
    if (inputFile.exists()){
        if (inputFile.open(QIODevice::ReadOnly)){
            QTextStream in(&inputFile);
            while ( !in.atEnd() ){
                foo = in.readLine();
                if (fooloop==27){
                    foolist=foo.split(0x09);
                    result << QString::number(foolist.at(3).toDouble());
                }
                if (fooloop==28){
                    foolist=foo.split(0x09);
                    result <<  QString::number(foolist.at(3).toDouble());
                }
                if (fooloop==29){
                    foolist=foo.split(0x09);
                    result << QString::number(foolist.at(3).toDouble());
                }
                if (fooloop==30){
                    foolist=foo.split(0x09);
                    result <<  QString::number(foolist.at(3).toDouble());
                }
                if (fooloop==31){
                    foolist=foo.split(0x09);
                    result << QString::number(foolist.at(3).toDouble());
                }
                if (fooloop==32){
                    foolist=foo.split(0x09);
                    result << QString::number(foolist.at(3).toDouble());
                }
                if (fooloop==33){
                    foolist=foo.split(0x09);
                    result << QString::number(foolist.at(3).toDouble());
                }
                if (fooloop==34){
                    foolist=foo.split(0x09);
                    result << QString::number(foolist.at(3).toDouble());
                }
                if (fooloop==35){
                    foolist=foo.split(0x09);
                    result << QString::number(foolist.at(3).toDouble());
                }
                fooloop +=1 ;
            }
            inputFile.close();
        }
    } else {
        result << 0;
    }
    return result;
}

bool Aquamark3_RanAtDefaultSettings(QString File){
    int result=0; QString foo;

    QFile benchconfig(File);
    if (benchconfig.exists()){
        if (benchconfig.open(QIODevice::ReadOnly)){
            QTextStream in(&benchconfig);
            while ( !in.atEnd() ){
                foo = in.readLine();
                if ( foo.contains("DisplayWidth\t1024") ){ result += 1;}
                if ( foo.contains("DisplayHeight\t768") ){ result += 1;}
                if ( foo.contains("DisplayDepth\t32") ){ result += 1;}
                if ( foo.contains("AntialiasingMode\t0") ){ result += 1;}
                if ( foo.contains("AntialiasingQuality\t1") ){ result += 1;}
                if ( foo.contains("AnisotropicFiltering\t4") ){ result += 1;}
                if ( foo.contains("DetailLevel\t5") ){ result += 1;}
                if ( foo.contains("EnableSound\t0") ){ result += 1;}
            }
            benchconfig.close();
        } else { qWarning() << "Error reading Aquamark3 details file."; }
    } else {
        qWarning() << "Could not find Aquamark3 details file.";
    }
    if (result==8){
        qInfo() << "8/8 default Aquamark settings used.";
        return true;
    } else {
        qWarning() << QString("%1/8 default Aquamark settings used").arg(result);
        return false;
    }
}
