#include "calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);//Comenatrio para mostrar el pipeline
    Calculator w;
    w.show();
    return a.exec();
}
