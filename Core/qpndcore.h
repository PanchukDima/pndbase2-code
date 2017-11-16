#ifndef QPNDCORE_H
#define QPNDCORE_H

#include <QObject>
#include <QMap>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>

class QPndCore : public QObject
{
    Q_OBJECT
public:
    explicit QPndCore(QObject *parent = 0);
    QString g_table;
signals:

public slots:
    bool setTable(QString);
    void setParam();
    bool insert();
    void select();
    bool logs_send(int,QString);


};

#endif // QPNDCORE_H
