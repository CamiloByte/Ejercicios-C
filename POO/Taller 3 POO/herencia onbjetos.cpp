#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


class persona{
	public:
           char nombre[10];
           float edad;
           float estatura; 
           
           
           persona(){estatura=170;edad=30; strcpy(nombre,"camilo"); };
           
           
           float getedad()
           {return edad;}
           
           float getestatura()
           {return estatura;}
           
           char getnombre()
           { return nombre[10];
           }
           
          
           
           
          
           
           
         
           
           void mostrarpersona();
           };
           
 class estudiante : public persona{
       public :
              int curso;
              
              estudiante (){curso=9; estatura=140; edad=15;};
              
              float getedadestudiante()
              { return edad; }
              
              float getestaturaestudiante ()
              { return estatura; }
              
              void mostrarestudiante ();
              };
              
       
       int main ()
       {
           char nombre[10];
           persona x;
           estudiante y;
           
           cout<<"\n el nombre de la persona es :"<<x.getnombre();
           cout<<"\n\nla edad de la persona es : "<<x.getedad();
           cout<<"\nla estatura de la persona es : "<<x.getestatura();
       
          
           cout<<"\n elnombre del estudiante es: "<<y.getnombre();
           cout<<"\n\nla edad del estudiante es : "<<y.getedadestudiante();
           cout<<"\nla estatura del estudiante es : "<<y.getestaturaestudiante();
           cout<<"\n el curso del estudiante es : "<<y.curso;
           
           cout<<"\n\nla imprecion de los 2 objetos: ";
           
            x.getnombre();
           x.mostrarpersona(); 
           x.getnombre();
           y.mostrarestudiante();
         
           
           getch();
           }
           
           void persona :: mostrarpersona ()
           {
                cout<<"\n\n\n la edad de la persona es : "<<edad;
                cout<<"\n la estatura de la persona es : "<<estatura;
                }
           
           void estudiante :: mostrarestudiante ()
           {
                cout<<"'n\n la edad del estudiante es : "<<edad;
                cout<<"\n la estatura del estudiante es: "<<estatura;
                cout<<"\n el grado del estudiante es : "<<curso;
                }
              
       
              
           
