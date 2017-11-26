#ifndef MESSAGES_APP_H
#define MESSAGES_APP_H

#include <QObject>
#include <QDialog>
#include <QMessageBox>

class messages_app : public QDialog
{
    Q_OBJECT
public:
    explicit messages_app(QObject *parent = 0);

signals:

public slots:
    void db_connect_false();

};

#endif // MESSAGES_APP_H
