#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main ()
{
    float v[6];
    int i;
    float pronotas=0;
    float s= 0;
    
    for(i=1; i<=6; i++)
    {
             cout<<"ingrese las notas del estudiante: "<<i;
             cin>>v[i];
             s= s+v[i];
             pronotas=s/6;
             }
             
             cout<<"el promedio del estudiante fue: "<<pronotas;
              cout<<"\n suma: "<<s;
             getch ();
             }
