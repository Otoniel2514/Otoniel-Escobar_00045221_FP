//Hacer un programa para rellenar una matriz pidiendole al usuario el numero de columnas y mostrarla

#include "iostream"
#include "conio.h"
using namespace std;

void program()
{   //Declaracion de variables
    int matriz[100][100], filas,columnas;
    //Insertar filas columnas
    cout<<"Ingrese el numero de filas"<<endl;
    cin>>filas;
    cout<<"Ingrese el numero de columnas"<<endl;
    cin>>columnas; 

    //Almacenar datos de la matriz

    for (int i = 0; i <filas; i++){
        for (int j = 0; j < columnas; j++)
        {
            cout<<"Digite un numero["<<i<<"]["<<j<<"]";
            cin>>matriz[i][j];
        }
    }
    //Mostrar matriz
     for (int i = 0; i <filas; i++){
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j];
        }
        cout<<"\n";
    }
    getch();
}
int main()
{
    program();
    return 0;
}
    


  
