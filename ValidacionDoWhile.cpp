#include "iostream"
using namespace std;
int main()
{
    int edad;

    do
    {
    cout<<"\nIngrese una edad que se encuentre entre 15 y 60: "<<endl;
    cin>>edad;
    
    if (edad < 15 || edad > 60)
    {
         cout<<"\tLa edad ingresada es incorrecta, Por favor intentelo de nuevo...."<<endl;

    }
    }
    while (edad < 15 || edad > 60);
    
    cout<<"\n\tHa ingresado la edad correctamente: "<<edad<<endl;

    cin.get();
    return 0;
}