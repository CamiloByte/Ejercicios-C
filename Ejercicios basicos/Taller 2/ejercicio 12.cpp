#include<iostream.h>
#include<conio.h>
int main (){
    int a, l, b;
    a=1;
    cout<<"ingrese la cantidad de numeros que desea multiplicar";
    cin>>b;
    
    for (int i=1; i<=b; i++)
{
    a=i*a;
    cout<<"\n multiplicacion: "<<a;
}
getch ();
      }
