#include<iostream.h>
#include<conio.h>
int main (){
    int a, b;
    a=0;
    b=0;
    while(b<999){
                cout<<"ingrese los numeros: ";
    cin>>b;
    if(b%5==0)
    a=a+1;
}
    cout<<"los numeros divisibles por 5 que se ingresaron fueron: "<<a;
    getch ();
}    
