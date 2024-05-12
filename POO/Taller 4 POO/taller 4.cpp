#include "iostream"
#include <conio.h>
using namespace std;

class Vehiculo
    {
        public:
            
            char placa[10],color[10], chasis[20];
            float cilindrada;
            int modelo;
            
            void cargar();
            void mostrar();
            
        
    };
    
    
    class Motocicleta:public Vehiculo
        {
                             
        public:
        char tiempos[3];
        char tipoMoto[15];
          
          void cargarmoto();
         void mostrarmoto();
       };
       
   class taxi:public Vehiculo
   {
         public:
     char numEmpresa[10],nombreEmpresa[10];
         
         void cargartaxi();
         void mostrartaxi();
       
    };
    
    class Particular:public Vehiculo
    {
          public:
          int Nblin;
          char gama[10];
       
       void cargarparticular();
         void mostrarparticular(); 
    };
    
    
    int main()
    {
        Motocicleta m;
        taxi t;
        Particular p;
        
        cout<<"\n\n'Este es el objeto motocicleta ";
        m.cargarmoto();
        
        
        cout<<"\n\nEste es el objeto taxi ";
        t.cargartaxi();
        
        
        cout<<"\n\nEste es el objeto particular ";
        p.cargarparticular();    
       
       cout<<"\n\nEste es el objeto motocicleta ";
        m.mostrarmoto();
        
        
        cout<<"\n\nEste es el objeto taxi ";
        t.mostrartaxi();
        
        cout<<"\n\nEste es el objeto particular ";
        p.mostrarparticular();    
            
        
        
        
        
    }

void Vehiculo::cargar()
{
    cout<<"\nIngrese la placa del vehiculo: ";
    cin>>placa;
    cout<<"\nIngrese la cilindrada del vehiculo: ";
    cin>>cilindrada;
    cout<<"\nIngrese el color del vehiculo: ";
    cin>>color;
    cout<<"\nIngrese el numero de chasis del vehiculo: ";
    cin>>chasis;
    cout<<"\nIngrese el año modelo del vehiculo: ";
    cin>>modelo;
}

void Vehiculo::mostrar()
{
    cout<<"\nLa placa del vehiculo es: "<<placa;
    cout<<"\nLa cilindrada del vehiculo es: "<<cilindrada;
    cout<<"\nEl color del vehiculo es: "<<color;
    cout<<"\nEl numero de chasis del vehiculo es: "<<chasis;
    cout<<"\nEl año modelo del vehiculo es: "<<modelo;
    
}


void taxi :: cargartaxi()
{
     cout<<"\nIngrese la placa del taxi: ";
    cin>>placa;
    cout<<"\nIngrese la cilindrada del taxi: ";
    cin>>cilindrada;
    cout<<"\nIngrese el color del taxi: ";
    cin>>color;
    cout<<"\nIngrese el numero de chasis del vehiculo: ";
    cin>>chasis;
    cout<<"\nIngrese el año modelo del vehiculo: ";
    cin>>modelo;
    cout<<"\ningrese el numero de la empresa :";
    cin>>numEmpresa;
    cout<<"\ningrese el nombre de la empresa :";
    cin>>nombreEmpresa;
}

void taxi :: mostrartaxi ()
{
   cout<<"\nLa placa del taxi es: "<<placa;
    cout<<"\nLa cilindrada del taxi es: "<<cilindrada;
    cout<<"\nEl color del taxi es: "<<color;
    cout<<"\nEl numero de chasis del vehiculo es: "<<chasis;
    cout<<"\nEl año modelo del vehiculo es: "<<modelo;
    cout<<"\n El numero de la empresa es :"<<numEmpresa;
    cout<<"\n El nombre de la empresa es: "<<nombreEmpresa;  
}

void Motocicleta :: cargarmoto()
{
 cout<<"\nIngrese la placa de la moto: ";
    cin>>placa;
    cout<<"\nIngrese la cilindrada de la moto: ";
    cin>>cilindrada;
    cout<<"\nIngrese el color de la moto: ";
    cin>>color;
    cout<<"\nIngrese el numero de chasis de la moto: ";
    cin>>chasis;
    cout<<"\nIngrese el año modelo de la moto: ";
    cin>>modelo;
    cout<<"\ningrese los tiempos de la moto:";
    cin>>tiempos;
    cout<<"\ningrese el tipó de moto :";
    cin>>tipoMoto;
}

void Motocicleta :: mostrarmoto()
{
 cout<<"\nLa placa de la moto es: "<<placa;
    cout<<"\nLa cilindrada de lam oto  es: "<<cilindrada;
    cout<<"\nEl color de la moto es: "<<color;
    cout<<"\nEl numero de chasis de la moto es: "<<chasis;
    cout<<"\nEl año modelo de la moto es: "<<modelo;
    cout<<"\n el tiempo de la moto es :"<<tiempos;
    cout<<"\n El tipo de moto es : "<<tipoMoto; 
}

 void Particular :: cargarparticular ()
 {
     cout<<"\nIngrese la placa del particular: ";
    cin>>placa;
    cout<<"\nIngrese la cilindrada del particular: ";
    cin>>cilindrada;
    cout<<"\nIngrese el color del particular: ";
    cin>>color;
    cout<<"\nIngrese el numero de chasis del particular: ";
    cin>>chasis;
    cout<<"\nIngrese el año modelo del particular: ";
    cin>>modelo;
    cout<<"\ningrese el numero de blindaje :";
    cin>>Nblin;
    cout<<"\ningrese la gama :";
    cin>>gama; 
}
     
void Particular :: mostrarparticular ()
{
     cout<<"\nLa placa del vehiculo es: "<<placa;
    cout<<"\nLa cilindrada del vehiculo es: "<<cilindrada;
    cout<<"\nEl color del vehiculo es: "<<color;
    cout<<"\nEl numero de chasis del vehiculo es: "<<chasis;
    cout<<"\nEl año modelo del vehiculo es: "<<modelo;
    cout<<"\n El blindaje del vehiculo es :"<<Nblin;
    cout<<"\n la gama del vehiculo es :"<<gama;
}
