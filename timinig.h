#ifndef TIMINIG_H
#define TIMINIG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Timinig; }
QT_END_NAMESPACE

class Timinig : public QMainWindow
{
    Q_OBJECT

public:
    Timinig(QWidget *parent = nullptr);
    ~Timinig();





public slots:

           void Init();
    void myfunctiontimer();
           void on_pushButton_clicked();

           void on_pushButton_2_clicked();

           void on_pushButton_3_clicked();


private slots:


private:
    Ui::Timinig *ui;
    QTimer *timer;
};
#endif // TIMINIG_H
