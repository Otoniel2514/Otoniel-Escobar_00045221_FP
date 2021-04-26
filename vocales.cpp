//Crear un programa que nos permita identificar dentro del abecedario español castellano cuales son vocales y cuales no. si es vocal o no 

#include "iostream"
using namespace std;
int main()
{
    //Declaracion de variable a utilizar en el programa
    char letra;
    { 
        cout<<"\nDigite su letra del alfabeto"<<endl;
        cin>>letra;    
            
    }
        if(letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
        cout<<"Su letra del alfabeto ingresada si es una vocal."<<endl;
        
        else
        cout<<"\nSu letra del alfabeto ingresada no es una vocal, intentelo de nuevo por favor."<<endl;
        

       return 0;
}






