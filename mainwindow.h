#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Models.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Buscaminas buscaminas;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void cambiarTextoBotton(int fila, int columna, char valor[]);
    void imprimirTablero();
    void clickButtonHandler(int fila, int columna);
    void cambiarTextoBotton2(int fila, int columna, QString val);

private slots:
    void on_button00_clicked();

    void on_button01_clicked();

    void on_button02_clicked();

    void on_button03_clicked();

    void on_button04_clicked();

    void on_button05_clicked();

    void on_button06_clicked();

    void on_button07_clicked();

    void on_button08_clicked();

    void on_button09_clicked();

    void on_button10_clicked();

    void on_button11_clicked();

    void on_button12_clicked();

    void on_button13_clicked();

    void on_button14_clicked();

    void on_button15_clicked();

    void on_button16_clicked();

    void on_button17_clicked();

    void on_button18_clicked();

    void on_button19_clicked();

    void on_button20_clicked();

    void on_button21_clicked();

    void on_button22_clicked();

    void on_button23_clicked();

    void on_button24_clicked();

    void on_button25_clicked();

    void on_button26_clicked();

    void on_button27_clicked();

    void on_button28_clicked();

    void on_button29_clicked();

    void on_button30_clicked();

    void on_button31_clicked();

    void on_button32_clicked();

    void on_button33_clicked();

    void on_button34_clicked();

    void on_button35_clicked();

    void on_button36_clicked();

    void on_button37_clicked();

    void on_button38_clicked();

    void on_button39_clicked();

    void on_button40_clicked();

    void on_button41_clicked();

    void on_button42_clicked();

    void on_button43_clicked();

    void on_button44_clicked();

    void on_button45_clicked();

    void on_button46_clicked();

    void on_button47_clicked();

    void on_button48_clicked();

    void on_button49_clicked();

    void on_button50_clicked();

    void on_button51_clicked();

    void on_button52_clicked();

    void on_button53_clicked();

    void on_button54_clicked();

    void on_button55_clicked();

    void on_button56_clicked();

    void on_button57_clicked();

    void on_button58_clicked();

    void on_button59_clicked();

    void on_button60_clicked();

    void on_button61_clicked();

    void on_button62_clicked();

    void on_button63_clicked();

    void on_button64_clicked();

    void on_button65_clicked();

    void on_button66_clicked();

    void on_button67_clicked();

    void on_button68_clicked();

    void on_button69_clicked();

    void on_button70_clicked();

    void on_button71_clicked();

    void on_button72_clicked();

    void on_button73_clicked();

    void on_button74_clicked();

    void on_button75_clicked();

    void on_button76_clicked();

    void on_button77_clicked();

    void on_button78_clicked();

    void on_button79_clicked();

    void on_button80_clicked();

    void on_button81_clicked();

    void on_button82_clicked();

    void on_button83_clicked();

    void on_button84_clicked();

    void on_button85_clicked();

    void on_button86_clicked();

    void on_button87_clicked();

    void on_button88_clicked();

    void on_button89_clicked();

    void on_button90_clicked();

    void on_button91_clicked();

    void on_button92_clicked();

    void on_button93_clicked();

    void on_button94_clicked();

    void on_button95_clicked();

    void on_button96_clicked();

    void on_button97_clicked();

    void on_button98_clicked();

    void on_button99_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
