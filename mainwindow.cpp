#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    buscaminas = Buscaminas();
    imprimirTablero();
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::imprimirTablero(){

    for(int fila = 0; fila < buscaminas.rows;fila++){
      for(int columna = 0; columna < buscaminas.cols; columna++){
        if(buscaminas.visible[fila][columna]){

          if(buscaminas.tablero[fila][columna] == 0){
            char str[2] = " ";
            cambiarTextoBotton(fila, columna, str);
          }else if(buscaminas.tablero[fila][columna] == 9){
             char str[2] = "*";
            cambiarTextoBotton(fila, columna, str);
          }else{
            cambiarTextoBotton2(fila, columna, QString::number(buscaminas.tablero[fila][columna]));
          }

        }else{
          char str[2] = "#";
          cambiarTextoBotton(fila, columna, str);
        }
      }
      cout<<endl;
    }
}

void MainWindow::clickButtonHandler(int fila, int columna){
    int resultado = buscaminas.comprobarTablero(fila, columna);
    imprimirTablero();
    if(resultado == -1){
       ui->infoGame->setText("Juego terminado");
    }
    else if(resultado == 90){
        ui->infoGame->setText("¡Has ganado!");
    }
}


void MainWindow::cambiarTextoBotton2(int fila, int columna, QString valor){
    if(fila == 0){
        switch (columna) {
            case 0:
                ui->button00->setText(valor);
            break;
            case 1:
                ui->button01->setText(valor);
            break;
            case 2:
                ui->button02->setText(valor);
            case 3:
                ui->button03->setText(valor);
                break;
            case 4:
                ui->button04->setText(valor);
            break;
            case 5:
                ui->button05->setText(valor);
            break;
            case 6:
                ui->button06->setText(valor);
            break;
            case 7:
                ui->button07->setText(valor);
            break;
            case 8:
                ui->button08->setText(valor);
            break;
            case 9:
                ui->button09->setText(valor);
            break;
        }
    }

    if(fila == 1){
        switch (columna) {
            case 0:
                ui->button10->setText(valor);
            break;
            case 1:
                ui->button11->setText(valor);
            break;
            case 2:
                ui->button12->setText(valor);
            case 3:
                ui->button13->setText(valor);
                break;
            case 4:
                ui->button14->setText(valor);
            break;
            case 5:
                ui->button15->setText(valor);
            break;
            case 6:
                ui->button16->setText(valor);
            break;
            case 7:
                ui->button17->setText(valor);
            break;
            case 8:
                ui->button18->setText(valor);
            break;
            case 9:
                ui->button19->setText(valor);
            break;
        }
    }

    if(fila == 2){
        switch (columna) {
            case 0:
                ui->button20->setText(valor);
            break;
            case 1:
                ui->button21->setText(valor);
            break;
            case 2:
                ui->button22->setText(valor);
            case 3:
                ui->button23->setText(valor);
                break;
            case 4:
                ui->button24->setText(valor);
            break;
            case 5:
                ui->button25->setText(valor);
            break;
            case 6:
                ui->button26->setText(valor);
            break;
            case 7:
                ui->button27->setText(valor);
            break;
            case 8:
                ui->button28->setText(valor);
            break;
            case 9:
                ui->button29->setText(valor);
            break;
        }
    }

    if(fila == 3){
        switch (columna) {
            case 0:
                ui->button30->setText(valor);
            break;
            case 1:
                ui->button31->setText(valor);
            break;
            case 2:
                ui->button32->setText(valor);
            case 3:
                ui->button33->setText(valor);
                break;
            case 4:
                ui->button34->setText(valor);
            break;
            case 5:
                ui->button35->setText(valor);
            break;
            case 6:
                ui->button36->setText(valor);
            break;
            case 7:
                ui->button37->setText(valor);
            break;
            case 8:
                ui->button38->setText(valor);
            break;
            case 9:
                ui->button39->setText(valor);
            break;
        }
    }

    if(fila == 4){
        switch (columna) {
            case 0:
                ui->button40->setText(valor);
            break;
            case 1:
                ui->button41->setText(valor);
            break;
            case 2:
                ui->button42->setText(valor);
            case 3:
                ui->button43->setText(valor);
                break;
            case 4:
                ui->button44->setText(valor);
            break;
            case 5:
                ui->button45->setText(valor);
            break;
            case 6:
                ui->button46->setText(valor);
            break;
            case 7:
                ui->button47->setText(valor);
            break;
            case 8:
                ui->button48->setText(valor);
            break;
            case 9:
                ui->button49->setText(valor);
            break;
        }
    }


    if(fila == 5){
        switch (columna) {
            case 0:
                ui->button50->setText(valor);
            break;
            case 1:
                ui->button51->setText(valor);
            break;
            case 2:
                ui->button52->setText(valor);
            case 3:
                ui->button53->setText(valor);
                break;
            case 4:
                ui->button54->setText(valor);
            break;
            case 5:
                ui->button55->setText(valor);
            break;
            case 6:
                ui->button56->setText(valor);
            break;
            case 7:
                ui->button57->setText(valor);
            break;
            case 8:
                ui->button58->setText(valor);
            break;
            case 9:
                ui->button59->setText(valor);
            break;
        }
    }


    if(fila == 6){
        switch (columna) {
            case 0:
                ui->button60->setText(valor);
            break;
            case 1:
                ui->button61->setText(valor);
            break;
            case 2:
                ui->button62->setText(valor);
            case 3:
                ui->button63->setText(valor);
                break;
            case 4:
                ui->button64->setText(valor);
            break;
            case 5:
                ui->button65->setText(valor);
            break;
            case 6:
                ui->button66->setText(valor);
            break;
            case 7:
                ui->button67->setText(valor);
            break;
            case 8:
                ui->button68->setText(valor);
            break;
            case 9:
                ui->button69->setText(valor);
            break;
        }
    }

    if(fila == 7){
        switch (columna) {
            case 0:
                ui->button70->setText(valor);
            break;
            case 1:
                ui->button71->setText(valor);
            break;
            case 2:
                ui->button72->setText(valor);
            case 3:
                ui->button73->setText(valor);
                break;
            case 4:
                ui->button74->setText(valor);
            break;
            case 5:
                ui->button75->setText(valor);
            break;
            case 6:
                ui->button76->setText(valor);
            break;
            case 7:
                ui->button77->setText(valor);
            break;
            case 8:
                ui->button78->setText(valor);
            break;
            case 9:
                ui->button79->setText(valor);
            break;
        }
    }


    if(fila == 8){
        switch (columna) {
            case 0:
                ui->button80->setText(valor);
            break;
            case 1:
                ui->button81->setText(valor);
            break;
            case 2:
                ui->button82->setText(valor);
            case 3:
                ui->button83->setText(valor);
                break;
            case 4:
                ui->button84->setText(valor);
            break;
            case 5:
                ui->button85->setText(valor);
            break;
            case 6:
                ui->button86->setText(valor);
            break;
            case 7:
                ui->button87->setText(valor);
            break;
            case 8:
                ui->button88->setText(valor);
            break;
            case 9:
                ui->button89->setText(valor);
            break;
        }
    }

    if(fila == 9){
        switch (columna) {
            case 0:
                ui->button90->setText(valor);
            break;
            case 1:
                ui->button91->setText(valor);
            break;
            case 2:
                ui->button92->setText(valor);
            case 3:
                ui->button93->setText(valor);
                break;
            case 4:
                ui->button94->setText(valor);
            break;
            case 5:
                ui->button95->setText(valor);
            break;
            case 6:
                ui->button96->setText(valor);
            break;
            case 7:
                ui->button97->setText(valor);
            break;
            case 8:
                ui->button98->setText(valor);
            break;
            case 9:
                ui->button99->setText(valor);
            break;
        }
    }
}



