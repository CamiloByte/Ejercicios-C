#include<iostream.h>
#include<conio.h>

using namespace std;

int main()
{
    int a;
    char nombre[10];
    
    cout<<"ingrese su nombre : ";
    gets(nombre);
    cout<<"\n ingrese su año de nacimiento";
    cin>>a;
    a=2016-a;
    cout<<"tienes "<<a<<" años";
    cout<<"\n hola "<<nombre<<" bienvenido al mundo de la programacion";
    
    getch ();
}
