# include <iostream>
# include <conio.h>

using namespace std;

int main()
{
    int matriz[3][3],i,j;
    for(i=1;i<=3;i++){
    
                     for(j=1;j<=3;j++)
                     {
                     cout<<"\n ingrese un numero para la posicion"<<i<<"  ,  "<<j<<" ";
                     cin>>matriz[i][j];
                     }
                    
                                       for(i=1;i<=3;i++)
                                       {
                                       cout<<" \n " ;
                                       for(j=1;j<=3;j++){
                                       cout<<" \t " ;
                                       cout<<matriz [i] [j];
                                       }
                                                            
                                                            }                             
                                       
        getch();                               

}
}
                                                                 
                                       
                                       
                                       
                                       
                                       
                                       
                     
                     
                         
