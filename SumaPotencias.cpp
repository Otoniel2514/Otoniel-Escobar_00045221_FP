
#include "iostream"
#include "stdlib.h"
#include "math.h"
using namespace std;
int main()
{
    int suma = 0, potencia = 0, n;

    cout<<"Digite el numero de elementos a sumar"<<endl;
    cin>>n; 
    cout<<"\n";

    for (int i = 1; i <= n; i++)
    {
        potencia = pow(2,i);
        cout<<"Potencia"<<endl;
        suma += potencia;

    }
    cout<<"Suma de sus potencias = "<<suma<<endl;
    system("pause");
    return 0;

}