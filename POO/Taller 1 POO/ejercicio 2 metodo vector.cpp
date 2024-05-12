# include <iostream>
# include <conio.h>
using namespace std;
class computadores{
      public:
             
             void cargar();
             void mostrar();

             char marca[10];
             char peso[10];
             char color[10];
             };
             
             
   int main()            
   {
       int i;
       
             computadores x;     computadores v[3];
             
             
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
                  
   void     computadores :: cargar(){
   
                 cout<<"\n\n ingrese la marca del computador : ";
                 cin>>marca;
                 cout<<" ingrese el peso del computador : ";
                 cin>>peso;
                 cout<<" ingrese el color del computador : ";
                 cin>>color; 
                 }
                 
  void computadores :: mostrar (){
                 cout<<"\n\n la marca es : "<<marca;
                 cout<<"\n el peso del computador es : "<<peso;
                 cout<<"\n el color del computador es : "<<color;
                 }
