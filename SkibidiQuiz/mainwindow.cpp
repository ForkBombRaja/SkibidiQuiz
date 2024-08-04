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
    /*hide the non main menu items*/
    ui->answerOption1->hide();
    ui->answerOption2->hide();
    ui->answerOption3->hide();
    ui->pauseButton->hide();
    ui->exitGameButton->hide();
    ui->display->setText("SKIBIDI QUIZ");//set the diaplay to game title
}
MainWindow::~MainWindow()
{
    delete ui;//delete the ui
}
void MainWindow::on_startButton_clicked()
{
    /*set up game abstractly*/
    game.addQuestion(*new Question("How many toilets are in epidode 1?", "0", "1", "2", "1"));
    game.addQuestion(*new Question( "Are there urinals or toilets in epidode 2?", "Urinals", "Toilets", "Both", "Urinals"));
    game.addQuestion(*new Question("Where does Episode 4 take place?", "Elevator", "Street", "Restaurant", "Restaurant"));
    game.addQuestion(*new Question("Who are the toilets' first enemy?", "Cameras", "Humans", "Tvs", "Humans"));
    game.addQuestion(*new Question("_____ dom dom yes yes", "Skibidi", "Yeet", "Skeet", "Skibidi"));
    /* hide main menu, show game page*/
    ui->startButton->hide();
    ui->exitButton->hide();
    ui->answerOption1->show();
    ui->answerOption2->show();
    ui->answerOption3->show();
    ui->pauseButton->show();
    /*setup first question*/
    ui->display->setText(game.questionList.at(game.currentQuestion).questionText);
    ui->answerOption1->setText(game.questionList.at(game.currentQuestion).answerChoices.at(0));
    ui->answerOption2->setText(game.questionList.at(game.currentQuestion).answerChoices.at(1));
    ui->answerOption3->setText(game.questionList.at(game.currentQuestion).answerChoices.at(2));
}
void MainWindow::on_exitButton_clicked()
{
    qApp->exit();//exit application
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
