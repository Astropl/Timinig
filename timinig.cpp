#include "timinig.h"
#include "timeadd.h"
#include "ui_timinig.h"
#include "Timery/timedate.h"
#include <QTime>
#include <QTableView>
#include <QTimer>
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
QString QGodzina, QMinuta, QSekunda;


Timinig::Timinig(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Timinig)
{
    //---------Sekcja generacji timera
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myfunctiontimer()));
    timer->start(1000);
    //===================
    ui->setupUi(this);

}

Timinig::~Timinig()
{
    delete ui;
}

void Timinig::Init()
{




}

void Timinig::myfunctiontimer()
{
    time_t czas;
    tm timeinfo;

    QString qStrMin, qStrGodz, qStrSek, qStrDzien, qStrMiesiac, stringDzienTygodnia;

    TimeDate *timeDate = new TimeDate();

    time(&czas);
    timeinfo = *localtime(&czas);
    int godzina = timeinfo.tm_hour;
    int minuta = timeinfo.tm_min;
    int sekunda = timeinfo.tm_sec;
    int dzien = timeinfo.tm_mday;
    int miesiac = timeinfo.tm_mon;
    int rok = timeinfo.tm_year;
    int dzienTygodnia = timeinfo.tm_wday;
    miesiac = miesiac + 1;
    rok = rok + 1900;
    dzienTygodnia = dzienTygodnia + 1;

    qStrMin = timeDate->changeStringsMin(minuta);
    qStrSek = timeDate->changeStringsSek(sekunda);
    qStrDzien = timeDate->changeStringsDzien(dzien);
    qStrGodz = timeDate->changeStringsGodz(godzina);
    qStrMiesiac = timeDate->changeStringsMiesiac(miesiac);
    stringDzienTygodnia = timeDate->changeStringsDzienTygodnia(dzienTygodnia);


    TimeAdd *timeadd = new TimeAdd(this);
    timeadd->ustawZmienne1(QGodzina);
    timeadd->ustawZmienne2(QMinuta);
    timeadd->ustawZmienne3(QSekunda);

cout<<"Powiedz godfzine as " + QGodzina.toStdString()<<endl;

cout<<"Powiedz minute as " + QMinuta.toStdString()<<endl;

 cout<<"Powiedz gsekunde as " + QSekunda.toStdString()<<endl;


    // ui->lblTime->setText(qStrGodz + ":" + qStrMin + ":" + qStrSek);
    // ui->lblDate->setText(QString::number(rok) + "." + qStrMiesiac + "." + qStrDzien);

    // ui->lblWeek->setText(stringDzienTygodnia);




}
void Timinig::on_pushButton_clicked()
{
    //Dodaj

    TimeAdd *timeadd = new TimeAdd(this);
    timeadd->show();
}


void Timinig::on_pushButton_2_clicked()
{
    //Zatrzymaj
}


void Timinig::on_pushButton_3_clicked()
{
    //exit

}

