#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "../emailingsystem-core/message.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void UpdateMessages(const QVector<core::Message>& messages);
signals:
    void RequestUpdate();
private:
    Ui::Dialog *ui;
    QVector<core::Message> messages;
};
#endif // DIALOG_H
