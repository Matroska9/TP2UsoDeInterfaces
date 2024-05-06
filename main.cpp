#include "mainwindow.h"

#include <QApplication>
#include <StackInterface.h>
#include <FixedArrayStack.h>
#include <DynamicMemStack.h>
#include <StackUser.h>

int main(int argc, char *argv[])
{
    //FixedArrayStack stack;
    DynamicMemStack stack;

    StackUser user(&stack);
    user.cargarPila();
    user.imprimirPila();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    return a.exec();
}

