#ifndef QPNDCORE_H
#define QPNDCORE_H

#include <QObject>
#include <QMap>
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMainWindow>
#include <Core/DialogSorWindow/Dynamic_view/w_dynamic_view.h>
#include <Core/objects_app.h>
#include <QFile>
#include <QProcess>
#include <QStandardPaths>
#include <QDebug>
#include <QDir>
#include <Core/messages_app.h>
#include <QMessageBox>
#include <QApplication>
#include <Core/objects_app.h>
#include <QSettings>
#include <Core/DialogSorWindow/Settings_app/d_settings_app.h>

class QPndCore : public QObject
{
    Q_OBJECT
public:
    explicit QPndCore(QObject *parent = 0);
    QString g_table;

signals:

public slots:
//init
        void init_core();
//settings app
        void settings_app();
//diagnos
        QString diagnos_first(QString medcard_id);
        QString diagnos_last(QString medcard_id);
        void diagnos_add();
        void diagnos_edit(QString medcard_id);
        bool diagnos_del(QString diagnos_id);
        void diagnos_view(QString medcard_id);
        void diagnos_view_only(QString diagnos_id);
        bool diagnos_exist(QString medcard_id);
//invalid
        QString invalid_first(QString medcard_id);
        QString invalid_last(QString medcard_id);
        void invalid_add();
        void invalid_edit(QString medcard_id);
        bool invalid_del(QString invalid_id);
        void invalid_view(QString medcard_id);
        void invalid_view_only(QString invalid_id);
        bool invalid_exist(QString);
//analyzes
        QString analyzes_fisrt(QString medcard_id);
        QString analizes_last(QString medcard_id);
        void analizes_add();
        void analyzes_edit(QString medcard_id);
        bool analyzes_del(QString analyzes_id);
        void analyzes_view(QString medcard_id);
        void analyzes_view_only(QString analyzes_id);
        bool analyzes_exist(QString medcard_id);
//day_station
        QString day_station_first(QString medcard_id);
        QString day_station_last(QString medcard_id);
        void day_station_add();
        void day_station_edit(QString medcard_id);
        bool day_station_del(QString day_station_id);
        void day_station_view(QString medcard_id);
        void day_station_view_only(QString day_station_id);
        bool day_station_exist(QString medcard_id);
//dynamic_view
        QString dynamic_view_first(QString medcard_id);
        QString dynamic_view_last(QString medcard_id);
        void dynamic_view_add();
        void dynamic_view_edit(QString medcard_id);
        bool dynamic_view_del(QString dynamic_view_id);
        void dynamic_view_view(QString medcard_id);
        void dynamic_view_view_only(QString dynamic_view_id);
        bool dynamic_view_exist(QString medcard_id);
//list_not_work
        QString list_not_work_first(QString medcard_id);
        QString list_not_work_last(QString medcard_id);
        void list_not_work_add();
        void list_not_work_edit(QString medcard_id);
        bool list_not_work_del(QString list_not_work_id);
        void list_not_work_view(QString medcard_id);
        void list_not_work_view_only(QString list_not_work_id);
        bool list_not_work_exist(QString medcard_id);
//ood
        QString ood_first(QString medcard_id);
        QString ood_last(QString medcard_id);
        void ood_add();
        void ood_edit(QString medcard_id);
        bool ood_del(QString ood_id);
        void ood_view(QString medcard_id);
        void ood_view_only(QString ood_id);
        bool ood_exist(QString medcard_id);
//preparate
        QString preparate_first(QString medcard_id);
        QString preparate_last(QString medcard_id);
        void preparate_add();
        void preparate_edit(QString medcard_id);
        bool preparate_del(QString preparate_id);
        void preparate_view(QString medcard_id);
        void preparate_view_only(QString preparate_id);
        bool preparate_exist(QString medcard_id);
//suicide
        QString suicide_first(QString medcard_id);
        QString suicide_last(QString medcard_id);
        void suicide_add();
        void suicide_edit(QString medcard_id);
        bool suicide_del(QString suicide_id);
        void suicide_view(QString medcard_id);
        void suicide_view_only(QString suicide_id);
        bool suicide_exist(QString medcard_id);
//visitors
        QString visitors_first(QString medcard_id);
        QString visitors_last(QString medcard_id);
        void visitors_add();
        void visitors_edit(QString medcard_id);
        bool visitors_del(QString visitors_id);
        QString visitors_view(QString medcard_id);
        QString visitors_view_only(QString visitors_id);
        bool visitors_exist(QString medcard_id);
//info_patient
        void info_patient_add();
        void info_patient_edit(QString medcard_id);
        bool info_patient_del(QString medcard_id);
        void info_patient_view_only(QString medcard_id);
//users
        bool user_settings();
        bool user_rights();
        bool user_support_area();
//certs
        bool check_cert();
        bool load_certs();
        QString user_certs_number();
//os
        void get_username_os();
//DataBase
        bool connect_database_main();


};

#endif // QPNDCORE_H
