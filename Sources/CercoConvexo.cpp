/*
    * -Miguel Ángel Hernández Maldonado-
    * 
    * Este archivo es parte de https://github.com/tec-csf/tc2017-t3-primavera-2020-miguel7799
    *
    * Desarrollado para la clase de Analisis y Diseño de Algoritmos.
    *
    * Consulte el archivo README ubicado en el repositorio para
    * obeter más detalles sobre la propiedad y datos especificos del código
    * 
    * Problema 4: Se desea implementar un algoritmo que permita resolver el problema de
    * encontrar el cerco convexo de un conjunto de puntos en el plano XY
    *
    * Cerco convexo: Secuencia de puntos del conjunto que define una figura convexa
    * que los encierra
*/

#include <iostream>
#include <iomanip>

//  * define N "": caidad de puntos que tiene la matriz por lado
#define N 3
using namespace std;

/* 
    * Implementacion de la clase Cerco Convexo para implrirmir 
    * la mariz dada por el usuario donde viene la figura que se desa 
    * caulcular y para encontrar y mostrar los puntos que forman
    * el cerco convexo de dicha figura.
    *
    * Metodos Principales(printMatriz, busquedaPuntos).
    * 
    * El método printCercoConvexo une todos los métodos 
    * en uno solo.
    * 
    * la función main() para este programa es ordenada y simple.
   
*/
class CercoConvexo{
    public:

/*  
    * printMatriz: imprime la matriz donde se encuentra la figura
    * de la cual se desea calcular el "Cerco Convexo".
    * @param int Matriz[][]: matriz con la figura dibujada con "1" y "0".
    * @param int f: número de fila.
    * @param int c: número de columna.
    * @return void
*/
        void printMatriz(int Matriz[N][N]){
            for(int f=0; f<N; f++){
                for(int c=0; c<N; c++){
                    cout<<setw(4)<<Matriz[f][c] <<setw(4);
                }cout<<endl;
            }
        }//end printMatriz

/*
    * busquedaPuntos: Es el método clave ya que Busca los puntos marcados como "1" 
    * dentro de la matriz.
    * @param int Matriz[][]: matriz con la figura dibujada con "1" y "0".
    * @param int num: es el número que se usa para sustituir a los puntos 
    * dentro de la matriz.
    * @param int contador: cuenta el número de puntos de la figura.
    * @param bool verifica: booleano para verificar que el numero 
    * de int num, conside con el de la matriz.
    * @param int co: columna donde esta el punto.
    * @param int fi: fila donde esta el punto.
    * @return punto
*/
        int busquedaPuntos(int Matriz[N][N], int num){
        cout<<"El Cerco Convexo es: ";    
        bool verifica;
        int contador = 0;
            for(int f=0; f<N; f++){
                for(int c=0; c<N; c++){
                    if(num == Matriz[f][c]){
                    int co= c;
                    int fi = f;
                        verifica = true;
                        if(verifica == true){
                            cout<<fi+1<<","<< co+1<<" ,";
                            contador ++;
                        }else{
                            cout<<"Valor no encontrado"<<endl;
                        }     
                    }
                }
            }
                cout<<endl;
                cout<<"Es una figura de: "<<contador <<" lados"<<endl;
        }//end busquedaPuntos

/*
    * printCercoConvexo: Junta los métodos y es donde el usuario inserta la
    * figura de la cual quiere conocer el Cerco Convexo.
    * @param int matriz: matriz donde se dubujará mediante 1 y 0 la figura.
    * 

*/
        int printCercoConvexo(){
        int Matriz [N][N] = { { 0, 1, 0 }, 
                              { 0, 0, 0 }, 
                              { 1, 0, 1 } };
        printMatriz(Matriz);
        busquedaPuntos(Matriz,1);
        }//end printCercoConvexo
};
int main(){
CercoConvexo c;
cout<<"Figura:"<<endl;
c.printCercoConvexo();
return 0;
}
