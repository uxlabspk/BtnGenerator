#include "generator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    generator w;
    w.show();
    return a.exec();
}
