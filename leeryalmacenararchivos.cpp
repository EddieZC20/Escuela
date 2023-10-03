#include <stdlib.h>
#include <iostream>
#include <stdio.h>

using namespace std;

struct saes
{
    char alumno[30];
    int boleta;
    char correo[40];
}Grupo;

int main()
{

    int op;
    FILE*Excel;
    Excel=fopen("dinosaurio.txt", "a");

    if (Excel==NULL)
    {
        Excel=fopen("dinosaurio.txt", "w");
        cout<<"Se ha creado el archivo";
        system ("cls");
    }


    do{
        int op;
        cout<<"Selecciona una opcion\n1:Registrar alumno\n2:Mostrar registros\n3:Salir alaverga"<<endl;
        cin>>op;

        switch(op)
        {
        case 1:
            Excel=fopen("dinosaurio.txt","a");
							system("cls");
							cout<<"Alumno: ";
							fflush(stdin);
							gets(Grupo.alumno);

							cout<<"\nBoleta: "; cin>>Grupo.boleta;
							cout<<"\ncorreo: "; cin>>Grupo.correo;

							fwrite(&Grupo,sizeof(struct saes),1,Excel);

							cout<<"\nRegistro Guardado";
							system("pause>null");
							system("cls");
							break;

        case 2:
            system("cls");
							Excel=fopen("dinosaurio.txt","r");
							fread(&Grupo,sizeof(Grupo),1,Excel);
							while(!feof(Excel))
							{
								cout<<"Alumno Info:\n"<<Grupo.alumno<<endl;
								cout<<Grupo.boleta<<endl;
								cout<<Grupo.correo<<endl<<endl<<endl;
								fread(&Grupo,sizeof(Grupo),1,Excel);
							}
							cout<<"son todos los Registros";
							system("pause>null");
							system("cls");
							break;

        case 3:
            return 0;
        }

    }while(op!=3);
    return 0;
}
