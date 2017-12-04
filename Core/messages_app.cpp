#include "messages_app.h"

messages_app::messages_app(QObject *parent)
{

}
void messages_app::db_connect_false()
{
    QMessageBox::warning(this,"Ошибка подключения","Не возможно подключится к базе данных.");
}
