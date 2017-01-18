#include "lisp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LISP w;
    w.show();

    return a.exec();
}

