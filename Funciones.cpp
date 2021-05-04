// Funcion en un mini progrma que nos permite la accion que deseamos realizar en el main. 
#include "iostream"
using namespace std;

void suma();
void resta();

int main()
{
    suma();
    resta();
    return 0;
}
   void suma()
{
    int a,b, suma;
    cout<<"\nOperacion de la suma"<<endl;

    cout<<"Ingrese su primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese su segundo numero: "<<endl;
    cin>>b;
    suma = a+b;
    cout<<"La suma es: "<<suma<<endl;
    
}
   void resta()
{
    int a,b, resta;
    cout<<"\nOperacion de la Resta"<<endl;

    cout<<"Ingrese su primer numero: "<<endl;
    cin>>a;
    cout<<"Ingrese su segundo numero: "<<endl;
    cin>>b;
    resta = a-b;
    cout<<"La resta es: "<<resta<<endl;
}

  