#include<iostream>
#include<conio.h>
using namespace std;

int main()
{ int i=0,vectorA[6], vectorR[6], m;
   for(i=0; i<6; i++) 
  {
    cout << "Ingrese el vector a ";
    cin >> vectorA[i];
    }
    
    cout << "El vector a :"<<endl;
    for(i=0; i<6; i++)
    {
    cout << vectorA[i];
    }
    cout <<endl<<" Ingrese el número por el cual va a multiplicar : ";
    cin >>m;
    cout <<"El resultado de la multiplicación del vector es:";
    for(i=0; i<6; i++)
    {
     vectorR[i]= vectorA[i]*m;
    
    cout << vectorR[i];
    }
    
    getch();
    return 0;
}