void MainWindow::cambiarTextoBotton(int fila, int columna, char *valor){
    if(fila == 0){
        switch (columna) {
            case 0:
                ui->button00->setText(valor);
            break;
            case 1:
                ui->button01->setText(valor);
            break;
            case 2:
                ui->button02->setText(valor);
            case 3:
                ui->button03->setText(valor);
                break;
            case 4:
                ui->button04->setText(valor);
            break;
            case 5:
                ui->button05->setText(valor);
            break;
            case 6:
                ui->button06->setText(valor);
            break;
            case 7:
                ui->button07->setText(valor);
            break;
            case 8:
                ui->button08->setText(valor);
            break;
            case 9:
                ui->button09->setText(valor);
            break;
        }
    }

    if(fila == 1){
        switch (columna) {
            case 0:
                ui->button10->setText(valor);
            break;
            case 1:
                ui->button11->setText(valor);
            break;
            case 2:
                ui->button12->setText(valor);
            case 3:
                ui->button13->setText(valor);
                break;
            case 4:
                ui->button14->setText(valor);
            break;
            case 5:
                ui->button15->setText(valor);
            break;
            case 6:
                ui->button16->setText(valor);
            break;
            case 7:
                ui->button17->setText(valor);
            break;
            case 8:
                ui->button18->setText(valor);
            break;
            case 9:
                ui->button19->setText(valor);
            break;
        }
    }

    if(fila == 2){
        switch (columna) {
            case 0:
                ui->button20->setText(valor);
            break;
            case 1:
                ui->button21->setText(valor);
            break;
            case 2:
                ui->button22->setText(valor);
            case 3:
                ui->button23->setText(valor);
                break;
            case 4:
                ui->button24->setText(valor);
            break;
            case 5:
                ui->button25->setText(valor);
            break;
            case 6:
                ui->button26->setText(valor);
            break;
            case 7:
                ui->button27->setText(valor);
            break;
            case 8:
                ui->button28->setText(valor);
            break;
            case 9:
                ui->button29->setText(valor);
            break;
        }
    }

    if(fila == 3){
        switch (columna) {
            case 0:
                ui->button30->setText(valor);
            break;
            case 1:
                ui->button31->setText(valor);
            break;
            case 2:
                ui->button32->setText(valor);
            case 3:
                ui->button33->setText(valor);
                break;
            case 4:
                ui->button34->setText(valor);
            break;
            case 5:
                ui->button35->setText(valor);
            break;
            case 6:
                ui->button36->setText(valor);
            break;
            case 7:
                ui->button37->setText(valor);
            break;
            case 8:
                ui->button38->setText(valor);
            break;
            case 9:
                ui->button39->setText(valor);
            break;
        }
    }

    if(fila == 4){
        switch (columna) {
            case 0:
                ui->button40->setText(valor);
            break;
            case 1:
                ui->button41->setText(valor);
            break;
            case 2:
                ui->button42->setText(valor);
            case 3:
                ui->button43->setText(valor);
                break;
            case 4:
                ui->button44->setText(valor);
            break;
            case 5:
                ui->button45->setText(valor);
            break;
            case 6:
                ui->button46->setText(valor);
            break;
            case 7:
                ui->button47->setText(valor);
            break;
            case 8:
                ui->button48->setText(valor);
            break;
            case 9:
                ui->button49->setText(valor);
            break;
        }
    }


    if(fila == 5){
        switch (columna) {
            case 0:
                ui->button50->setText(valor);
            break;
            case 1:
                ui->button51->setText(valor);
            break;
            case 2:
                ui->button52->setText(valor);
            case 3:
                ui->button53->setText(valor);
                break;
            case 4:
                ui->button54->setText(valor);
            break;
            case 5:
                ui->button55->setText(valor);
            break;
            case 6:
                ui->button56->setText(valor);
            break;
            case 7:
                ui->button57->setText(valor);
            break;
            case 8:
                ui->button58->setText(valor);
            break;
            case 9:
                ui->button59->setText(valor);
            break;
        }
    }


    if(fila == 6){
        switch (columna) {
            case 0:
                ui->button60->setText(valor);
            break;
            case 1:
                ui->button61->setText(valor);
            break;
            case 2:
                ui->button62->setText(valor);
            case 3:
                ui->button63->setText(valor);
                break;
            case 4:
                ui->button64->setText(valor);
            break;
            case 5:
                ui->button65->setText(valor);
            break;
            case 6:
                ui->button66->setText(valor);
            break;
            case 7:
                ui->button67->setText(valor);
            break;
            case 8:
                ui->button68->setText(valor);
            break;
            case 9:
                ui->button69->setText(valor);
            break;
        }
    }

    if(fila == 7){
        switch (columna) {
            case 0:
                ui->button70->setText(valor);
            break;
            case 1:
                ui->button71->setText(valor);
            break;
            case 2:
                ui->button72->setText(valor);
            case 3:
                ui->button73->setText(valor);
                break;
            case 4:
                ui->button74->setText(valor);
            break;
            case 5:
                ui->button75->setText(valor);
            break;
            case 6:
                ui->button76->setText(valor);
            break;
            case 7:
                ui->button77->setText(valor);
            break;
            case 8:
                ui->button78->setText(valor);
            break;
            case 9:
                ui->button79->setText(valor);
            break;
        }
    }


    if(fila == 8){
        switch (columna) {
            case 0:
                ui->button80->setText(valor);
            break;
            case 1:
                ui->button81->setText(valor);
            break;
            case 2:
                ui->button82->setText(valor);
            case 3:
                ui->button83->setText(valor);
                break;
            case 4:
                ui->button84->setText(valor);
            break;
            case 5:
                ui->button85->setText(valor);
            break;
            case 6:
                ui->button86->setText(valor);
            break;
            case 7:
                ui->button87->setText(valor);
            break;
            case 8:
                ui->button88->setText(valor);
            break;
            case 9:
                ui->button89->setText(valor);
            break;
        }
    }

    if(fila == 9){
        switch (columna) {
            case 0:
                ui->button90->setText(valor);
            break;
            case 1:
                ui->button91->setText(valor);
            break;
            case 2:
                ui->button92->setText(valor);
            case 3:
                ui->button93->setText(valor);
                break;
            case 4:
                ui->button94->setText(valor);
            break;
            case 5:
                ui->button95->setText(valor);
            break;
            case 6:
                ui->button96->setText(valor);
            break;
            case 7:
                ui->button97->setText(valor);
            break;
            case 8:
                ui->button98->setText(valor);
            break;
            case 9:
                ui->button99->setText(valor);
            break;
        }
    }

}





