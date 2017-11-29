#include "d_auth.h"
#include "ui_d_auth.h"

D_auth::D_auth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D_auth)
{
    ui->setupUi(this);
    QPndCore core;
    get_username_os();
    connect(ui->pushButton_settings,SIGNAL(clicked()),SLOT(server_settings()));
    connect(ui->pushButton_sign,SIGNAL(clicked(bool)),SLOT(sign_in()));
    connect(ui->pushButton_cancel,SIGNAL(clicked(bool)),SLOT(close()));
}

D_auth::~D_auth()
{
    delete ui;
}

bool D_auth::server_settings()
{
    QPndCore core;
    core.settings_app();
}
void D_auth::get_username_os()
{
    Objects_app::os obj;
            ui->lineEdit_login->setText(obj.username);
            ui->lineEdit_password->setFocus();
}
void D_auth::sign_in()
{
    messages_app mess;
    QPndCore core;
    Objects_app::server_bd obj;
    obj.username = ui->lineEdit_login->text();
    obj.password = ui->lineEdit_password->text();
    core.check_cert();
    QSqlDatabase db = QSqlDatabase::database("main");
    db.setDatabaseName(obj.database_patients);
    if(db.open())
    {
        this->accept();
    }
    else
    {
        ui->label_3->setText("Неправильный логин или пароль");
    }

}

