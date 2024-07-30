#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
/**
 * @brief This is the header file for the main window
 * @author Aditya Mukerjee
 * @version 1.0
 */
QT_BEGIN_NAMESPACE
/**
 * @namespace the ui
 */
namespace Ui {
/**
 * @class the header file for the main windiow.
 */
class MainWindow;
}
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    /**
     * @brief MainWindow - the constructor for the main window
     * @param parent -  the parent widget application
     */
    MainWindow(QWidget *parent = nullptr);
    /**
     * @brief the destructior for the main window
     */
    ~MainWindow();
private slots:
    /**
     * @brief on_startButton_clicked-start the game
     */
    void on_startButton_clicked();
    /**
     * @brief on_exitButton_clicked-exit application
     */
    void on_exitButton_clicked();
    /**
     * @brief on_answerOption1_clicked-select the first answer option
     */
    void on_answerOption1_clicked();
    /**
     * @brief on_answerOption2_clicked-select the second answer option
     */
    void on_answerOption2_clicked();
    /**
     * @brief on_answerOption3_clicked-select the third answer optiom
     */
    void on_answerOption3_clicked();
    /**
     * @brief on_exitGameButton_clicked-exit the game to the main menu after the game initially ends
     */
    void on_exitGameButton_clicked();
    /**
     * @brief on_pauseButton_clicked-pause the game and open the pause menu
     */
    void on_pauseButton_clicked();
private:
    /**
     * @brief ui the ui object
     */
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
