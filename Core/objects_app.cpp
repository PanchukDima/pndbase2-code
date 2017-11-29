#include "objects_app.h"

QString Objects_app::os::username;
QString Objects_app::server_cert::ip_address;
QString Objects_app::server_cert::password;
QString Objects_app::server_cert::path_serv;
QString Objects_app::server_cert::username;
QString Objects_app::server_bd::username;
QString Objects_app::server_bd::password;
QString Objects_app::server_bd::ip_address;
int Objects_app::server_bd::port;
QString Objects_app::server_bd::database_patients;
QString Objects_app::server_bd::database_auth;
QString Objects_app::local_path::app_dir;
QString Objects_app::local_path::path_certs;
QString Objects_app::local_path::path_settings;
QString Objects_app::local_path::putty_path;
Objects_app::Objects_app(QObject *parent) : QObject(parent)
{

}
