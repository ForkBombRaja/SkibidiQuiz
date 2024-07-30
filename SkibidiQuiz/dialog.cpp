#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}
void Dialog::on_resumeGameButton_clicked()
{
    this->hide();
}
void Dialog::on_confirmButton_clicked()
{
    this->hide();
}
