#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main ()
{
    int v[70];
    int a;
    
    for(a=5; a<=70; a=a+5)
    {
    cout<<"\n"<<a;
    v[a]=a;
}


for (a=5; a<=70; a=a+5)
{
    
cout<<"\n \t"<<v[a];
}
    getch ();
}
