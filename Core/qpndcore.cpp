#include "qpndcore.h"

QPndCore::QPndCore(QObject *parent) : QObject(parent)
{

}
bool QPndCore::setTable(QString table)
{
    g_table = table;
    return true;
}
void QPndCore::setParam()
{

}
bool QPndCore::insert()
{

}
void QPndCore::select()
{

}
bool QPndCore::logs_send(int type, QString id)
{
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query;
    query.prepare("INSERT INTO logs(type, id) VALUES (:type, :id)");
    query.bindValue(":type",type);
    query.bindValue(":id",id);
    query.exec();
    if(query.lastError().isValid())
    {
        qDebug()<<query.lastError();
    }
}
