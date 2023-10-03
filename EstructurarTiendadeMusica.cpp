#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>

using namespace std;

int op, b=0;
int mostrar;
char bck;
struct Musica {char Tit[30], Autor[30];
    int year;
    float precio;
}song[10];

void Registro()
{
    system ("cls");
    b+1;
    cout<<"CD Numero "<<b+1<<endl<<endl;
    cout << "Titulo de CD: " ;fflush(stdin);
    gets(song[b].Tit);
    cout << "Autor: " ; fflush(stdin);
    gets (song[b].Autor);
    cout << "Year: ";
    cin >> song[b].year;
    cout << "Precio: ";
    cin >> song[b].precio;

    cout << "Registro completado";
    b++;
}

void Mostrar()
{
    system("cls");
    int ver;
    cout<<"1: Para ver los albumes completos\n\n2: Para ver el album seleccionando su numero\n";
            cin>>ver;
            system("cls");
            if(ver==1)
            {
                for(int i=0; i<=b; i++)
                    cout<<"CD Numero "<<ver+1<<endl;
                    cout << "Titulo de CD: "<<song[ver].Tit<<endl;
                    cout << "Autor: "<<song[ver].Autor<<endl;
                    cout << "Year: "<<song[ver].year<<endl;
                    cout << "Precio: "<<song[ver].precio<<endl;
            }
            else
            {
                cout<<"Que numero deseas ver\n";
                cin>>ver;
                ver--;

                cout<<"CD Numero "<<ver+1<<endl;
                cout << "Titulo de CD: "<<song[ver].Tit<<endl;
                cout << "Autor: "<<song[ver].Autor<<endl;
                cout << "Year: "<<song[ver].year<<endl;
                cout << "Precio: "<<song[ver].precio<<endl;
            }
}

int main()
{
    do{
    cout << "=== MENU ===" << endl;
    cout << "1.- Regsitrar CD" << endl;
    cout << "2.- Mostrar CD" << endl;
    cout << "3.- Salir " << endl;
    cout << "Elige una opcion: " << endl;
    cin >> op;

    switch(op)
    {
        case 1:
            Registro();
            break;

        case 2:
            Mostrar();

            break;

        default:
            return 0;
    }
cout<<"\n\nPresiona 'b' para regresar a elegir usuario"<<endl;
cin>>bck;
system ("cls");
    }while(bck=='b');
}
