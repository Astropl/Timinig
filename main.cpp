#include "timinig.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Timinig w;
    w.show();
    return a.exec();
}
