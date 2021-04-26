#include "iostream"
using namespace std;
int main(){
    //Declaracion de variable a utilizar en el programa
    char letra;

    cout<<"1. Digite un caracter alfabetico: ";
    cout<<"2. Salir y digitar la siguiente letra: ";
    cin>>letra;

    switch (letra){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': cout<<"Su caracter alfabetico digitado si es una vocal";break;
    default: cout<<"Su caracter alfabetico digitado no es una vocal";break;
    }
    return 0;
}

