#include "d_settings_app.h"
#include "ui_d_settings_app.h"

D_settings_app::D_settings_app(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D_settings_app)
{
    ui->setupUi(this);
    load_settings();
    connect(ui->pushButton_ok,SIGNAL(clicked()),SLOT(save_settings()));
    connect(ui->pushButton_cancel,SIGNAL(clicked()),SLOT(close()));
}

D_settings_app::~D_settings_app()
{
    delete ui;
}
void D_settings_app::load_settings()
{
    Objects_app::local_path obj;
    QSettings *settings = new QSettings(obj.path_settings,QSettings::IniFormat);
    ui->lineEdit_host->setText(settings->value("db/ip").toString());
    ui->lineEdit_port->setText(settings->value("db/port").toString());
    ui->lineEdit_database_main->setText(settings->value("db/database_main").toString());
    ui->lineEdit_db_auth->setText(settings->value("db/database_auth").toString());

}
void D_settings_app::save_settings()
{
    Objects_app::local_path obj;
    QSettings *settings = new QSettings(obj.path_settings,QSettings::IniFormat);
    settings->setValue("db/ip",ui->lineEdit_host->text());
    settings->setValue("db/port",ui->lineEdit_port->text());
    settings->setValue("db/database_main",ui->lineEdit_database_main->text());
    settings->setValue("db/database_auth",ui->lineEdit_db_auth->text());
}
