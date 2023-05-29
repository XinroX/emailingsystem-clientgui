#include "dialog.h"
#include "./ui_dialog.h"
#include "Button.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QObject::connect(ui->btnRefresh, &QPushButton::clicked, this, [=](){emit RequestUpdate();});


}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::UpdateMessages(const QVector<core::Message> &messages) {
    this->messages = messages;
    QWidget* widget = new QWidget;
    QVBoxLayout* layout = new QVBoxLayout{widget};
    foreach(const core::Message& message, messages) {
        Button* btn = new Button;
        QObject::connect(btn, &Button::clicked, this, [=](){
            ui->txtSender->setText(message.getSender());
            ui->txtReceiver->setText(message.getReceiver());
            ui->txtContent->setText(message.getContent());
            ui->txtTitle->setText(message.getTitle());
        });
        btn->SetTitle(message.getTitle());
        btn->SetTimestamp(message.getTimestamp());
        btn->SetSender(message.getSender());
        btn->SetUp();
        layout->addWidget(btn);
    }
    ui->scrollArea->setWidget(widget);
}
