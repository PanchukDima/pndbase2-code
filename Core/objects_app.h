#ifndef OBJECTS_APP_H
#define OBJECTS_APP_H

#include <QObject>

class Objects_app : public QObject
{
    Q_OBJECT
public:
    explicit Objects_app(QObject *parent = 0);

signals:

public slots:
};

#endif // OBJECTS_APP_H