void MainWindow::on_button00_clicked()
{
    clickButtonHandler(0,0);
}


void MainWindow::on_button01_clicked()
{
    clickButtonHandler(0,1);

}

void MainWindow::on_button02_clicked()
{
    clickButtonHandler(0,2);

}

void MainWindow::on_button03_clicked()
{
    clickButtonHandler(0,3);

}

void MainWindow::on_button04_clicked()
{
    clickButtonHandler(0,4);

}

void MainWindow::on_button05_clicked()
{
    clickButtonHandler(0,5);

}

void MainWindow::on_button06_clicked()
{
    clickButtonHandler(0,6);

}

void MainWindow::on_button07_clicked()
{
    clickButtonHandler(0,7);

}

void MainWindow::on_button08_clicked()
{
    clickButtonHandler(0,8);

}

void MainWindow::on_button09_clicked()
{
    clickButtonHandler(0,9);

}

void MainWindow::on_button10_clicked()
{
    clickButtonHandler(1,0);

}

void MainWindow::on_button11_clicked()
{
    clickButtonHandler(1,1);

}

void MainWindow::on_button12_clicked()
{
    clickButtonHandler(1,2);

}

void MainWindow::on_button13_clicked()
{
    clickButtonHandler(1,3);

}

void MainWindow::on_button14_clicked()
{
    clickButtonHandler(1,4);

}

