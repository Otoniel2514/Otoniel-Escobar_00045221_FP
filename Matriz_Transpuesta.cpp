//Matriz transpuesta
#include "iostream"
#include "conio.h"
using namespace std;


void program()
{
    int matriz[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
          {
            //Llenando la matriz
            cout<<"Digite un numero["<<i<<"]["<<j<<"]";
            cin>>matriz[i][j];
          }
        }
        //Mostrando matriz original
        cout<<"Matriz original"<<endl;
        for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
        {
            cout<<matriz[i][j];
        }
            cout<<"\n";
        }
        //Mostrando matriz transpuesta
        cout<<"Matriz transpuesta"<<endl;
        for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
          {
            cout<<matriz[j][i];
          }
        }
        getch();    
    
}
int main()
{
    program();
    return 0;
}