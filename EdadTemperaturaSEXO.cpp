#include <iostream>
using namespace std;
int main()
{
char Name[25];
int Edad;
float Temp;
char Sexo;
cout<<"xxxXINFORMACION DE LA PERSONAXxxx"<<endl;
cout<<"¿Cual es tu nombre?"<<endl;
gets(Name);
cout<<"Dime tu edad:"<<endl;
cin>>Edad;
cout<<"Ahora necesitare saber tu temperatura"<<endl;
cin>>Temp;
cout<<"Tu sexo (H o M):"<<endl;
cin>>Sexo;

cout<<puts(Name);
cout<< "Tu edad, temperatura y sexo son:"<<endl;
cout<<Edad<<endl;
cout<<Temp<<"c"<<endl;
cout<<Sexo;

return 0;

}
