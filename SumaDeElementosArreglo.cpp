//Suma de elementos para un arreglo
#include "iostream"
#include "vector"
#include "conio.h"
#include "math.h"
using namespace std;
int main()
{
    int numeros[] = {1,2,3,4,5};
    int suma = 0;
    for (int i = 0; i < 5; i++)
    {
        suma = numeros *[1];
        cout<<"Numero: "<<numeros[i]<<endl;
    }
    cout<<"La suma de los numeros es: "<<suma<<endl;
    return 0;

}

int numeros[100];
int n, mayor = 0;
cout<<"Digite el numero de elementos del arreglo: "<<endl;
cin>>n;
for (int i = 0; i < n; i++)
{
    cout<<i+1<<"Digite un numero "<<":"<<endl;
    cin>>numeros[i];

    if (numeros[i]>mayor)
    {
        mayor = numeros[i];
    }
}
cout<<"El numero mayor es: "
