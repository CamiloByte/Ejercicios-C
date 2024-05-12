#include<iostream.h>
#include<conio.h>

int main ()
{
    int v[5], numero,i,s,p;
    s=0;
    p=0;
    for (i=1; i<=5; i++)
    {
        cout<<"pocicion "<<i<<": ";
        cin>>numero;
        v[i]=numero;
        s=s+numero;
        }
        p=s/(i-1);
        for (i=1; i<=5; i++)
        {
            cout<<"\n pocicion: "<<i<<": "<<v[i];
            
            }
            cout<<"\n la suma es: "<<s;
            cout<<"\n el promedio es: "<<p;
        getch ();
        }
