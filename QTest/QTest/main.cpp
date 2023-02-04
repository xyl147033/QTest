#include "QTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTest w;
    w.show();
    return a.exec();
}
