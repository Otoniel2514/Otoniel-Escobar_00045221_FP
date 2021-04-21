//Implementacion del Bucle For en el programa
#include "iostream"
#include "conio.h"
#include "stdio.h"
using namespace std;

int main()
{
    //Bucle for 
    int i,u;
    for (int i = 1; i <= 10; i++)
    {
    cout<<i<<endl;
    }
    for (u = 10; u >= 1; u--)
    {
        cout<<u<<endl;
    }
    return 0;
}

    
    
//Tablas de multiplicar del 1 hasta la tabla del 10
#include "iostream"
#include "math.h"
using namespace std;
int main()
{
    int number;
    do
    {
      cout<<"Ingrese el numero de la tabla que desea  consultar \n Tabla: "<<endl;
      cin>>number;

    } while ((number < 1)||(number > 10));
    cout<<"La tabla del "<<number<<"\nes"<<endl;
    for (int i = 0; i <= 10; i++)
    {
        cout<<number<<"*"<<i<<"="<<number * i<<endl;
    }
    cout<<"\n\n";
    system("pause");
    return 0;
}



//Calcular el valor de: 1+2+3+4+...+m
#include "iostream"
#include "stdio.h"
#include "conio.h"
using namespace std;

int main()
{
    int m,i, suma=0;

    cout<<"Digite el numero de elementos"<<endl;
    cin>>m;

    for (i = 1; i <= m; i++)
    {
        suma += i;
    }
    cout<<"\nLa suma de los primeros"<<m<<"numeros es: "<<suma<<endl;
    getch();

    return 0;
    
}