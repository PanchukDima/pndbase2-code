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
    connect(ui->pushButton_b_arch,SIGNAL(clicked(bool)),SLOT(get_background_arch()));
    connect(ui->pushButton_t_arch,SIGNAL(clicked(bool)),SLOT(get_text_arch()));
    connect(ui->pushButton_b_other,SIGNAL(clicked(bool)),SLOT(get_background_other()));
    connect(ui->pushButton_t_other,SIGNAL(clicked(bool)),SLOT(get_text_other()));

}

D_settings_app::~D_settings_app()
{
    delete ui;
}
void D_settings_app::load_settings()
{
    Objects_app obj;
    QSettings *settings = new QSettings(obj.local_path_settings,QSettings::IniFormat);
    ui->lineEdit_host->setText(settings->value("db/ip").toString());
    ui->lineEdit_port->setText(settings->value("db/port").toString());
    ui->lineEdit_database_main->setText(settings->value("db/database_main").toString());
    ui->lineEdit_db_auth->setText(settings->value("db/database_auth").toString());

}
void D_settings_app::save_settings()
{
    Objects_app obj;
    QSettings *settings = new QSettings(obj.local_path_settings,QSettings::IniFormat);
    settings->setValue("db/ip",ui->lineEdit_host->text());
    settings->setValue("db/port",ui->lineEdit_port->text());
    settings->setValue("db/database_main",ui->lineEdit_database_main->text());
    settings->setValue("db/database_auth",ui->lineEdit_db_auth->text());
    D_settings_app::close();
}
void D_settings_app::get_background_arch()
{
    QColor color = get_color();
    ui->pushButton_b_arch->setStyleSheet("background-color: "+color.name());

}
void D_settings_app::get_background_other()
{
    QColor color = get_color();
    ui->pushButton_b_other->setStyleSheet("background-color: "+color.name());
}
void D_settings_app::get_text_arch()
{
    QColor color = get_color();
    ui->pushButton_t_arch->setStyleSheet("background-color: "+color.name());
}
void D_settings_app::get_text_other()
{
    QColor color = get_color();
    ui->pushButton_t_other->setStyleSheet("background-color: "+color.name());
}
QColor D_settings_app::get_color()
{
    QColor color = QColorDialog::getColor(QColor::Cmyk);
    if (!color.isValid() ) {
    // Cancel
    }
    else
    {
        return color;
    }
}
