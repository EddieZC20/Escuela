#include <stdlib.h>
#include <iostream>
#include <stdio.h>

using namespace std;

struct saes
{
    char alumno[30];
    int boleta;
    int examen1;
    int examen2;
    int practica1;
    int practica2;
}Alumno[10];

int promedioexam, promedioprac, promediotot;

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
        cout<<"Selecciona una opcion\n1:Registrar datos alumno\n2:Mostrar registros\n3:Salir"<<endl;
        cin>>op;
        int i=0, j=0;

        switch(op)
        {
        case 1:
            Excel=fopen("dinosaurio.txt","a");
							system("cls");
							cout<<"Alumno: ";
							fflush(stdin);
							gets(Alumno[j].alumno);

							cout<<"\nBoleta: "; cin>>Alumno[j].boleta;
							cout<<"\nCalificacion Examen1 "; cin>>Alumno[j].examen1;
							cout<<"\nCalificacion Examen2 "; cin>>Alumno[j].examen2;
							cout<<"\nCalificacion Pract1  "; cin>>Alumno[j].practica1;
							cout<<"\nCalificacion Pract2  "; cin>>Alumno[j].practica2;

							fwrite(&Alumno[i],sizeof(struct saes),1,Excel);

							cout<<"\nRegistro Guardado";
							system("pause>null");
							system("cls");
							j++;
							break;

        case 2:
            system("cls");
							Excel=fopen("dinosaurio.txt","r");
							fread(&Alumno[i],sizeof(Alumno[i]),1,Excel);
							while(!feof(Excel))
							{
								cout<<"Alumno Info:\n"<<Alumno[i].alumno<<endl;
								cout<<Alumno[i].boleta<<endl;
								cout<<"\nCalificacion Examen1 "; cout<<Alumno[i].examen1;
                                cout<<"\nCalificacion Examen2 "; cout<<Alumno[i].examen2;
                                cout<<"\nCalificacion Pract1  "; cout<<Alumno[i].practica1;
                                cout<<"\nCalificacion Pract2  "; cout<<Alumno[i].practica2;

                                promedioexam=(Alumno[i].examen1+Alumno[i].examen2)/2;
                                promedioprac=(Alumno[i].practica1+Alumno[i].practica2)/2;

                                promediotot=(promedioexam*0.6)+(promedioprac*0.4);
								fread(&Alumno[i],sizeof(Alumno[i]),1,Excel);

								cout<<"\n\nPromedio total (60% examenes y 40% practicas):   "<<promediotot<<endl<<endl<<endl;
							}
							cout<<"son todos los Registros";
							system("pause>null");
							system("cls");
							break;

        case 3:
            return 0;


        case 4:

            cout<<"Editar informacion.\n\n";
            cin>>j;
            Excel=fopen("dinosaurio.txt","w");
							system("cls");
							cout<<"Alumno: ";
							fflush(stdin);
							gets(Alumno[j].alumno);

							cout<<"\nBoleta: "; cin>>Alumno[j].boleta;
							cout<<"\nCalificacion Examen1 "; cin>>Alumno[j].examen1;
							cout<<"\nCalificacion Examen2 "; cin>>Alumno[j].examen2;
							cout<<"\nCalificacion Pract1  "; cin>>Alumno[j].practica1;
							cout<<"\nCalificacion Pract2  "; cin>>Alumno[j].practica2;

							fwrite(&Alumno[j],sizeof(struct saes),1,Excel);

							cout<<"\nRegistro Guardado";
							system("pause>null");
							system("cls");
							j++;
            break;
        }

    }while(op!=3);
    return 0;
}
