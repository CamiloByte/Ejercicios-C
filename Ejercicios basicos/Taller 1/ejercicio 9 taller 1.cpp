#include<iostream.h>
#include<conio.h>
int main ()
{
    float a, b, c, d, g;
    
        cout<< "\n ingrese el valor del vehiculo: ";
        cin >> a;
        cout<<"\n ingrese el valor del descuento: ";
        cin >> b;
        cout <<"\n el valor del vehiculo sin descuento es: " << a;
        c=b/100;
        d=c*a;
        cout<< "\n el valor del del descuento es: "<< d;
        g=a-d;
        cout<<"\n el valor del vehiculo con el descuento es: "<< g;
        
        getch ();
        }
        
        
        
