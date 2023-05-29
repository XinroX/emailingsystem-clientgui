//
// Created by Mateusz Szybicki on 29/05/2023.
//

#ifndef EMAILINGSYSTEM_CLIENTGUI_BUTTON_H
#define EMAILINGSYSTEM_CLIENTGUI_BUTTON_H

#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QDateTime>


class Button : public QPushButton{
    Q_OBJECT
public:

    void SetUp();
    void SetSender(const QString& sender);
    void SetTimestamp(const QDateTime& timestamp);
    void SetTitle(const QString& title);
private:
    QString mSender;
    QString mTitle;
    QDateTime mTimestamp;

};


#endif //EMAILINGSYSTEM_CLIENTGUI_BUTTON_H
