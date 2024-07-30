#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
/**
 * @brief This is the header file for the exit warning dialog
 * @author Aditya Mukerjee
 * @version 1.0
 */
/**
 * @namespace the UI
 */
namespace Ui {
class Dialog;
}
/**
 * @class the exit warning dialog
 * @extends QDialog
 */
class Dialog : public QDialog
{
    Q_OBJECT
public:
    /**
     * @brief Dialog - the constructor for the Dialog
     * @param parent - the parent Qwidget class
     */
    explicit Dialog(QWidget *parent = nullptr);
    /**
     * @brief The destructor for the dialog
     */
    ~Dialog();
private slots:
    /**
     * @brief on_resumeGameButton_clicked - resumes the game
     */
    void on_resumeGameButton_clicked();
    /**
     * @brief on_confirmButton_clicked - exits to the main menu
     */
    void on_confirmButton_clicked();
private:
    /**
     * @brief ui-the ui object
     */
    Ui::Dialog *ui;
};
#endif // DIALOG_H
