#include "newmessagedialog.h"
#include "ui_newmessagedialog.h"

NewMessageDialog::NewMessageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewMessageDialog)
{
    ui->setupUi(this);
}

NewMessageDialog::~NewMessageDialog()
{
    delete ui;
}
