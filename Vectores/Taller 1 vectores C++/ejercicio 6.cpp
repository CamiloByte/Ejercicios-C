#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main ()
{
    int v[20];
    int a;
    
    for(a=2; a<=20; a=a+2)
    {
    cout<<"\n"<<a;
    v[a]=a;
}

for (a=2; a<=20; a=a+2)
{
cout<<"\n \n"<<v[a];
}
    getch ();
}
