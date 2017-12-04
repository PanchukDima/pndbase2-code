#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QCloseEvent>

//Core
#include <Core/qpndcore.h>

//Dialogs othner
#include <Core/DialogSorWindow/Auth/d_auth.h>

//Models
#include <Core/Models/main_table/m_main_table.h> // Models main table



namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    m_main_table *m_main_table_model;

private:
    Ui::MainWindow *ui;
public slots:
    void load_setting_find();
    void find_patients();
    void settings_tables();
    void load_table_patients();
    void init_signals();
    void load_settings_user();
};

#endif // MAINWINDOW_H
