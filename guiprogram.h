#ifndef GUIPROGRAM_H
#define GUIPROGRAM_H

#include <QObject>

class GUIProgram : public QObject
{
    Q_OBJECT
public:
    explicit GUIProgram(QObject *parent = nullptr);
    
signals:
    
};

#endif // GUIPROGRAM_H
