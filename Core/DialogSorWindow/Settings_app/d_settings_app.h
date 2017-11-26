#ifndef D_SETTINGS_APP_H
#define D_SETTINGS_APP_H

#include <QDialog>
#include <QSettings>
#include <Core/objects_app.h>

namespace Ui {
class D_settings_app;
}

class D_settings_app : public QDialog
{
    Q_OBJECT

public:
    explicit D_settings_app(QWidget *parent = 0);
    ~D_settings_app();

private:
    Ui::D_settings_app *ui;
public slots:
    void save_settings();
    void load_settings();

};

#endif // D_SETTINGS_APP_H
