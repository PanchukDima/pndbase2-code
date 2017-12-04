#ifndef D_SETTINGS_APP_H
#define D_SETTINGS_APP_H

#include <QDialog>
#include <QSettings>
#include <Core/objects_app.h>
#include <QColorDialog>
#include <QDebug>

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
    QColor get_color();
    void get_background_arch();
    void get_background_other();
    void get_text_arch();
    void get_text_other();

};

#endif // D_SETTINGS_APP_H
