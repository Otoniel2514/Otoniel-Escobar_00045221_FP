
#include "iostream"
#include "stdlib.h"
#include "string"
using namespace std;
int main()
{
float N1, N2, N3, N4, N5, N6, P, PF;
string N;

cout << "INGRESE SU NOMBRE" << endl;
getline(cin, N);
cout << "\n" << endl;
cout << "INGRESE LA PRIMERA NOTA" << endl;
cin >> N1;
cout << "INGRESE LA SEGUNDA NOTA" << endl;
cin >> N2;
cout << "INGRESE LA TERCER NOTA" << endl;
cin >> N3;
cout << "INGRESE LA CUARTA NOTA" << endl;
cin >> N4;
cout << "INGRESE LA QUINTA NOTA" << endl;
cin >> N5;
cout << "INGRESE LA SEXTA NOTA" << endl;
cin >> N6;

P = (N1 + N2 + N3 + N4 + N5 + N6) / 6;

cout << "ESTUDIANTE:" << N << endl;
cout << "\n" << endl;
cout << "PROMEDIO OBTENIDO ES:" << P << endl;

P = (N1 + N2 + N3 + N4 + N5 + N6) * 0.70;

system ("pause");
return 0;

}
