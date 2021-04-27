//Serie fibonacci -> 1 1 2 3 5 8 13 21 34 55 89.......n
#include "iostream"
#include "stdlib.h"
using namespace std;
int main()
{
    int n, p=0, q=1, r=1;
    cout<<"Digite el numero de elementos que desea en su serie de Fibonacci: "<<endl;
    cin>>n;
    cout<<"\n";
    cout<<"1. ";

    for (int i = 0; i < n; i++)
    {
        r = p + q; 
        cout<<r<<" ";
        p = q;
        q = r;
    }
    cout<<"\n";
    system("pause");
    return 0;

}
