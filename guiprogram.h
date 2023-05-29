#ifndef GUIPROGRAM_H
#define GUIPROGRAM_H

#include <QObject>
#include "logindialog.h"
#include "../emailingsystem-client/client.h"
#include "dialog.h"

class GUIProgram : public QObject
{
    Q_OBJECT
public:
    explicit GUIProgram(QObject *parent = nullptr);
    void Start();
public slots:
    void Login(const QString& login, const QString& password);
signals:
private:
    Client* client;
    LoginDialog* loginDialog;
    Dialog* dialog;
};

#endif // GUIPROGRAM_H
