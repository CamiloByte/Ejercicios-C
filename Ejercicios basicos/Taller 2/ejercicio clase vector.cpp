#include<iostream.h>
#include<conio.h>
using namespace std;
int main()
{
    int edades [5];
    int a= 0, s= 0, p= 0;
    for(a=1; a<=5; a++)
    {
    cin>>edades[a];
    s = s+edades[a];
}
p= s/(a-1);

for (a=1; a<=5; a++)
{
    cout<<edades[a];
    cout<<"\n";
}
cout<<"el promedio es : " <<p;
cout<<"\n la suma es: " <<s;
getch ();
}
    
    
