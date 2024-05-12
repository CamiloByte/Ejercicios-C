# include <iostream>
# include <conio.h>
using namespace std;
class Computadores{
      public:
             char marca[10];
             char peso[10];
             char color[10];
             };
             int main()
             {
                 Computadores a;
                 cout<<"\n ingrese la marca del computador ";
                 cin>>a.marca;
                 cout<<"\n ingrese el peso del computador ";
                 cin>>a.peso;
                 cout<<"\n ingrese el color del computador ";
                 cin>>a.color; 
                 
                 cout<<"\n la marca es "<<a.marca;
                 cout<<"\n el peso del computador es "<<a.peso;
                 cout<<"\n el color del computador es "<<a.color;
                 
                 getch();
                 return 0;
                 }
