#include "m_main_table.h"

m_main_table::m_main_table(QWidget *parent)
{

}
QString m_main_table::load_color(QString x, QString y) const
{

}
QVariant m_main_table::data(const QModelIndex &index, int role) const
{
    QVariant value = QSqlTableModel::data(index,role);

    switch(role){
        case Qt::BackgroundRole:
            if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 0)
            {
                return qVariantFromValue(QColor(load_color("1","1")));
            }
            else if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 1)
            {
                return qVariantFromValue(QColor(Qt::lightGray));
            }
            else if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 3)
            {
                return qVariantFromValue(QColor(Qt::lightGray));
            }
            else if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 4)
            {
                return qVariantFromValue(QColor(Qt::lightGray));
            }
            else if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 5)
            {
                return qVariantFromValue(QColor(Qt::lightGray));
            }
            else if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 9)
            {
                return qVariantFromValue(QColor(Qt::lightGray));
            }
            else if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 10)
            {
                return qVariantFromValue(QColor(Qt::lightGray));
            }
            else if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 11)
            {
                return qVariantFromValue(QColor(Qt::lightGray));
            }
            else if(index.sibling(index.row(),6).data( Qt::DisplayRole ).toInt() == 14)
            {
                return qVariantFromValue(QColor(Qt::lightGray));
            }
            else
            {
                return qVariantFromValue(QColor(Qt::white));
            }
        case Qt::DisplayRole:
            if(index.column() == 7)
            {
                return value.toString().append(" участок");
            }
    }
    return  QSqlTableModel::data(index, role);
}

