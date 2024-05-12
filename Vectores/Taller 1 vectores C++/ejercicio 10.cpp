#include<iostream.h>
#include<conio.h>

int main ()
{
    int resmenor=0;
    int resmayor=0;
    int v[20];
    int i;
        
    for (i=1; i<=4; i++)
    {
       cout<<"ingrese el peso de la res: "<<i<<" : ";
        cin>>v[i];
          
        if (v[i]<200)
        {
        resmenor=resmenor + 1;
        
        }
        if(v[i]>200)
        {
        resmayor=resmayor+1;
        }
        }
        
        
        for(i=1; i<=4; i++)
        {
                 cout<<"\n el peso de la res: "<<i<<"fue: "<<v[i];
                 }
                 
                 
                 cout<<" \n\n numero de reses menor a 200: "<<resmenor;
                  cout<<" \n\n numero de reses mayor a 200: "<<resmayor;
        getch ();
        }
        
