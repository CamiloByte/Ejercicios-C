# include <iostream>
# include <conio.h>

using namespace std;
class balones{
      public:
             void cargar ();
             void mostrar ();
             
             
             char color[10];
             char clase[10]; 
             float peso;
             };
             
             
             
             int main()
             { 
              int i:
               
               balones x; balones v[3];
               
               for (i=1 i<=3 i++)
               {
                   v[i].cargar ();
                   }
                    for (i=1 i<=3 i++)
               {
                   v[i].mostrar();  
                   } 
             
                 
                 getc ();
                 }
                 
                 
void balones :: cargar(){
     
              cout<<"\n\n ingrese el color del balon : ";
              cin>>color;
              cout<<"ingrese la clase de balon : ";
              cin>>clase;
              cout<<"ingrese el peso : ";
              cin>>peso;  
              }
void balones :: mostrar (){
     
              cout<<"\n\n el color del balon es : "<<color;
              cout<<"\n la clase del balon es : "<<clase;
              cout<<"\n el peso del balon es : "<<peso;
              }
             
             
