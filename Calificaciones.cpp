
#include "iostream"
#include "stdlib.h"
#include "string"
using namespace std;
int main()
{
float N1, N2, N3, N4, N5, P;

cout<<"PROGRAMA QUE CALCULA EL PROMEDIO DE 5 CALIFICACIONES"<<endl;
cout<<"\n"<<endl;
cout<<"INGRESE LA PRIMERA NOTA"<<endl;
cin>> N1;
cout << "INGRESE LA SEGUNDA NOTA"<<endl;
cin>> N2;
cout<< "INGRESE LA TERCER NOTA"<<endl;
cin>> N3;
cout<< "INGRESE LA CUARTA NOTA"<<endl;
cin >> N4;
cout<< "INGRESE LA QUINTA NOTA"<<endl;
cin>> N5;

P = (N1 + N2 + N3 + N4 + N5) / 5;

cout<<"\n"<<endl;
cout<<"EL PROMEDIO OBTENIDO ES: "<<P<<endl;

system ("pause");
return 0;

}
