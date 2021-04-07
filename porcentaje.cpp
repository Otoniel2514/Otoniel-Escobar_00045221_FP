#include "iostream"
using namespace std;
int main()
{
    float practica, teorica, participacion, total;

    cout<<"Ingrese su nota obtenida en la evaluacion practica"<<endl;
    cin>>practica;
    cout<<"Ingrese su nota obtenida en la evaluacion teorica"<<endl;
    cin>>teorica;
    cout<<"Ingrese su nota obtenida en la participacion"<<endl;
    cin>>participacion;


    practica = practica * 0.30;
    teorica *= 0.60;
    participacion *= 0.10;

    total = practica + teorica + participacion;

    cout<<"En su nota de la evaluacion practica obtuvo: "<<practica<<" puntos."<<endl;
    cout<<"En su nota de la evaluacion teorica obtuvo: "<<teorica<<" puntos"<<endl;
    cout<<"En su nota de participacion obtuvo: "<<participacion<<" puntos"<<endl;
    
    cout<<"Su nota total es: "<<total<<"."<<endl;

    return 0;

}