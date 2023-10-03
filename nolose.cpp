#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

	using namespace std;
	
	struct Libros{
		
		char titulo[25];
		int year;
		float precio;
		
	};
	
		int main(){
			
			int op;
			Libros L1;
			FILE *fichero;
			fichero=fopen("pollo.txt","a");//paraAgregar Datos
			
				if(fichero==NULL)
					{
						
						fichero = fopen("pollo.txt","w");
						cout<<"Se ha creado el archivo";
						system("cls");
						
					}
			do{
				system("cls");
				cout<<"1.Registrar libro"<<endl;
				cout<<"2.Mostrar Registro"<<endl;
				cout<<"3.SALIR"<<endl;
				cin>>op;
				
					switch(op){
						case 1:
							
							fichero=fopen("pollo.txt","a");
							system("cls");
							cout<<"titulo: "; fflush(stdin);
							gets(L1.titulo);
							
							cout<<"\nYear: "; cin>>L1.year;
							cout<<"\nPrecio: "; cin>>L1.precio;
							
							fwrite(&L1,sizeof(struct Libros),1,fichero);
							
							cout<<"\nRegistro Guardado";
							system("pause>null");
						
						break;
						case 2:
							
							system("cls");
							fichero=fopen("pollo.txt","r");
							fread(&L1,sizeof(L1),1,fichero);
							while(!feof(fichero))
							{
								cout<<"\n"<<L1.titulo<<endl;
								cout<<L1.year<<endl;
								cout<<L1.precio<<endl;
								fread(&L1,sizeof(L1),1,fichero);
							}
							cout<<"son todos los Registros";
							system("pause>null");
							
						break;
						default:
							cout<<"\nadios";
							system("pause>null");
						break;
					}
			}while(op!=3);
		}
