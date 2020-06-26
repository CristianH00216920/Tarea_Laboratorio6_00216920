#include "iostream"
#include "stdlib.h"
#include "stdio.h"

using namespace std;

int num,*n,i,con,promedio,acum;

void pedisNumero()
{
    cout<<"Digite la cantidad de numeros: ";
    cin>>num;

    n = new int[num]; //arreglo

    for (i=0;i<num;i++)
    {
        cout << "Ingrese un numero: ";
        cin>>n[i];

        acum+=n[i];
        con++;
    }
    promedio = (acum/con);

    cout<<"\n\nEl promedio de los numeros es: "<<promedio;
}

main()
{
    pedisNumero();
    
    delete[] n;

    cout<<"\n\n";
    system ("PAUSE");
   return 0;
}




