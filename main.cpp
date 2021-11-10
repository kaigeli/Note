#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include <QTextEdit>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    w.show();
    //w.grabKeyboard();
    return a.exec();
}
