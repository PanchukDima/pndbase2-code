#include "logs_engine.h"

logs_engine::logs_engine(QObject *parent) : QObject(parent)
{

}
bool logs_engine::log_add(QString type, QString id)
{
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query;
    if(db.open())
    {
        query.exec("INSERT INTO logs.app(type_id, object_id) VALUES ("+type+", "+id+")");
        if(query.lastError().isValid())
        {
            qDebug()<<query.lastError();
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
