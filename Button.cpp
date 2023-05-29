//
// Created by Mateusz Szybicki on 29/05/2023.
//

#include "Button.h"
#include <QLabel>

void Button::SetSender(const QString &sender) {
    mSender = sender;
}

void Button::SetTimestamp(const QDateTime &timestamp) {
    mTimestamp = timestamp;
}

void Button::SetTitle(const QString &title) {
    mTitle = title;
}

void Button::SetUp() {
    setMinimumSize(300, 100);
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(new QLabel(mSender));
    layout->addWidget(new QLabel(mTimestamp.toString(Qt::ISODate)));
    QVBoxLayout* vlayout = new QVBoxLayout;
    vlayout->addLayout(layout);
    vlayout->addWidget(new QLabel(mTitle));
    setLayout(vlayout);
}