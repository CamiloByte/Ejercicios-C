#include<iostream.h>
#include<conio.h>

using namespace std;

class torta
{
      public:
             void cargar();
             void mostrar ();
             
             
      char tipo[10];
      char ingrpri[10];
      float cantidad;
      
};

int main()
{
int i;
torta v[3];

for(i=1; i<=3; i++)
{
         v[i].cargar ();
         }
         for(i=1; i<=3; i++)
{
         v[i].mostrar();
         }

getch();
}

void torta :: cargar(){
     
cout<<"\n\n ingrese el tipo de torta: ";
cin>>tipo;
cout<<"\ningrese el ingrediente principal : ;";
cin>>ingrpri;
cout<<"\ningrese la cantidad de porciones : ";
cin>>cantidad;
}
void torta :: mostrar(){
     {
cout<<"\n\n eel tipo de torta es : "<<tipo;
cout<<"\n el ingrediente principal es :"<<ingrpri;
cout<<"\n la cantidad de porciones es :"<<cantidad;
}
getch();
}
