#include "iostream"
using namespace std;
int main()
{
    //Declaramos las variables a utilizar en el programa
    int opc, opcDeposito, opcRetiro, opcSaldo;
    float deposito, retiro, saldo_en_cuenta = 100;

    //Menu principal
    do
{
    cout<<"\nBienvenido/a a su banco de preferencia es un gusto atenderle"<<endl;
    cout<<"\nQue gestion administrativa desea realizar en su cuenta?"<<endl;
    cout<<"1. Depositar dinero a la cuenta. "<<endl;
    cout<<"2. Retirar dinero de la cuenta. "<<endl;
    cout<<"3. Mostrar su saldo disponible en la cuenta. "<<endl;
    cout<<"4. Salir del sistema. "<<endl;
    cout<<"Que gestion administrativa desea realizar en su cuenta"<<endl;
    cin>>opc;

     //Entrando al menu principal del cajero
    switch (opc)
    {
    case 1: 

    do
    {
        //Menu opcion deposito
        cout<<"\nQue gestion administrativa desea realizar en su cuenta?\n"<<endl;
        cout<<"1. Depositar dinero a la cuenta."<<endl;
        cout<<"2. Salir del sistema."<<endl;
        cin>>opcDeposito;
        switch (opcDeposito)
        {
        case 1:
        cout<<"Digite la cantidad a depositar en su cuenta: "<<endl;
        cin>>deposito;
        saldo_en_cuenta += deposito; 
        cout<<"\nSaldo disponible en la cuenta: "<<saldo_en_cuenta;
            break;

        case 2:
        break;

        default:
        cout<<"Ingrese un dato valido al sistema"<<endl;
        break;
        }
    } while (opcDeposito != 2);
      break;
        case 2:
        do
        {
            //Menu opcion retiro
        cout<<"\nQue gestion administrativa desea realizar en su cuenta?\n"<<endl;
        cout<<"1. Retirar dinero de la cuenta."<<endl;
        cout<<"2. Salir del sistema."<<endl;
        cin>>opcRetiro;
        switch (opcRetiro)
        {
        case 1:
        cout<<"Digite la cantidad de dinero a retirar de su cuenta: ";
        cin>>retiro;

        if (retiro > saldo_en_cuenta) 
        {
            cout<<"Saldo insuficiente en su cuenta, por favor intentelo de nuevo";
        }
        else
        {
            saldo_en_cuenta -= retiro;
            cout<<"\nSaldo disponible en la cuenta : "<<saldo_en_cuenta;
            break;
        }
        break;

        case 2:
        break;
        default:
        cout<<"Ingrese un dato valido al sistema"<<endl;
        break;
        }
        } while (opcRetiro != 2);
        break;

        case 3:
        do
        {
        cout<<"\nQue gestion administrativa desea realizar en su cuenta?\n"<<endl;
        cout<<"1. Mostrar saldo disponible en la cuenta."<<endl;
        cout<<"2. Salir del sistema."<<endl;
        cin>>opcSaldo;
        switch (opcSaldo)
        {
        case 1:
        cout<<"Saldo disponible en la cuenta: "<<saldo_en_cuenta<<endl;
        break;

        case 2:
        break;

        default:
        cout<<"Ingrese un dato valido al sistema"<<endl;
        break;
        }
        } while (opcSaldo != 2);
        break;

        case 4:
        break;
        default:
        cout<<"Ingrese un dato valido al sistema"<<endl;
        break;
        }
        } while (opc !=4);
        
        return 0;
}
