#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>
/**
 * @brief This is the implementation class for mainwindow.h
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
void MainWindow::on_answerOption1_clicked()
{
}
void MainWindow::on_answerOption2_clicked()
{
}
void MainWindow::on_answerOption3_clicked()
{
}
void MainWindow::on_exitGameButton_clicked()
{
}
void MainWindow::on_pauseButton_clicked()
{
    Dialog *dialog = new Dialog(this);
    dialog->exec(); // execute the dialog
}
