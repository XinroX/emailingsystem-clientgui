#ifndef NEWMESSAGEDIALOG_H
#define NEWMESSAGEDIALOG_H

#include <QDialog>

namespace Ui {
class NewMessageDialog;
}

class NewMessageDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit NewMessageDialog(QWidget *parent = nullptr);
    ~NewMessageDialog();
    
private:
    Ui::NewMessageDialog *ui;
};

#endif // NEWMESSAGEDIALOG_H
