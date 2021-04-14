#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    float x,y,raiz1,potencia1,raiz2,potencia2;
    
    cout<<"Digite su primer cantidad"<<endl;
    cin>>x;
    cout<<"Digite su segunda cantidad"<<endl;
    cin>>y;

    raiz1=(sqrt(x));
    raiz2=(sqrt(y));

    potencia1=(pow(x,3));
    potencia2=(pow(y,3));

    cout<<"Raiz de: "<<x<<" = "<<raiz1<<endl;
    cout<<"Raiz de: "<<y<<" = "<<raiz2<<endl;
    cout<<"Potencia de: "<<x<<" = "<<potencia1<<endl;
    cout<<"Potencia de: "<<y<<" = "<<potencia2<<endl;

    return 0;

}

