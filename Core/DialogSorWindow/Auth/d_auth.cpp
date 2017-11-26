#include "d_auth.h"
#include "ui_d_auth.h"

D_auth::D_auth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::D_auth)
{
    ui->setupUi(this);
}

D_auth::~D_auth()
{
    delete ui;
}

bool D_auth::server_settings()
{

}
QString D_auth::get_username_os()
{

}
void D_auth::sign_in()
{

}

