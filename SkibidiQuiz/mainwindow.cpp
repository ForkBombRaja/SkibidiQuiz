#include "mainwindow.h"
#include "ui_mainwindow.h"
/**
 * @brief This is the implementation class for mainwindow.h
 * @extends mainwindow.h
 * @author Aditya Mukerjee
 * @version 1.0
 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);//setup ui
}
MainWindow::~MainWindow()
{
    delete ui;//delete the ui
}
void MainWindow::on_startButton_clicked()
{
}
void MainWindow::on_exitButton_clicked()
{

}

