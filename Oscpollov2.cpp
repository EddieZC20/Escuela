#include<stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

struct Libros{
char titulo [25];
int anio;
float precio;
};

int main (){
    int op;

    Libros L1;
    FILE *fichero;
    fichero =fopen ("pollo.txt", "a"); //para agregar datos

    if (fichero==NULL)
        {
        fichero=fopen("pollo.txt","w");

        cout<<"Se ha creado el archivo";
        system ("pause>null");
        }

    do{
    system ("cls");
    cout << "1. Registrar Libro";
    cout << "\n 2. Mostrar registro";
    cout << "\n 3. Salir";
    cout << "Que deseas Hacer?";
    cin >> (op);


    switch(op)
    {

        case 1:

            fichero =fopen ("pollo.txt", "a");
            system ("cls");
            cout << "titulo"; fflush(stdin);
            gets (L1.titulo);

            cout<< "\nanio:"; cin>>L1.anio;
            cout<< "\nprecio:"; cin>>L1.precio;

            fwrite(&L1, sizeof(struct Libros),1,fichero);

            cout<<"\nRegistro de libros guardados";
            system("pause>null");

            break;
        case 2:

            system ("cls");
            fichero=fopen("pollo.txt","r");
            fread(&L1,sizeof (L1),1,fichero);
            while(!feof(fichero))
            {
                cout<<"\n"<<L1.titulo<<endl;
                cout<<L1.anio<<endl;
                cout<<L1.precio<<endl;
                fread(&L1, sizeof(L1),1,fichero);
            }
            cout<<"Son todos los registros";
            fclose(fichero);
            system ("pause>null");

            break;

        default:
            cout<<"Adios";
            system ("pause>null");
            break;
    }

    }while (op!=3);

}

