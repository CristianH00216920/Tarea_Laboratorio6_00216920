#include "iostream"

using namespace std;


main()
{

 int a[200],i,con=0;
 int j, aux;

 
 for (i=1;i<=200; i++)
 {
     if (i%2!=0){
         a[con] = i;
         con++;
     } 
 }


 for (i=0;i<con;i++)
 {
     for (j=i+1;j<con;j++)
     {
         if (a[i]<a[j])
         {
             aux=a[i];
             a[i]=a[j];
             a[j]=aux;
         } 
     }
 }

cout<<"\n\nLa lista de los numeros: ";

for (i=0;i<con;i++)
{
    cout<<"\n"<< a[i];
}




 
}