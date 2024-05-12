#include<iostream.h>
#include<conio.h>
int main (){
    int a, b, c;
    cout<<"ingrese la tabla de multiplicar que desea saber: ";
    cin>>c;
    a=0;
    b=0;
    for(a=1; a<=10; a++)
{
    b=c*a;
    cout<<"\n la tabla de multiplicar  x"<<a<<"="<<b;
}
getch ();
}

    
