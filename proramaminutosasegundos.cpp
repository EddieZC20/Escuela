//El  usuario  va  introducir  una  cantidad  de  segundos,  conviértelo  a  minutos  y segundos ejemplo:146segundos => 2 minutos, 26 segundos
#include <stdio.h>
#include <iostream>


using namespace std;
int main()
{
    int s, m, x;
do{
    cout<<"Introduce los segundo que quieras transformar a minutos(0-3600s) "<<endl;
    cin>>x;

    system("cls");

    }while(x<0 || x>3600);
    m=x/60;
    s=x%60;

    cout<<m<<" minutos con "<<s<<" segundos";

}
