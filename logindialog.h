#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit LoginDialog(QWidget *parent = nullptr);
    ~LoginDialog();
public slots:
    void LoginBtnClicked();
    void LoginRejected();
signals:
    void Login(const QString& login, const QString& password);
private:
    Ui::LoginDialog *ui;
    
};

#endif // LOGINDIALOG_H
