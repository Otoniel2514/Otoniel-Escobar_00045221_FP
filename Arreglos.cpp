// Introducciendonos al mundo de los arreglos

 /* #include "iostream"
#include "vector"
using namespace std;
int main()
{
    //Datos Quemados
    int array1[]= {1,2,3,4,5};
    string array2[]= {"Hola","holita","Bienvenido","adios","adiosito"};
    char array3[]= {'a','e','i','o','u'};
    float array4[]= {1.1,1.2,1.3,1.4,1.5};

//usar un for para poder imprimir el arreglo(porque primero debe recorrerse)

for (int i = 0; i < 5; i++)
{
cout<<"Primer arreglo: "<<array1[i]<<endl;
}
for (int i = 0; i < 5; i++)
{
cout<<"Segundo arreglo: "<<array2[i]<<endl;
}
for (int i = 0; i < 5; i++)
{
cout<<"Tercer arreglo: "<<array3[i]<<endl;
}
for (int i = 0; i < 5; i++)
{
cout<<"Cuarto arreglo: "<<array4[i]<<endl;
}
system("Pause");
return 0;
} 
*/



// Introducciendonos al mundo de los arreglos

#include "iostream"
#include "vector"
using namespace std;
int main()
{
    //Datos No Quemados
    int array5[50]= 
    string array6[50]= 
    char array7[50]= 
    float array8[50]= 
    int p,q,r,s;

    //Pedir ingresar los datos al usuario
    cout<<"Digite la cantidad de palabras que tendra su arreglo 1: (maximo 50) "<<endl;
    cin>>p;
    for (int i = 0; i < p; i++)
    {
        cout<<"Digite un numero"<<i+1<<":"<<endl;
        cin>> array5[i];
    }
    cout<<"Digite la cantidad de letras que tendra su arreglo 2: (maximo 50) "<<endl;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        cout<<"Digite su palabra "<<i+1<<":"<<endl;
        cin>> array6[i];
    }
    cout<<"Digite la cantidad de palabras que tendra su arreglo 3: (maximo 50) "<<endl;
    cin>>r;
    for (int i = 0; i < r; i++)
    {
    cout<<"Digite su letra "<<i+1<<":"<<endl;
    cin>> array7[i];
    }
    cout<<"Digite la cantidad de flotantes que tendra su arreglo 4: (maximo 50) "<<endl;
    cin>>s;
    for (int i = 0; i < s; i++)
    {
        cout<<"Digite su numero "<<i+1<<":"<<endl;
        cin>> array8[i];
    }

   //Imprimiendo nuestro primer arreglo 1 no quemado
    for (int i = 0; i < p; i++)
    {
        cout<<"Primer arreglo no Quemado: "<<array5[i]<<endl;
    }
    //Imprimiendo nuestro segundo arreglo 2 no quemado
    for (int i = 0; i < q; i++)
    {
        cout<<"Segundo arreglo no Quemado: "<<array6[i]<<endl;
    }
    //Imprimiendo nuestro tercer arreglo 3 no quemado
    for (int i = 0; i < r; i++)
    {
        cout<<"Tercer arreglo no Quemado: "<<array7[i]<<endl;
    }
    //Imprimiendo nuestro cuarto arreglo 4 no quemado
    for (int i = 0; i < s; i++)
    {
        cout<<"Cuarto arreglo no Quemado: "<<array8[i]<<endl;
    }
    system("Pause");
    return 0;
}



    

