#include <iostream>
#include <iomanip>
#define N 3
using namespace std;

class CercoConvexo{
    public:
        void printMatriz(int Matriz[N][N]){
            for(int f=0; f<N; f++){
                for(int c=0; c<N; c++){
                    cout<<setw(4)<<Matriz[f][c] <<setw(4);
                }cout<<endl;
            }
        }
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
        }
        int printCercoConvexo(){
        int Matriz [N][N] = { { 1, 0, 1 }, 
                              { 0, 0, 0 }, 
                              { 1, 0, 1 } };
        printMatriz(Matriz);
        busquedaPuntos(Matriz,1);
        }
};
int main(){
CercoConvexo c;
cout<<"Figura:"<<endl;
c.printCercoConvexo();
return 0;
}