/*
    * -Miguel Ángel Hernández Maldonado-
    * 
    * Este archivo es parte de https://github.com/tec-csf/tc2017-t3-primavera-2020-miguel7799
    *
    * Desarrollado para la clase de Analisis y Diseño de Algoritmos.
    * Consulte el archivo README ubicado en el repositorio para obeter más detalles
    * sobre la propiedad y datos especificos del código
    * 
    * Problema 7: Dado un tablero de ajedrez de tamano n*n, un rey es colocado en una casilla
    * arbitraria de coordenadas (x,y). Determinar los n2-1 movimientos del rey, de forma que
    * pase por todas las casillas del tablero solo una vez.
    * 
*/
#include <iostream>
#include <stdio.h>
#include <stdbool.h>
#include <iomanip>
using namespace std;

/*  
    * define X "": Ancho del tablero.
    * define Y ""; Largo del tablero.
*/
#define X 4
#define Y 4

/* 
    * Implementacion de la case RecorridoRey para identificar cuales
    * serán los movimientos que tiene que realizar el rey para recorrer
    * todo el tablero y también identifica si la solución es posible o no.
    *
    * Metodos Principales(movimiento rey).
    * 
    * Hay métodos auxiliares (limite y soluciónTablero) que ayudan a
    * platear los limites de movimiento que puede hacer el rey y como
    * se distribuyen dichos movimientos
    * 
    * El método RecorridoRey une todos los métodos 
    * en uno solo.
    * 
    * la función main() para este programa es ordenada y simple.
   
*/
class RecorridoRey{
    public: 

/*  
    * movimientoRey: calcula cual será el siguiente movimiento del rey.
    * @param int tablero[][]: matriz del tablero
    * @param int x: casilla columna.
    * @param int y: casilla fila
    * @param int movimiento: numeor de movimiento
    * @param int movx[]: casilla del movimiento en la columna
    * @param int movy[]: casilla del movimiento en la fila
    * @param int nextx: siguiente movimiento en x
    * @param int mexty: siguiente movimiento en y
    * @return movimiento
*/
            int movimientoRey (int x, int y, int movimiento, int tablero[X][Y], int movx[X], int movy[Y] ){
                int m, nextx, nexty, contador; 
                if (movimiento == X*Y) 
                    return 1;
                for (m = 0; m < 4; m++) 
                { 
                    nextx = x + movx[m]; 
                    nexty = y + movy[m]; 

                    if (limite(nextx, nexty, tablero)) 
                    { 
                        tablero[nextx][nexty] = movimiento; 
                        
                        if (movimientoRey(nextx, nexty, movimiento+1, tablero, movx, movy) == 1) 
                            return 1; 
                        else
                            tablero[nextx][nexty] = -1;
                            
                    } 
                    
                }
                
                return 0; 
                
        }//end movimientoRey
/*  
    * limite: Es el método donde se implementa el Backtracking y calcula los limites del tablero
    * @param int tablero[][]: matriz del tablero
    * @param int x: casilla columna.
    * @param int y: casilla fila
    * @return limite
*/
        int limite(int x, int y, int tablero[X][Y]){
            return ( x >= 0 && x < X && y >= 0 && y < Y && tablero[x][y] == -1);
        } //end limite

/*  
    * solucionTablero: imprime los movimientos en el tablero
    * @param int Matriz[][]: matriz del tablero
    * @return void
*/
        void solucionTablero(int tablero [X][Y]){ 
            for (int x = 0; x < X; x++)
            { 
                for (int y = 0; y < Y; y++) 
                    cout<<setw(4)<<tablero[x][y]; 
                    cout<<endl;
                         
            }   
            
        }// end solucionTablero
/*
    * int recorridoRey: Junta los métodos y nos da la solución
    * @param int inicio [][]: matriz del tablero
    * @param int inicio [X][Y]; posicione ne la que inicia el recorrido
    * @param int movx[]: cordenadas posibles para el movimiento en x
    * @param int movy[]: cordenadas posibles para el movimiento en y
    * @param

*/
    
        int recorridoRey(){
            int inicio [X][Y];
            
            for (int x = 0; x < X; x++) 
                for (int y = 0; y < Y; y++) 
                    inicio[x][y] = -1;  
                    
                             
            int movx[4] = { 1, -1, 0, 0 }; 
            int movy[4] = { 0, 0, 1, -1 }; 
 
            inicio[0][0] = 0; 
            
            cout<< "El rey iniciará en la posición: 0,0"<< endl;
            cout<< "El tablero tiene un tamaño de: "<<X<<setw(1)<<"*"<<Y <<endl;
            cout<< "El rey hará" <<" "<< (X*Y)<<" "<< "movimientos"<<endl;
            if (movimientoRey(0, 0, 1, inicio, movx, movy) == 0) 
            { 
                cout<<"No tiene solución"<<endl;  
            } 
            else
                solucionTablero(inicio); 
                
                
        
            return 1; 
        }
};
int main(){
    RecorridoRey r;
    r.recorridoRey();
    return 0;
}




