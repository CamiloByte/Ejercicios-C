#include<iostream.h>
#include<conio.h>
int main (){
    int a, b, c, d;
    a=0;
    b=0;
    c=0;
    d=0;
    
    for( a=1; a<=15; a++)
    {
             cout<<"ingrese la edad: ";
             cin>>b;
             if(b>=18)
             {c=c+1;}
             else
             {d=d+1;}
    } 
             cout<<"\n personas mayores de edad
              "<<c <<"\n personas menores de edad: "<<d;     
    getch ();
}
             
    
