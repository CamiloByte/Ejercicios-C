#include<iostream.h>
#include<conio.h>
int main ()
{
 int a, c, v, n, m;
 cout<<"ingrese el operador 1 para comcel 2 para otros operadores: ";
 cin>>a;
 if (a<2)
 {
 cout<<"\n comcel";
 cout<<"\n ingrese los minutos a cobrar: " ;
 cin>>c;
 v=c*150;
 cout<<"total a pagar"<<v;
}
 else
 {
 cout<<"\n otro operador" ;
 cout<<"\n  minitos a cobrar";
 cin>>n;
 m=n*200;
 cout<<"\n total a pagar"<<m;
}
 getch ();
}

