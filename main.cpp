#include <iostream>
#include <QApplication>
#include <QPushButton>
#include "class.h"

int main(int argc, char **argv){
    QApplication app (argc, argv);

//    fenetre1 test;
    fenetre2 test;
    test.show();

    return app.exec();
}
