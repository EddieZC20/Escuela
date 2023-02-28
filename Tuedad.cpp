#include <iostream>

using namespace std;
int main(){
 int a;
 char resp;

cout<<"Cuantos años tienes?"<<endl;
cin>>a;
cout<<"¿Quieres ser mi novio (s/n)?"<<endl;
cin>>resp;

if ((resp=='s')&&(a>=18))
    cout<<"TEAMO"<<endl;

else if ((resp=='s')&&(a<18))
    cout<<"Disculpa pero no salgo con menores";

return 0;


}
