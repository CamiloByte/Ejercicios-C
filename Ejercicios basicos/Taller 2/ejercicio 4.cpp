#include<iostream.h>
#include<conio.h>
int main ()
{
    int l, a, r, n, j, c, x;
    cout<<"1 para cuadrado 2 para rectangulo";
    cin >>a;
    if (a<2) 
    {
    cout<<"ingrese el lado del cuadrado: ";
    cin>>l;
    r=(l*l);
    n=(2*l+2*l);
    cout<<"el area del cuadrado es: " <<r;
    cout<<"el perimetro del cuadrado es: " <<n;
}
    else {
    cout<<"ingrese la base del rectangulo: ";
    cin>>j;
    cout<<"ingrese la altura del rectangulo: ";
    cin>>c;
    r=(j*c);
    cout<<"area del rectangulo " <<r;
    x=2*c+2*j;
    cout<<"el perimetro de un rectangulo es :" <<x;
}
getch () ;
}
    
    
    