void MainWindow::on_button15_clicked()
{
    clickButtonHandler(1,5);

}

void MainWindow::on_button16_clicked()
{
    clickButtonHandler(1,6);

}

void MainWindow::on_button17_clicked()
{
    clickButtonHandler(1,7);

}

void MainWindow::on_button18_clicked()
{
    clickButtonHandler(1,8);

}

void MainWindow::on_button19_clicked()
{
    clickButtonHandler(1,9);

}

void MainWindow::on_button20_clicked()
{
    clickButtonHandler(2,0);

}

void MainWindow::on_button21_clicked()
{
    clickButtonHandler(2,1);

}

void MainWindow::on_button22_clicked()
{
    clickButtonHandler(2,2);

}

void MainWindow::on_button23_clicked()
{
    clickButtonHandler(2,3);

}

void MainWindow::on_button24_clicked()
{
    clickButtonHandler(2,4);

}

void MainWindow::on_button25_clicked()
{
    clickButtonHandler(2,5);

}

void MainWindow::on_button26_clicked()
{
    clickButtonHandler(2,6);

}

void MainWindow::on_button27_clicked()
{
    clickButtonHandler(2,7);

}

void MainWindow::on_button28_clicked()
{
    clickButtonHandler(2,8);

}

void MainWindow::on_button29_clicked()
{
    clickButtonHandler(2,9);

}

