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

private:
    /**
     * @brief ui the ui object
     */
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
