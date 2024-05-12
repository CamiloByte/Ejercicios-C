#include<iostream.h>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main ()
{
    int v[90];
    int a;
    
    for(a=3; a<=90; a=a+3)
    {
    cout<<"\n"<<a;
    v[a]=a;
}

for (a=3; a<=90; a=a+3)
{
cout<<"\n"<<v[a];
}
    getch ();
}
