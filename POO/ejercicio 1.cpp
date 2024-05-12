#include<iostream.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

class telefono
{
      public:
             
      char marca[10];
      char teclado[10];
      int lanzamiento;
      float peso;
};

int main()
{
    telefono v;
    
    cout<<"ingrese el año de lanzamiento :";
    cin>>v.lanzamiento;
    cout<<"ingrese la marca del telefono : ";
    cin>>v.marca;
    cout<<" ingrese el teclado del telefono : ";
    cin>>v.teclado;
    
    
    cout<<"\n la marca del telefono es: "<<v.marca;
    cout<<"\n el teclado del telefono es :"<<v.teclado;
    cout<<"\n el año de lanzamiento es : "<<v.lanzamiento;
    
    getch ();
}
    
    
