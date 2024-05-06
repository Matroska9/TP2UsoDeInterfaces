#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <StackInterface.h>
#include <FixedArrayStack.h>
#include <DynamicMemStack.h>
#include <StackUser.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonCargarUno_clicked();

    void on_pushButtonMostrarTodos_clicked();

    void on_radioButton_clicked(bool checked);

private:
    Ui::MainWindow *ui;

    FixedArrayStack stack_f;
    DynamicMemStack stack_d;

    StackUser *stackUser;
    StackUser *stackUserFix;
    StackUser *stackUserDim;

};
#endif // MAINWINDOW_H