void MainWindow::on_button30_clicked()
{
    clickButtonHandler(3,0);

}

void MainWindow::on_button31_clicked()
{
    clickButtonHandler(3,1);

}

void MainWindow::on_button32_clicked()
{
    clickButtonHandler(3,2);

}

void MainWindow::on_button33_clicked()
{
    clickButtonHandler(3,3);

}

void MainWindow::on_button34_clicked()
{
    clickButtonHandler(3,4);

}

void MainWindow::on_button35_clicked()
{
    clickButtonHandler(3,5);

}

void MainWindow::on_button36_clicked()
{
    clickButtonHandler(3,6);

}

void MainWindow::on_button37_clicked()
{
    clickButtonHandler(3,7);

}

void MainWindow::on_button38_clicked()
{
    clickButtonHandler(3,8);

}

void MainWindow::on_button39_clicked()
{
    clickButtonHandler(3,9);

}

void MainWindow::on_button40_clicked()
{
    clickButtonHandler(4,0);

}

void MainWindow::on_button41_clicked()
{
    clickButtonHandler(4,1);

}

void MainWindow::on_button42_clicked()
{
    clickButtonHandler(4,2);

}

void MainWindow::on_button43_clicked()
{
    clickButtonHandler(4,3);

}

void MainWindow::on_button44_clicked()
{
    clickButtonHandler(4,4);

}

void MainWindow::on_button45_clicked()
{
    clickButtonHandler(4,5);

}

void MainWindow::on_button46_clicked()
{
    clickButtonHandler(4,6);

}

void MainWindow::on_button47_clicked()
{
    clickButtonHandler(4,7);

}

void MainWindow::on_button48_clicked()
{
    clickButtonHandler(4,8);

}

void MainWindow::on_button49_clicked()
{
    clickButtonHandler(4,9);

}

void MainWindow::on_button50_clicked()
{
    clickButtonHandler(5,0);

}

void MainWindow::on_button51_clicked()
{
    clickButtonHandler(5,1);

}

void MainWindow::on_button52_clicked()
{
    clickButtonHandler(5,2);

}

void MainWindow::on_button53_clicked()
{
    clickButtonHandler(5,3);

}

void MainWindow::on_button54_clicked()
{
    clickButtonHandler(5,4);

}

void MainWindow::on_button55_clicked()
{
    clickButtonHandler(5,5);

}

void MainWindow::on_button56_clicked()
{
    clickButtonHandler(5,6);

}

