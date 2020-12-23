#ifndef MODELS_H
#define MODELS_H

#endif // MODELS_H
#include <iostream>
#include <string.h>

#define COLS 10
#define ROWS 10
#define FALSO 0
#define VERDADERO 1
#define CANTIDAD_BOMBAS 10



using namespace std;


class Juego {
  public:
  string jugador;
  int record;
  int max(int num1, int num2){
    if(num1 > num2){
      return num1;
    }
    return num2;
  }


  int min(int num1, int num2){
    if(num1 < num2){
      return num1;
    }
    return num2;
  }
};


class Buscaminas : public Juego{
    public:

    int tablero[ROWS][COLS];
    bool visible[ROWS][COLS];
    int rows = ROWS;
    int cols = COLS;


    Buscaminas(){
      inicializarTablero();
      imprimirTableroLimpio();
      imprimirTablero();
    }

    void inicializarTablero(){
       cout<<"Inicio de init"<<endl;
      //Inicializacion del tablero
      for(int fila = 0; fila < ROWS; fila ++){
        for(int columna = 0; columna < COLS; columna++){
          tablero[fila][columna] = 0;
        }
      }

      //Poner minas en el tablero
      ponerMinas();

      for(int fila = 0; fila < ROWS;fila++){
        for(int columna = 0; columna < COLS; columna++){
          visible[fila][columna] = FALSO;
        }
      }
      cout<<"Fin de init"<<endl;
    }

    void ponerMinas(){
      int num_minas, fila, columna, fila2, columna2;
      num_minas = 0;
      //Poner 10 minas en el tablero
      while( num_minas < CANTIDAD_BOMBAS){
        //No volver a poner una mina en donde ya hay una mina
        do{
            fila = rand() % ROWS;
            columna = rand() % COLS;
        }while(tablero[fila][columna] == 9);

        tablero[fila][columna] = 9;
        //Incrementar el numero de minas cercanas a las casillas vecinas
        for(fila2 = max(0, fila-1); fila2 <= min(9, fila+1); fila2++){
          for(columna2 = max(0, columna-1); columna2 <= min(9, columna+1); columna2++){
            if(tablero[fila2][columna2]  != 9){
              tablero[fila2][columna2]  = tablero[fila2][columna2] + 1;
            }
          }
        }
        //Incrementar el numero de minas
        num_minas++;
      }
    }


    void destaparCelda(int fila, int columna){
      //cout<<"Destapar en la posicion: "<<fila<<" "<<columna<<endl;
      int fila2, columna2;
      if(visible[fila][columna] == FALSO){
        visible[fila][columna] = VERDADERO;

        if( tablero[fila][columna] == 0){
            for(fila2 = max(0, fila-1); fila2 <= min(9, fila+1); fila2++){
              for(columna2 = max(0, columna-1); columna2 <= min(9, columna+1); columna2++){
                if(tablero[fila2][columna2]  != 9){
                  destaparCelda(fila2, columna2);
                }
              }
            }
        }
      }
    }


    int contarCeldasDestapadas(){
      int total = 0;
      for(int fila = 0; fila < ROWS; fila ++){
        for(int columna = 0; columna < COLS; columna++){
          if(visible[fila][columna]){
            total ++;
          }
        }
      }
      return total;
    }

    int comprobarTablero(int fila, int columna){
      //cout<<"Abrir en la posicion: "<<fila<<", "<<columna<<": "<<tablero[fila][columna]<<endl;
      int resultado = 0;
      if(tablero[fila][columna] == 9){
        visible[fila][columna] = VERDADERO;
        resultado = -1;
      }else{
        destaparCelda(fila, columna);
        resultado = contarCeldasDestapadas();
      }
      imprimirTableroLimpio();
      cout<<endl;
      imprimirTablero();
      return resultado;
    }

    void imprimirTablero(){
      for(int fila = 0; fila < ROWS;fila++){
        for(int columna = 0; columna < COLS; columna++){
          if(visible[fila][columna]){

            if(tablero[fila][columna] == 0){
              cout<<" ";
            }else if(tablero[fila][columna] == 9){
              cout<<"* ";
            }else{
              cout<<tablero[fila][columna]<< " ";
            }

          }else{
            cout<<"# ";
          }
        }
        cout<<endl;
      }
    }

     void imprimirTableroLimpio(){
      for(int fila = 0; fila < ROWS;fila++){
        for(int columna = 0; columna < COLS; columna++){
          cout<<tablero[fila][columna]<< " ";
        }
        cout<<endl;
      }
    }

     char* intToChar(int val){
         char res[2] = " ";
         res[0] = val;
         return res;
     }



};





