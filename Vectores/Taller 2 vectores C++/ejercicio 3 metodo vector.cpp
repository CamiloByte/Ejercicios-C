# include <iostream>
# include <conio.h>
using namespace std;

class motos{
      public:
             
             void cargar();
             void mostrar();
             
             char marca[10];
             char modelo[10];
             char color[10];
             };
             
             
             int main()
             {
                 int u;
                 
                 motos x; motos v[3];
                 
                 for (u=1;u<=3; u++)
                 {
                 
                 v[u].cargar();
                 }
                 
                 for (u=1;u<=3; u++)
                 {
                 v[u].mostrar();
                 }
             
                 
                 
                 getch();
                 }
                 
                 
             void motos :: cargar (){
             
             cout<<"\n\n grese la marca de la moto ";
             cin>>marca;
             cout<<"\n ingrese el modelo de la moto ";
             cin>>modelo;
             cout<<"\n ingrese el color de la moto ";
             cin>>color;
             }
             
             void motos :: mostrar (){
             cout<<"\n \n la marca es "<<marca;
             cout<<"\n el modelo es "<<modelo;
             cout<<"\n el color es "<<color;
}            
             
