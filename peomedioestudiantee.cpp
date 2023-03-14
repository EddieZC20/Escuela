#include <iostream>//Reyes Hernandez Juan Antonio 2023640639 1TM1
using namespace std;

int main(){
system("color B2");
char Nomb [30];
float calif1, calif2, calif3, promedio;

cout<<"**********************************"<<endl;
cout<<"Introduce los datos"<<endl;

cout<<"Nombre: "<<endl;
gets(Nomb);

cout<<"Introduce tu calificacion: "<<endl;
cin>>calif1;

cout<<"Introduce segunda calificacion: "<<endl;
cin>>calif2;

cout<<"Introduce tu ultima calificacion: "<<endl;
cin>>calif3;


system ("cls");


cout<<"Tus Datos son: "<<endl;
cout<<"Tu nombre es: "<<endl;
puts(Nomb);

promedio = (calif1+calif2+calif3)/3;

cout<<"Tu promedio es de: "<<promedio;

return(0);
}
