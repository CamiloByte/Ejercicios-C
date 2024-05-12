#include<iostream.h>
#include<conio.h>
int main (){
    int a, b;
    a=0;
    b=0;
    while(b<999){
    cout<<"ingrese los numeros: ";
    cin>>b;
    if(b%7==0)
     {  ///   divisible por 7
        if(b==7){a=a+1;}
     }  
     else{ /// divisible por 5
         if(b%5==0)
         { 
            if(b==5){a=a+1;}
         }   
         else{//// divisible por 3
           if(b%3==0)
           { 
            if(b==3){a=a+1;}
           } 
           else{ //// divisible por 2
               if (b%2==0)
                { 
                   if(b==2){a=a+1;}
                }  
                      else{a=a+1;}// fin div 2 
                } // fin div 3 
               
             } //fin div 5
            
           }// div 7
         
         
   }  /// CIERRA EL WHILE
 cout<<"los numeros primos que se ingresaron fueron: "<<a;
getch ();
}    
