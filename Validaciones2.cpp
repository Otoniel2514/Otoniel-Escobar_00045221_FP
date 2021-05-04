#include "iostream"
using namespace std;
int main()
{
    int edad;

    cout<<"\nIngrese una edad entre 15 y 60: "<<endl;
    cin>>edad;

    while (edad < 15 || edad > 60)
    {
        cout<<"\tLa edad ingresada es incorrecta, Por favor intentelo de nuevo...."<<endl;
        cout<<"\n\tIngrese una edad entre 15 y 60: "<<endl;
        cin>>edad;
    }
    cout<<"\n\tHa ingresado la edad correctamente: "<<edad<<endl;

    cin.get();
    return 0;
}