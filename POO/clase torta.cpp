#include<iostream.h>
#include<conio.h>

using namespace std;

class torta
{
      public:
             
      char tipo[10];
      char ingrpri[10];
      int cantidad;
      
};

int main()
{

torta x;

cout<<"ingrese el tipo de torta: ";
cin>>x.tipo;
cout<<"ingrese el ingrediente principal :";
cin>>x.ingrpri;
cout<<"ingrese la cantidad de porciones :";
cin>>x.cantidad;

cout<<"\n el tipo de torta es :"<<x.tipo;
cout<<"\n el ingrediente principal es :"<<x.ingrpri;
cout<<"\n la cantidad de porciones es :"<<x.cantidad;

getch();
}
