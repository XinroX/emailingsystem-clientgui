#include "guiprogram.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GUIProgram g;
    g.Start();
    return a.exec();
}