void MainWindow::on_button57_clicked()
{
    clickButtonHandler(5,7);

}

void MainWindow::on_button58_clicked()
{
    clickButtonHandler(5,8);

}

void MainWindow::on_button59_clicked()
{
    clickButtonHandler(5,9);

}

void MainWindow::on_button60_clicked()
{
    clickButtonHandler(6,0);

}

void MainWindow::on_button61_clicked()
{
    clickButtonHandler(6,1);

}

void MainWindow::on_button62_clicked()
{
    clickButtonHandler(6,2);

}

void MainWindow::on_button63_clicked()
{
    clickButtonHandler(6,3);

}

void MainWindow::on_button64_clicked()
{
    clickButtonHandler(6,4);

}

void MainWindow::on_button65_clicked()
{
    clickButtonHandler(6,5);

}

void MainWindow::on_button66_clicked()
{
    clickButtonHandler(6,6);

}

void MainWindow::on_button67_clicked()
{
    clickButtonHandler(6,7);

}

void MainWindow::on_button68_clicked()
{
    clickButtonHandler(6,8);

}

void MainWindow::on_button69_clicked()
{
    clickButtonHandler(6,9);

}

void MainWindow::on_button70_clicked()
{
    clickButtonHandler(7,0);

}

void MainWindow::on_button71_clicked()
{
    clickButtonHandler(7,1);

}

void MainWindow::on_button72_clicked()
{
    clickButtonHandler(7,2);

}

void MainWindow::on_button73_clicked()
{
    clickButtonHandler(7,3);

}

void MainWindow::on_button74_clicked()
{
    clickButtonHandler(7,4);

}

void MainWindow::on_button75_clicked()
{
    clickButtonHandler(7,5);

}

void MainWindow::on_button76_clicked()
{
    clickButtonHandler(7,6);

}

void MainWindow::on_button77_clicked()
{
    clickButtonHandler(7,7);

}

void MainWindow::on_button78_clicked()
{
    clickButtonHandler(7,8);

}

void MainWindow::on_button79_clicked()
{
    clickButtonHandler(7,9);

}

void MainWindow::on_button80_clicked()
{
    clickButtonHandler(8,0);

}

void MainWindow::on_button81_clicked()
{
    clickButtonHandler(8,1);

}

void MainWindow::on_button82_clicked()
{
    clickButtonHandler(8,2);

}

void MainWindow::on_button83_clicked()
{
    clickButtonHandler(8,3);

}

void MainWindow::on_button84_clicked()
{
    clickButtonHandler(8,4);

}

void MainWindow::on_button85_clicked()
{
    clickButtonHandler(8,5);

}

void MainWindow::on_button86_clicked()
{
    clickButtonHandler(8,6);

}

void MainWindow::on_button87_clicked()
{
    clickButtonHandler(8,7);

}

void MainWindow::on_button88_clicked()
{
    clickButtonHandler(8,8);

}

void MainWindow::on_button89_clicked()
{
    clickButtonHandler(8,9);

}

void MainWindow::on_button90_clicked()
{
    clickButtonHandler(9,0);

}

void MainWindow::on_button91_clicked()
{
    clickButtonHandler(9,1);

}

void MainWindow::on_button92_clicked()
{
    clickButtonHandler(9,2);

}

void MainWindow::on_button93_clicked()
{
    clickButtonHandler(9,3);

}

void MainWindow::on_button94_clicked()
{
    clickButtonHandler(9,4);

}

void MainWindow::on_button95_clicked()
{
    clickButtonHandler(9,5);

}

void MainWindow::on_button96_clicked()
{
    clickButtonHandler(9,6);

}

void MainWindow::on_button97_clicked()
{
    clickButtonHandler(9,7);

}

void MainWindow::on_button98_clicked()
{
    clickButtonHandler(9,8);

}

void MainWindow::on_button99_clicked()
{
    clickButtonHandler(9,9);

}
