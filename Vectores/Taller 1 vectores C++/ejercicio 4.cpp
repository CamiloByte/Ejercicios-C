#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main ()
{
    float  v[7]; 
     float mayor=0;
    float menor=999999.1;
    float b;
    float posmenor=0,posmayor=0;
    int a;
    
    for (a=1; a<=7; a++)
    {
    
    cout<<"ingrese la temperatura del dia: " <<a<<": ";
    cin>>v[a];
    
    
    if( v[a]<menor)
    {
    menor=v[a];
    posmenor=a;
}
    if(v[a]> mayor)
    {
    mayor=v[a];
    posmayor=a;
}
}

    for(a=1; a<=7; a++)
    { 
cout<<"\n la temperatura de dia "<<a<<" fue: " <<v[a];
}

 
cout<<"\n \tla temperatura mas baja fue: "<<menor<<" grados centigrados y se registro el dia: "<<posmenor;
cout<<"\n \tla temperatura mas alta fue: "<<mayor<<" grados centigrados y se registro el dia: "<<posmayor;

    getch ();
}
    
