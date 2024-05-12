# include <iostream>
# include <conio.h> 
using namespace std;
class Casas{
      public:
             void ingresardatos();
             void imprimirdatos();
             
             char color[10];
             char direccion[10];
              char    precio [10];
             };
             
             
             int main(){
             Casas v[3];
             int i;
             for(i=1;i<=3;i++){
                               
             
             v[i].ingresardatos();
             
             }
             ;
             for(i=1;i<=3;i++)
             {v[i].imprimirdatos();
                              }
             getch();
             return 0;
             }
             void Casas::ingresardatos(){
                 
                 cout<<"\n\n ingrese el color de la casa : ";
                 cin>>color;
                 cout<<" ingrese la direccion de la casa : ";
                 cin>>direccion;
                 cout<<" ingrese el precio de la casa : ";
                 cin>>precio;}
              void Casas::imprimirdatos() {  
                   
                 cout<<"\n\n el color de la casa es : "<<color;
                 cout<<"\n la direccion de la casa es : "<<direccion;
                 cout<<"\n el precio de la casa es : "<<precio;
                 }
