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
    load_settings_table_main_color();
    load_param_color();


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
void D_settings_app::set_color()
{
    Objects_app obj;
    QSettings *settings = new QSettings(obj.local_path_settings,QSettings::IniFormat);
    QString color = get_color().name();
    QPushButton* button = qobject_cast<QPushButton*>(sender());
         if (!button) return;
         QString var = button->property("type").toString();
         button->setStyleSheet("background-color: "+color);
         settings->setValue("Style/main_table_color"+var,color);



}
void D_settings_app::load_param_color()
{
    Objects_app obj;
    QSettings *settings = new QSettings(obj.local_path_settings,QSettings::IniFormat);
    for(int i=1;i<=2;i++)
    {
        for(int y=1; y<=2;y++)
        {
            QString y_str;
            QString x_str;
            y_str.setNum(y);
            x_str.setNum(i);
            QPushButton * button = static_cast<QPushButton*>(ui->tableView->indexWidget(model->index(i,y)));
            QString color = settings->value("Style/main_table_color"+x_str+";"+y_str).toString();
            button->setStyleSheet("background-color: "+color);
        }
    }
}
void D_settings_app::load_settings_table_main_color()
{
    model = new QStandardItemModel(this);
    model->insertColumns(0,3);
    model->insertRows(0,3);
    model->setData(model->index(1,0),"Архивная запись");
    model->setData(model->index(2,0),"Остальные записи");
    model->setData(model->index(0,1),"Фон");
    model->setData(model->index(0,2),"Текст");
    ui->tableView->setModel(model);
    for(int i=1;i<=2;i++)
    {
        for(int y=1; y<=2;y++)
        {
            QPushButton *button;
            button = new QPushButton(ui->tableView);
            button->setStyleSheet("background-color: lightgray");
            QString y_str;
            QString x_str;
            y_str.setNum(y);
            x_str.setNum(i);
            button->setProperty("type",x_str+";"+y_str);
            connect(button,SIGNAL(clicked()),SLOT(set_color()));
            ui->tableView->setIndexWidget(model->index(i,y), button);
        }
    }
}
