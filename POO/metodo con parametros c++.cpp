#include<iostream>
#include<conio.h>
#include <string.h>

using namespace std;
class Fraccionario{
	public:
	void cargar();
	void mostrar();
	void multiplicar(Fraccionario x,Fraccionario y);
	void divicion (Fraccionario x , Fraccionario y);
	void sumho (Fraccionario x,Fraccionario y);
	void sumhe  (Fraccionario x,Fraccionario y);
	void restahomo (Fraccionario x , Fraccionario y);
	void restahete (Fraccionario x , Fraccionario y);
	
	
		int numerador, denominador;
};
int main(){
	Fraccionario x,y,z,a,b,c,d,e;
	
	cout<<"fraccion 1 ";
	x.cargar();
	x.mostrar();
	
	cout<<"\n\n fraccion 2 ";
	y.cargar();
	y.mostrar();
	cout<<"\n\n multiplicar";
	z.multiplicar(x,y);
	z.mostrar();
	
	cout<<"\n\n divicion";
	a.divicion (x,y);
	a.mostrar ();
	
	cout<<"\n\n suma homogenea";
	b.sumho (x,y);
	b.mostrar();
	
	cout<<"\n\n suma heterogenea";
	c.sumhe(x,y);
	c.mostrar();
	
	cout<<"\n\n resta homogenea";
	d.restahomo (x,y);
	d.mostrar ();
	
	cout<<"\n\n resta homogenea";
	e.restahete(x,y);
	e.mostrar();
	
	
	
	getch ();
    }
	
void Fraccionario::cargar(){
	cout<<"\n Cargar numerador ";
	cin>>numerador;
	cout<<"\n Cargar denominador ";
	cin>>denominador;
}
void Fraccionario::mostrar(){
	cout<<"\n El numerador "<<numerador;
	cout<<"\n El denominador "<<denominador;
}

void Fraccionario::multiplicar(Fraccionario x, Fraccionario y)
{
numerador=x.numerador*y.numerador;
denominador=x.denominador*y.denominador;
}

void Fraccionario:: divicion(Fraccionario x, Fraccionario y)
{
     numerador=x.numerador*y.denominador;
     denominador=x.denominador*y.numerador;
     }
     
  
void Fraccionario::suma (Fraccionario x, Fraccionario y)
{
       if (x.denominador== y.denominador)
       {
     numerador= x.numerador+y.numerador;
     denominador=x.denominador;
     }
}
     
void Fraccionario:: suma (Fraccionario x, Fraccionario y)
{
      if (x.denominador != y.denominador)
       {
     numerador=(x.numerador*y.denominador) + (y.numerador*x.denominador);
     denominador= (x.denominador*y.denominador);
     }
}

void Fraccionario:: restahomo (Fraccionario x, Fraccionario y)
{
      if (x.denominador == y.denominador)
       {
     numerador= x.numerador - y.numerador;
     denominador=x.denominador;
     }
     
}

void Fraccionario:: restahete (Fraccionario x, Fraccionario y)
{
     if (x.denominador != y.denominador)
       {
      numerador=(x.numerador*y.denominador) - (y.numerador*x.denominador);
     denominador=x.denominador*y.denominador;
     }
   }
     
     
     
     


