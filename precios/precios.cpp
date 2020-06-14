#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;

float salarioxd(){
   float horas=0;
   cin>> horas;
   cout<< "si ha realizado horas extras ingrese(1) si no ha realizado ingrese (2)"<<endl;
   int tiene;
   cin>> tiene;
   switch (tiene)
   {
   case 1:
    cout<<"cunatas horas extras realizo"<<endl;
      float horas_extras;
      cin>>horas_extras;
     
      return float (horas*1.75)+(horas_extras*2.50);
      break;
         case 2:
    
      return float (horas*1.75);
      break;
   
   default:
   cout<<"dato no valido"<<endl;
salarioxd();

      break;
   }
}


float impuestos(float x){
float seguro = (x*0.04);
float afp = (x*0.0625);
if (x>500)
{
   float renta =(x*0.1);
   float sum = x-seguro-afp-renta;
   return  sum;
}
else
{
   float sum2 = x -seguro-afp;
    return sum2;
}


}
  
int main(){ 
cout<<"ingrese horas trabajadas"<<endl;

float total = salarioxd();
cout<<"el salario total es de: $"<< fixed<<setprecision(2)<<total<<endl;
float totalR=impuestos(total);

cout<<"el salario total Real es de: $"<< fixed<<setprecision(2)<<totalR<<endl;

    return 0;
}