#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    QObject::connect(ui->btnLogin, &QPushButton::clicked, this, &LoginDialog::LoginBtnClicked);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::LoginBtnClicked() {
    if (ui->txtLogin->text().isNull() || ui->txtLogin->text().isEmpty()
    || ui->txtPassword->text().isNull() || ui->txtPassword->text().isEmpty()) {
        QMessageBox::warning(this, "Puste pola", "Wypełnij pola");
        return;
    }
    emit Login(ui->txtLogin->text(), ui->txtPassword->text());
}

void LoginDialog::LoginRejected() {
    QMessageBox::warning(this, "Niepowodzenie", "Nieprawidłowe dane");
}