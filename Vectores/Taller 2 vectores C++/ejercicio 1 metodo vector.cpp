# include<iostream>
# include<conio.h>

using namespace std;

class celular{
      public:
             void cargar();
             void mostrar();
             
             
             
             
             char marca[10];
             char color[10];
             char tipo[10];
             
             };
int main()
{
    int i;
    celular x; celular v[3];
    
    for(i=1; i<=3; i++)
    {
    v[i].cargar();
}   
 for(i=1; i<=3; i++)
    {
    v[i].mostrar();
}

getch ();
      }
    void celular :: cargar(){
                  
             cout<<"\n\n ingrese la marca del celular : ";
             cin>>marca;
             cout<<" ingrese el color del celular : ";
             cin>>color;
             cout<<" ingrese el tipo de celular : ";
             cin>>tipo;
             }
    void celular :: mostrar (){
             cout<<"\n\n la marca del celular es : "<<marca;
             cout<<"\n el color del celular es : "<<color;
             cout<<"\n el tipo de celular es : "<<tipo;
             }
             
