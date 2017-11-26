#ifndef OBJECTS_APP_H
#define OBJECTS_APP_H

#include <QObject>


class Objects_app : public QObject
{
    Q_OBJECT
public:
    explicit Objects_app(QObject *parent = 0);

    struct os
    {
        static QString username;
    };
    struct server_cert
    {
        static QString username;
        static QString password;
        static QString path_serv;
        static QString ip_address;
    };
    struct server_bd_starter
    {
        static QString username;
        static QString password;
        static QString ip_address;
        static int port;
        static QString database;
    };
    struct server_bd_patients
    {
        static QString username;
        static QString password;
        static QString ip_address;
        static int port;
        static QString database;
    };
    struct app
    {
        static QString staff;
        static QStringList service_area;
    };
    struct local_path
    {
        static QString path_settings;
        static QString path_certs;
        static QString app_dir;
        static QString putty_path;
    };
signals:

public slots:
};

#endif // OBJECTS_APP_H
