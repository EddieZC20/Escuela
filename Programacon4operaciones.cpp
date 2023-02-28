#include <iostream>
using namespace std;

int main()
{
 int a, b, suma, res, multi, modul;
 float divis;

 cout<< "4 TIPOS DE OPERACIONES :D"<<endl;
 cout<< "operaciones basicas"<<endl;
 cout<< "primero dame un numero entero:"<<endl;
 cin>>a;
 cout<< "Ahora necesitaremos el segundo numero entero:"<<endl;
 cin>>b;
 suma=a+b;
 res=a-b;
 multi=a*b;
 divis=a/b;
 cout<< "La suma es:"<<suma<<endl;
 cout<< "La resta es:"<<res<<endl;
 cout<< "La multiplicacion es:"<<multi<<endl;
 cout<< "La division es:"<<divis<<endl;
 modul = a%b;
 cout<< "el modulo es:"<<modul<<endl;
 return 0;



}
