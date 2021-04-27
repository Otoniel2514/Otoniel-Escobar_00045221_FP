//Crear un programa que nos permita identificar dentro del abecedario español castellano cuales son vocales y cuales no. si es vocal o no 

#include "iostream"
#include "stdlib.h"
using namespace std;
int main()
{
    //Declaracion de variables a utilizar en el programa

    char letra;
    cout<<"\nDigite su letra del orden alfabetico: "<<endl;
    cin>>letra;
    
    switch (letra){
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    cout<<"Su letra digitada del orden alfetico, Si es una vocal."<<endl;
    break;
    default: 
    cout<<"Su letra digitada del orden alfebetico, No es una vocal, intentelo de nuevo por favor."<<endl;
    }
    system("Pause");
    return 0;
}






