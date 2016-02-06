#include "justfun.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    JustFun w;
    w.show();

    return a.exec();
}
