//Hacer un programa 1ue muestre la matriz transpuesta visualmente a la matriz original.

#include "iostream"
#include "conio.h"
using namespace std;

void program()
{   
    //Declaracion de variables
    int matriz[100][100], filas,columnas;
    //Insertar filas columnas
    cout<<"Ingrese el numero de filas"<<endl;
    cin>>filas;
    cout<<"Ingrese el numero de columnas"<<endl;
    cin>>columnas; 

    //Almacenar datos de la matriz

    for (int i = 0; i <filas; i++)
    {
        for (int j = 0; j < columnas; j++)
            {
            cout<<"Digite un numero["<<i<<"]["<<j<<"]";
            cin>>matriz[i][j];
            }
        }
        //Mostrar la matriz original
        cout<<"Matriz original: "<<endl;
        for (int i = 0; i <filas; i++){
        for (int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j];
        }
        cout<<"\n";
        }
        //Mostrar la matriz transpuesta
        cout<<"Matriz transpuesta: "<<endl;
        for (int i = 0; i <filas; i++){
        for (int j = 0; j < columnas; j++)
            {
            cout<<matriz[j][i];
            }
        }

        getch();
}
int main()
{
    program();
    return 0;
}
    