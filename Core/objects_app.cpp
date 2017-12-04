#include "objects_app.h"

QString Objects_app::os_username;
QString Objects_app::server_cert_ip_address;
QString Objects_app::server_cert_password;
QString Objects_app::server_cert_path_serv;
QString Objects_app::server_cert_username;
QString Objects_app::server_bd_username;
QString Objects_app::server_bd_password;
QString Objects_app::server_bd_ip_address;
int Objects_app::server_bd_port;
QString Objects_app::server_bd_database_patients;
QString Objects_app::server_bd_database_auth;
QString Objects_app::local_path_app_dir;
QString Objects_app::local_path_certs;
QString Objects_app::local_path_settings;
QString Objects_app::local_path_putty_path;
QList<bool> Objects_app::app_user_rights;
Objects_app::Objects_app(QObject *parent) : QObject(parent)
{

}
