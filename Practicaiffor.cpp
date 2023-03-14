#include <iostream>
using namespace std;

int main()
{
    float a, b, c, d, e, prom;
    char nomb[30];
system("color 0E");

    cout<<"Introduce tu nombre:"<<endl;
    gets(nomb);
    cout<<"Introduce tu calificacion en 5 materias"<<endl;
    cout<<"Tu calificacion 1:"<<endl;
    cin>>a;
    cout<<"Tu calificacion 2:"<<endl;
    cin>>b;
    cout<<"Tu calificacion 3:"<<endl;
    cin>>c;
    cout<<"Tu calificacion 4:"<<endl;
    cin>>d;
    cout<<"Tu calificacion 5:"<<endl;
    cin>>e;

    prom=(a+b+c+d+e)/5;

    system("cls");

    puts(nomb); cout<<"tu calificacion es:"; cout<<prom;

    if(prom>=0 && prom<=5.9)
    {
        cout<<"\nDate de baja mano";
    }

    else if(prom>=6 && prom<=7.9)
    {
        cout<<"\nEchale ganas pa";
    }

    else if(prom>=8 && prom<=10)
    {
        cout<<"\nSigue asi";
    }
    else
    {
        cout<<"\nNo existe";
    }




return 0;

}
