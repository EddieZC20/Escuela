#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu()
{
    int x;
    printf("Selecciona una opcion");
    printf("\n1: Conversiones de pulgadas a cm \n2: Conversion de millas a km \n3: conversiones libras a kg");
    printf("\n4: Salir\n");

    scanf("%i", &x);
return x;
}

void PC()
{
        system("cls");
    int a; float r;
printf("Pulgadas a cm\nIntroduce las pulgadas\n");
scanf("%i",&a);
r=a*2.53;
printf("%f\n", r);


}

void MK()
{
        system("cls");
    int a; float r;
printf("Millas a Km\nIntroduce las millas\n");
scanf("%i",&a);
r=a*1.6;
printf("%f\n", r);



}

void LK()
{
        system("cls");
      int a; float r;
printf("Libras a Kg\nIntroduce las libras\n");
scanf("%i",&a);
r=a*0.453;
printf("%f\n", r);

}

int main()
{
    int op;
    do
    {

        op=menu();
        switch(op)
        {
        case 1: PC(); break;

        case 2: MK(); break;

        case 3: LK(); break;

        default: printf("\nAdios");
        }
system("pause<null");
    }while(op!=4);
}
