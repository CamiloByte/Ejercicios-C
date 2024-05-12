#include<iostream.h>
#include<conio.h>

int main ()
{
    int v[5],i,aux,j,num;
     aux=0;
     
    for(i=1; i<=5; i++)
    {
             cout<<"pocicion: "<<i<<": ";
             cin>>v[i];      
             }
    for (j=1; j<=5; j++)
    {
       
    for(i=1; i<=4; i++)
    {
         
    if (v[i]<=v[i+1])
    {
    aux= v[i];
    v[i]=v[i+1];
    v[i+1]=aux;
}
}
}

for (i=1; i<=5; i++)
{
cout<<"\n"<<v[i];
}
    getch ();
}
    
    
