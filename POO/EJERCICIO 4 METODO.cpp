# include <iostream>
# include <conio.h>
using namespace std;

class Motos{
      public:
             char marca[10];
             char modelo[10];
             char color[10];
             };
             int main()
             {
             
             Motos r;
             cout<<"\n ingrese la marca de la moto ";
             cin>>r.marca;
             cout<<"\n ingrese el modelo de la moto ";
             cin>>r.modelo;
             cout<<"\n ingrese el color de la moto ";
             cin>>r.color;
             
             cout<<"\n la marca es "<<r.marca;
             cout<<"\n el modelo es "<<r.modelo;
             cout<<"\n el color es "<<r.color;
             
             getch();
             return 0;
             }
