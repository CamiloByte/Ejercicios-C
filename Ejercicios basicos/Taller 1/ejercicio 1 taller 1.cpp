#include<iostream.h>
#include<conio.h>
int main()
{
    int s1, s2, sf;
cout << "ingrese el primer suelto: ";
cin >> s1;
cout <<"ingrese el segundo sueldo: ";
cin >> s2;
if (s1>s2)
   {
          cout << "el sueldo mayor: "<< s1;
          sf=s1-s2;
          cout <<"\n el faltante al sueldo es: " <<sf;
}
               if (s1<s2)
               {
          cout <<"el sueldo mayor es: " << s2;
          sf=s2-s1;
          cout <<"\n el faltante al sueldo es: " <<sf;
          }
          getch();
          }     
