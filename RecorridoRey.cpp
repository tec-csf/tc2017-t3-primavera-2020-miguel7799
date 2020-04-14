#include <iostream>
#include <stdio.h>
#include <stdbool.h>
using namespace std;
#define X 8
#define Y 8

class RecorridoRey{
    public: 
            int movimientoRey (int x, int y, int movimiento, int inicio[X][Y], int movx[X], int movy[Y] ){
                int m, next_x, next_y; 
                if (movimiento == X*Y) 
                    return 1;
                for (m = 0; m < 8; m++) 
                { 
                    next_x = x + movx[m]; 
                    next_y = y + movy[m]; 
                    if (canMove(next_x, next_y, inicio)) 
                    { 
                        inicio[next_x][next_y] = movimiento; 
                        if (movimientoRey(next_x, next_y, movimiento+1, inicio, movx, movy) == 1) 
                            return 1; 
                        else
                            inicio[next_x][next_y] = -1;
                    } 
                }
                return 0; 
        }
        int canMove(int x, int y, int tablero[X][Y]){
            return ( x >= 0 && x < X && y >= 0 && 
             y < Y && tablero[x][y] == -1);
        }
        void solucionFinal(int tablero [X][Y]){
            for (int x = 0; x < X; x++) 
            { 
                for (int y = 0; y < Y; y++) 
                    printf(" %3d ", tablero[x][y]); 
                    printf("\n"); 
            } 
        }
        int solucion(){
            int inicio [X][Y];
            for (int x = 0; x < X; x++) 
                for (int y = 0; y < Y; y++) 
                    inicio[x][y] = -1;           
            int xMove[4] = { 1, -1, 0, 0 }; 
            int yMove[4] = { 0, 0, 1, -1 }; 
 
            inicio[0][0]  = 0; 
            if (movimientoRey(0, 0, 1, inicio, xMove, yMove) == 0) 
            { 
                printf("Solution does not exist"); 
                return 0; 
            } 
            else
                solucionFinal(inicio); 
        
            return 1; 
        }
};
int main(){
    RecorridoRey r;
    r.solucion();
    return 0;
}




