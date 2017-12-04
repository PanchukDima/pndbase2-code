#include "qpndcore.h"

QPndCore::QPndCore(QObject *parent) : QObject(parent)
{

}

void QPndCore::init_core()
{
    Objects_app obj;
    QSettings * settings = new QSettings(obj.local_path_settings,QSettings::IniFormat);
    obj.server_bd_ip_address = settings->value("db/ip").toString();
    obj.server_bd_port = settings->value("db/port").toInt();
    obj.server_bd_username = settings->value("db/username").toString();
    obj.server_bd_password = settings->value("db/password").toString();
    obj.server_bd_database_patients = settings->value("db/database_main").toString();
    obj.server_bd_database_auth = settings->value("db/database_auth").toString();
    get_username_os();
    //connect_database_main();
}
void QPndCore::settings_app()
{
    D_settings_app dialog;
    if(dialog.exec())
    {

    }
}
void QPndCore::get_username_os()
{

    Objects_app obj;
    QString name = qgetenv("USER");
            if (name.isEmpty())
            {
                name = qgetenv("USERNAME");
            }
            obj.os_username = name;


}
QString QPndCore::diagnos_first(QString medcard_id)
{

}
QString QPndCore::diagnos_last(QString medcard_id)
{

}
void QPndCore::diagnos_add()
{

}
void QPndCore::diagnos_edit(QString medcard_id)
{

}
bool QPndCore::diagnos_del(QString diagnos_id)
{

}
void QPndCore::diagnos_view(QString medcard_id)
{

}
void QPndCore::diagnos_view_only(QString diagnos_id)
{

}
bool QPndCore::diagnos_exist(QString medcard_id)
{

}
//invalid
QString QPndCore::invalid_first(QString medcard_id)
{

}
QString QPndCore::invalid_last(QString medcard_id)
{

}
void QPndCore::invalid_add()
{

}
void QPndCore::invalid_edit(QString medcard_id)
{

}
bool QPndCore::invalid_del(QString invalid_id)
{

}
void QPndCore::invalid_view(QString medcard_id)
{

}
void QPndCore::invalid_view_only(QString invalid_id)
{

}
bool QPndCore::invalid_exist(QString)
{

}
//analyzes
QString QPndCore::analyzes_fisrt(QString medcard_id)
{

}
QString QPndCore::analizes_last(QString medcard_id)
{

}
void QPndCore::analizes_add()
{

}
void QPndCore::analyzes_edit(QString medcard_id)
{

}
bool QPndCore::analyzes_del(QString analyzes_id)
{

}
void QPndCore::analyzes_view(QString medcard_id)
{

}
void QPndCore::analyzes_view_only(QString analyzes_id)
{

}
bool QPndCore::analyzes_exist(QString medcard_id)
{

}
//day_station
QString QPndCore::day_station_first(QString medcard_id)
{

}
QString QPndCore::day_station_last(QString medcard_id)
{

}
void QPndCore::day_station_add()
{

}
void QPndCore::day_station_edit(QString medcard_id)
{

}
bool QPndCore::day_station_del(QString day_station_id)
{

}
void QPndCore::day_station_view(QString medcard_id)
{

}
void QPndCore::day_station_view_only(QString day_station_id)
{

}
bool QPndCore::day_station_exist(QString medcard_id)
{

}
//dynamic_view
QString QPndCore::dynamic_view_first(QString medcard_id)
{

}
QString QPndCore::dynamic_view_last(QString medcard_id)
{

}
void QPndCore::dynamic_view_add()
{
    W_Dynamic_view *dialog = new W_Dynamic_view();
    dialog->show();
}
void QPndCore::dynamic_view_edit(QString medcard_id)
{

}
bool QPndCore::dynamic_view_del(QString dynamic_view_id)
{

}
void QPndCore::dynamic_view_view(QString medcard_id)
{

}
void QPndCore::dynamic_view_view_only(QString dynamic_view_id)
{

}
bool QPndCore::dynamic_view_exist(QString medcard_id)
{

}
//list_not_work
QString QPndCore::list_not_work_first(QString medcard_id)
{

}
QString QPndCore::list_not_work_last(QString medcard_id)
{

}
void QPndCore::list_not_work_add()
{

}
void QPndCore::list_not_work_edit(QString medcard_id)
{

}
bool QPndCore::list_not_work_del(QString list_not_work_id)
{

}
void QPndCore::list_not_work_view(QString medcard_id)
{

}
void QPndCore::list_not_work_view_only(QString list_not_work_id)
{

}
bool QPndCore::list_not_work_exist(QString medcard_id)
{

}
//ood
QString QPndCore::ood_first(QString medcard_id)
{

}
QString QPndCore::ood_last(QString medcard_id)
{

}
void QPndCore::ood_add()
{

}
void QPndCore::ood_edit(QString medcard_id)
{

}
bool QPndCore::ood_del(QString ood_id)
{

}
void QPndCore::ood_view(QString medcard_id)
{

}
void QPndCore::ood_view_only(QString ood_id)
{

}
bool QPndCore::ood_exist(QString medcard_id)
{

}
//preparate
QString QPndCore::preparate_first(QString medcard_id)
{

}
QString QPndCore::preparate_last(QString medcard_id)
{

}
void QPndCore::preparate_add()
{

}
void QPndCore::preparate_edit(QString medcard_id)
{

}
bool QPndCore::preparate_del(QString preparate_id)
{

}
void QPndCore::preparate_view(QString medcard_id)
{

}
void QPndCore::preparate_view_only(QString preparate_id)
{

}
bool QPndCore::preparate_exist(QString medcard_id)
{

}
//suicide
QString QPndCore::suicide_first(QString medcard_id)
{

}
QString QPndCore::suicide_last(QString medcard_id)
{

}
void QPndCore::suicide_add()
{

}
void QPndCore::suicide_edit(QString medcard_id)
{

}
bool QPndCore::suicide_del(QString suicide_id)
{

}
void QPndCore::suicide_view(QString medcard_id)
{

}
void QPndCore::suicide_view_only(QString suicide_id)
{

}
bool QPndCore::suicide_exist(QString medcard_id)
{

}
//visitors
QString QPndCore::visitors_first(QString medcard_id)
{

}
QString QPndCore::visitors_last(QString medcard_id)
{

}
void QPndCore::visitors_add()
{

}
void QPndCore::visitors_edit(QString medcard_id)
{

}
bool QPndCore::visitors_del(QString visitors_id)
{

}
QString QPndCore::visitors_view(QString medcard_id)
{

}
QString QPndCore::visitors_view_only(QString visitors_id)
{

}
bool QPndCore::visitors_exist(QString medcard_id)
{

}
//info_patient
void QPndCore::info_patient_add()
{

}
void QPndCore::info_patient_edit(QString medcard_id)
{

}
bool QPndCore::info_patient_del(QString medcard_id)
{

}
void QPndCore::info_patient_view_only(QString medcard_id)
{

}
bool QPndCore::user_settings()
{

}
bool QPndCore::user_rights()
{

}
bool QPndCore::user_support_area()
{

}
//certs
bool QPndCore::check_cert()
{    
    Objects_app obj;
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName(obj.server_bd_database_auth);
    QSqlQuery query;
    messages_app mess;
    if(db.open())
    {
        query.exec();
        if(query.lastError().isValid())
        {
            qDebug()<<query.lastError();
            return false;
        }
        else
        {
            while (query.next()) {
                if(user_certs_number().toInt() == query.value(0).toInt())
                {
                    return true;
                }
                else if(user_certs_number().toInt() < query.value(0).toInt())
                {
                    if(load_certs())
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }

    }
    else
    {
        mess.db_connect_false();
        return false;
    }
}
bool QPndCore::load_certs()
{
    Objects_app obj;
    QSqlDatabase db = QSqlDatabase::database();
    db.setDatabaseName(obj.server_bd_database_auth);
    QSqlQuery query;
    messages_app mess;
    QString namefile;
    QProcess proc;


    if(db.open())
    {
        query.exec();
        if(query.lastError().isValid())
        {
            qDebug()<<query.lastError();
            return false;
        }
        else
        {
            while (query.next())
            {
                namefile = query.value(2).toString();
                proc.start(obj.local_path_putty_path+"/pscp.exe -pw RVgw79IbQg root@46.173.218.35:/home/panch-dima/CAServer/user_certs/131117180833974441449.crt C:/Users/user/AppData/Roaming/postgresql/user2.crt");
            }

        }
    }
    else
    {
        mess.db_connect_false();
        return false;
    }
}
QString QPndCore::user_certs_number()
{
    QString app_location = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation);
    QDir dir(app_location);
    dir.cd("..");
    dir.cd("postgresql");
    QFile file(dir.absolutePath()+"\\id_certs");
    if(file.exists())
    {
        if(file.open(QIODevice::ReadOnly))
        {
            QTextStream instream(&file);
            QString line = instream.readLine();
            return line;
        }
    }
    else
    {

    }
}
bool QPndCore::connect_database_main()
{
    Objects_app obj;
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL","main");
    db.setHostName(obj.server_bd_ip_address);
    db.setPort(obj.server_bd_port);
    db.setDatabaseName(obj.server_bd_database_patients);
    db.setUserName(obj.server_bd_username);
    db.setPassword(obj.server_bd_password);
    return true;
}
