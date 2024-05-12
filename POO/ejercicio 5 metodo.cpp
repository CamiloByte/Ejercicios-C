# include <iostream>
# include <conio.h>

using namespace std;
class Balones{
      public:
             char color[10];
             char clase[10]; 
             float peso;
             };
             int main()
             { 
              Balones p;
              cout<<"ingrese el color del balon ";
              cin>>p.color;
              cout<<"ingrese la clase de balon ";
              cin>>p.clase;
              cout<<"ingrese el peso ";
              cin>>p.peso;  
              
              cout<<"\n el color del balon es "<<p.color;
              cout<<"\n la clase del balon es "<<p.clase;
              cout<<"\n el peso del balon es "<<p.peso;
              
              getch();
              return 0;
              }
             
             
