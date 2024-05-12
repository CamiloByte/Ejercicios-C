#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main ()
{
    int pesores,i,v[15];
    int s=0;
    float porcarne=0.1;
    
    
    for(i=1; i<=4; i++)
    {
             cout<<"ingrese el peso de las vacas"<<i<<": ";
             cin>>v[i];
             s=s+v[i];
             porcarne=(s*0.60);
             }
             
             cout<<"porcentaje de carne: "<<porcarne;
             cout<<"\n suma: "<<s;
             getch ();
             }
