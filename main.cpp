#include "progressdlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
    ProgressDlg w;
    w.show();

    return a.exec();
}
