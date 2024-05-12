# include <iostream>
# include <conio.h>

using namespace std;

class zapatos {
      public:
             void ingresardatos();
             void imprimirdatos();
             
             char color[10];
             int talla;
             char clase[10];
             
             };
             
             int main()
             {
                 int i;
                 
             zapatos c;  zapatos v[3];
             
             for(i=1; i<=3; i++)
             {
             v[i].ingresardatos();
             }
              for(i=1; i<=3; i++)
             {
             v[i].imprimirdatos();
}
             
             getch();
             }
             
             
             void  zapatos:: ingresardatos (){
                   
             cout<<"\n\ningrese el color de los zapatos ";
             cin>>color;
             cout<<"ingrese la talla de los zapatos ";
             cin>>talla;
             cout<<"ingrese la clase de zapatos ";
             cin>>clase;
             }
             void zapatos ::imprimirdatos(){
                  
             cout<<"\n\n el color de los zapatos es "<<color;
             cout<<"\n la talla de los zapatos es "<<talla;
             cout<<"\n la clase de zapatos es "<<clase;
             }
