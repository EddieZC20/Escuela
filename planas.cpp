#include <iostream>
using namespace std;
int main(){
//sentencia control for
    char r;
    int x;

     for(x=1; x<=5; x++){
        cout<<x<<" Quieres ser mi novio? "<<endl;
     cin>>r;
     if(r=='s')
     {
         break;
         cout<<"Te quiero";
     }
     }

    return 0;
}
