#include "timeadd.h"
#include "ui_timeadd.h"
#include <iostream>

using namespace std;

QString QGodzina1, QMinuta1, QSekunda1;

TimeAdd::TimeAdd(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TimeAdd)
{
    ui->setupUi(this);
    //QString QGodzina, QMinuta, QSekunda;
    //QString QGodzina = new QGodzina(this);

}

TimeAdd::~TimeAdd()
{
    delete ui;
}

void TimeAdd::on_btnUstaw_clicked()
{
    //Ustaw
    cout<<"init ustaw"<<endl;
    QGodzina1 = ui->spinBox->text();
    QGodzina1 = "5";
    QMinuta1 = ui->spinBox_2->text();
    QMinuta1="4";
    QSekunda1 = ui->spinBox_3->text();
    QSekunda1="3";

ui->label->setText(QGodzina1);
ui->label_2->setText(QMinuta1);
ui->label_3->setText(QSekunda1);

//ustawZmienne1(QGodzina1);
//ustawZmienne2(QMinuta1);
//ustawZmienne3(QSekunda1);
}
QString TimeAdd::ustawZmienne1(QString QGodzina)
{
QGodzina=ui->label->text();
    cout<<"Powiedz godfzine " + QGodzina.toStdString()<<endl;
// cout

    return QGodzina;
}
QString TimeAdd::ustawZmienne2(QString QMinuta)
{
    QMinuta= ui->label_2->text();

    cout<<"Powiedz minute " + QMinuta.toStdString()<<endl;

    return QMinuta;
}
QString TimeAdd::ustawZmienne3(QString QSekunda)
{
    //QSekunda = QSekunda1;
    QSekunda = ui->label_3->text();
    cout<<"Powiedz gsekunde " + QSekunda.toStdString()<<endl;
    return QSekunda;
}

void TimeAdd::on_btnAnuluj_clicked()
{
    //Anuluj
    cout<<"init anuluj"<<endl;
}

void TimeAdd::init()
{
    //init
    cout<<"init TimeAdd"<<endl;
}

