#ifndef TIMEADD_H
#define TIMEADD_H

#include <QMainWindow>

namespace Ui {
class TimeAdd;
}

class TimeAdd : public QMainWindow
{
    Q_OBJECT

public:
    explicit TimeAdd(QWidget *parent = nullptr);
    ~TimeAdd();

public slots:
    void on_btnUstaw_clicked();

    void on_btnAnuluj_clicked();
    void init();
    //QString ustawZmienne(QString QGodzina,QString QMinuta, QString QSekunda);

    QString ustawZmienne1(QString QGodzina);

    QString ustawZmienne2(QString QMinuta);

    QString ustawZmienne3(QString QSekunda);



private:
 Ui::TimeAdd *ui;
};

#endif // TIMEADD_H
