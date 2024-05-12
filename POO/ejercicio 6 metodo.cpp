# include <iostream>
# include <conio.h>
using namespace std;
class Zapatos {
      public:
             void ingresardatos();
             void imprimirdatos();
             char color[10];
             int talla;
             char clase[10];
             };
             int main()
             {
             Zapatos c,m,d;
             c.ingresardatos();
             c.imprimirdatos();
             m.ingresardatos();
             m.imprimirdatos();
             d.ingresardatos();
             d.imprimirdatos();
             
             getch();
             return 0;
             
             cout<<"ingrese el color de los zapatos ";
             cin>>z.color;
             cout<<"ingrese la talla de los zapatos ";
             cin>>z.talla;
             cout<<"ingrese la clase de zapatos ";
             cin>>z.clase;
             
             cout<<"\n el color de los zapatos es "<<z.color;
             cout<<"\n la talla de los zapatos es "<<z.talla;
             cout<<"\n la clase de zapatos es "<<z.clase;
             
             getch();
             return 0;
             }
             
