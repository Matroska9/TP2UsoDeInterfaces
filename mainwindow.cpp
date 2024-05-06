#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    stackUserFix = new StackUser(&stack_f);
    stackUserDim = new StackUser(&stack_d);

    if(ui->radioButton->isChecked()) {
        stackUser = stackUserDim;
    } else {
        stackUser = stackUserFix;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButtonCargarUno_clicked()
{
    if(ui->radioButton_2->isChecked()) {
        stackUser->cargarVehiculo();
    } else {
        stackUser->cargarDepartamento();
    }
}


void MainWindow::on_pushButtonMostrarTodos_clicked()
{
    stackUser->imprimirPila();
}


void MainWindow::on_radioButton_clicked(bool checked)
{
    if(checked) {
        stackUser = stackUserDim;
    } else {
        stackUser = stackUserFix;
    }
}

