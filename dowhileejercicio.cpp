#include <stdio.h>
#include <stdlib.h>

int main(){

int valor, op;
char resp;

do{
    system ("cls");


    do{

    printf("Ingresa un valor entre 1 y 500:");
    scanf("%i", &valor);

    }while (valor < 1 || valor > 500);
    op = (valor >= 1) + (valor >= 101) + (valor >= 201) + (valor >= 301) + (valor >= 401);

    switch (op){

    case 1: printf("\nRango 1-100 "); break;
    case 2: printf("\nRango 101-200 "); break;
    case 3: printf("\nRango 201-300 "); break;
    case 4: printf("\nRango 301-400 "); break;
    default: printf("\nRango 401-500 ");
    }

    printf("Si deseas repetir presiona s: ");
    fflush(stdin);
    scanf("%c", &resp);


}while (resp == 's');

    system ("pause > XD");



}
