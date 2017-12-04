#ifndef OBJECTS_APP_H
#define OBJECTS_APP_H

#include <QObject>


class Objects_app : public QObject
{
    Q_OBJECT
public:
    explicit Objects_app(QObject *parent = 0);


        static QString os_username;
        static QString server_cert_username;
        static QString server_cert_password;
        static QString server_cert_path_serv;
        static QString server_cert_ip_address;
        static QString server_bd_username;
        static QString server_bd_password;
        static QString server_bd_ip_address;
        static int server_bd_port;
        static QString server_bd_database_patients;
        static QString server_bd_database_auth;
        static QString app_staff;
        static QStringList app_service_area;
        static QList<bool> app_user_rights;
        static QString local_path_settings;
        static QString local_path_certs;
        static QString local_path_app_dir;
        static QString local_path_putty_path;

signals:

public slots:
};

#endif // OBJECTS_APP_H
