#include<iostream.h>
#include<conio.h>

int main ()
{
    int v[20];
    int a,b,c,numero;
    c=0;
    
    cout<<"ingrese el numero de pociciones que desea trabajar: ";
    cin>>b;
    for (a=1; a<=b; a++)
    {
        cout<<"ingrese el valor para la pocicion: " <<a<<": ";
        cin>>v[a];
        }
        for (a=1; a<=b; a++)
        {
            cout<<"\n pocicio: "<<a<<": "<<v[a];
            }
            getch ();
            }
        
