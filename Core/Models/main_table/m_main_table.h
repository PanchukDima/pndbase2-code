#ifndef M_MAIN_TABLE_H
#define M_MAIN_TABLE_H

#include <QObject>
#include <QSqlTableModel>
#include <QColor>
#include <QSettings>

class m_main_table : public QSqlTableModel
{
    Q_OBJECT
public:
    explicit m_main_table(QWidget *parent = 0);
    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    QString load_color(QString,QString) const;
signals:

public slots:
};

#endif // M_MAIN_TABLE_H
