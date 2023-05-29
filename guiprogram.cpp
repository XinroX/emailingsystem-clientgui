#include "guiprogram.h"

GUIProgram::GUIProgram(QObject *parent)
    : QObject{parent}
{
    
}

void GUIProgram::Start() {
    client = new Client;
    loginDialog = new LoginDialog;
    connect(loginDialog, &LoginDialog::Login, client, &Client::Login);
    connect(client, &Client::Logged, loginDialog, &LoginDialog::accept);
    connect(client, &Client::Logged, this, [=](){
        delete loginDialog;
        dialog = new Dialog;
        connect(client, &Client::SendMessages, dialog, &Dialog::UpdateMessages);
        connect(dialog, &Dialog::RequestUpdate, client, &Client::GetReceivedMessages);
        dialog->show();
        client->GetReceivedMessages();
    });
    connect(client, &Client::LoginRejected, loginDialog, &LoginDialog::LoginRejected);
    loginDialog->show();
}

void GUIProgram::Login(const QString& login, const QString& password) {

}