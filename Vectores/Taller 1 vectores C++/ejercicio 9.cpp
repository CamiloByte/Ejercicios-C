#include<iostream.h>
#include<conio.h>

int main ()
{
    int v[4];
    int s=0,i;
    
    for (i=1; i<=4; i++)
    {
        cout<<"ingrese las edades: "<<i<<": ";
        cin>>v[i];
        s=s+v[i];
        }
    
    for (i=1; i<=4; i++)
    {
        cout<<"\n las edades fueron: "<<i<<": "<<v[i];
        }
        cout<<"\n la suma de las edades fue: "<<": "<<s;
          getch ();
        }
