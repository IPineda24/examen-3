
#include<iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){

int n = 1 ;
while (n !=3)
{
    cout<<"ingresar un numero"<< endl;
    int usernum=0; 



    int num = 1 +rand() % ( 101 -1);
    for (int i = 4; i >=0; i--)
    {
        cin>>usernum;
        if (num == usernum)
        {
            cout<<"felicidades"<< endl;

        }
        else
        {
           if (usernum> num)
           {
               cout<<"fail el numero es muy alto."<<endl;
               cout<<"te quedan "<< i << " intentos"<<endl;
           }
           else
           {
               cout<<"fail el numero es muy bajo."<<endl;
                       cout<<"te quedan "<< i << " intentos"<<endl;
           }
           
        }
        
    }
     cout<<"quieres jugar de nuevo?"<<endl;
      cout<<"(1) jugar de nuevo (2) salir del juego"<<endl;
      cin>>n;
      n+=1;
      
    
}
cout<<"el juego ha terminado"<<endl;


return 0;

  }


