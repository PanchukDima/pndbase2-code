#ifndef LOGS_ENGINE_H
#define LOGS_ENGINE_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>

class logs_engine : public QObject
{
    Q_OBJECT
public:
    explicit logs_engine(QObject *parent = 0);

signals:

public slots:
    bool log_add(QString type, QString id);
};

#endif // LOGS_ENGINE_H
