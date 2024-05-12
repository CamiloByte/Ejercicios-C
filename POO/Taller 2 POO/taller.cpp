#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>

using namespace std;


class persona{
	public:
           void cargar();
           void mostrar();
           void sednombre();
           void sedapellido();
           void sedgrusan();
           void sedestatura();
           

           char nombre[10],apellido[10],grusan[10];
           float estatura;
};

int main() 
{
    char grusan[10];
    int a;
    persona x; persona v[5];
    
    for (a=1; a<=5; a++)
    {
    v[a].cargar();
    v[a].mostrar();
}
    x.sednombre();
    x.sedapellido();
     x.sedgrusan();
    x.sedestatura();
    x.mostrar();
    
    	getch();
}

void persona::cargar(){
	cout<<" \n\n ingrese el nombre del estudiante : ";
	cin>>nombre;
	cout<<" ingrese el apellido del estudiante ";
	cin>>apellido;
	cout<<"Ingrese el grupo sanguineo del estudiante : ";
	cin>>grusan;
	cout<<"ingrese la estatura del estudiante : ";
	cin>>estatura;

}
void persona :: mostrar() {
     cout<<"\n el nombre es :"<<nombre;
	 cout<<"\n el apellido es :"<<apellido;
	 cout<<"\n el grupo sanguineo es : "<<grusan;
	 cout<<"\n la estatura del estudiante es : "<<estatura;
	 
}

void persona ::sednombre(){
     
     cout<<"\n\n **///////////**";
     
     char nuevonombre[10];
     cout<<"\n\n\n ingrese el nuevo nombre : ";
     cin>>nuevonombre;
     strcpy(nombre,nuevonombre);
     }
     
void persona :: sedapellido(){
     char nuevoapellido[10];
     cout<<" ingrese el nuevo apellido : ";
     cin>>nuevoapellido;
     strcpy(apellido,nuevoapellido);
     }

void persona :: sedgrusan(){
     char nuevogrusan[10];
     cout<<" ingrese el nuevo grupo sanguineo : ";
     cin>>nuevogrusan;
     strcpy(grusan,nuevogrusan);
     }
void persona :: sedestatura() {
     float nuevaestatura;
     cout<<"ingrese la nueva estatura : ";
     cin>>nuevaestatura;
     estatura = nuevaestatura;
     }
     
     

     
     



