#include "gui.h"
#include <QApplication>
#include <QSplashScreen>            //Splash Screen support
#include <QSettings>                //Store and retrieve app settings
#include <QTranslator>              //provides translations support
#include <QFile>
#include <QDate>
#include <QDebug>
#include "benches/aquamark3.h"


#define ifFalse(c) if (c == false){};
#define ifTrue(c) if (c == true);

//write to log file
void wlog(QtMsgType type, const QMessageLogContext&, const QString &msg)
{
    QFile file(QDate::currentDate().toString("RSB_dd_MM_yyyy.log"));
    ifFalse(file.open(QIODevice::Append | QIODevice::Text));
    QTextStream out(&file);
    out << QTime::currentTime().toString("[hh:mm:ss.zzz] RSB: ");

    switch (type)
    {
    case QtDebugMsg:    out << "(DBG) ";   break;
    case QtWarningMsg:  out << "(WRN) ";   break;
    case QtCriticalMsg: out << "(CRT) ";   break;
    case QtFatalMsg:    out << "(FTL) ";   break;
    case QtInfoMsg:     out << "(NFO) ";   break;
    }

    out << msg << '\n';
    out.flush();
}

//WHERE MAGIC STARTS
int main(int argc, char *argv[])
{
    //activate our personalised logging function
    qInstallMessageHandler(wlog);
    qInfo() << "--------------------------------------------------------------------------";
    //define
    QApplication a(argc, argv);
    QSettings registry(QSettings::SystemScope,"GENiEBEN", "RSB");

    //enable translations
    #ifndef QT_NO_TRANSLATION
    QString langcode = registry.value("Language").toString();
    if (langcode.isEmpty()){
        langcode=QLocale::system().name();
    }
    qInfo() << "System language name is" << langcode.toUpper();

    QTranslator translator;
    if(translator.load(QString("lang_%1").arg(langcode),"lang")){
        qInfo() << "Loaded translation file" << langcode;
    } else {
        qWarning() << "Failed loading translation file" << langcode;
    }
    if (a.installTranslator(&translator)){
        qInfo() << "Translator was installed";
    } else {
        qWarning() << "Translator was not installed";
    }
    #endif

    //Show Splash Screen
    QPixmap splash_image(":/img/splash.png");
    QSplashScreen *splash = new QSplashScreen(splash_image);
    splash->show();
    qInfo() << "Splash screen drawn";
     //Prepare Main window
    gui w;
    w.setWindowTitle(QString("%1 v%2").arg("RSB", APP_VERSION));

    //Show Main window
    w.show();
    splash->finish(&w);
    qInfo() << "Splash screen closed";

    //done
    return a.exec();
}
