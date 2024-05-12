#include<iostream.h>
#include<conio.h>

int main ()
{
    int resmenor=0;
    int resmayor=0;
    int v[20];
    int i,s1=0,s2=0;
    int promenor=0, promayor=0;
        
    for (i=1; i<=20; i++)
    {
       cout<<"ingrese el peso de la res: "<<i<<" : ";
        cin>>v[i];
          
        if (v[i]<200)
        {
        resmenor=resmenor + 1;
        s1=s1+v[i];
        promenor=s1/resmenor;
        }
        if(v[i]>200)
        {
        resmayor=resmayor+1;
        s2=s2+v[i];
        promayor=s2/resmayor;
        }
        }
        
        
        for(i=1; i<=20; i++)
        {
                 cout<<"\n el peso de la res: "<<i<<"fue: "<<v[i];
                 }
                 
                 
                 cout<<" \n\n numero de reses menor a 200: "<<resmenor;
                  cout<<" \n\n numero de reses mayor a 200: "<<resmayor;
                  
                  cout<<"\n\n promedio de reses con peso menor a 200:   "<<promenor;
                  cout<<"\n\n promedio de reses con el peso mayor a 200:   " <<promayor;
                  
                  cout<<"\n suma"<<s1<<": "<<s2;
        getch ();
        }
