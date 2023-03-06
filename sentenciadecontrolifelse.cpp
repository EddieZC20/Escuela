//Sentencias de control if else
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float b, h, r, x;
    int op;

printf("Menu de opciones\n");
printf("1. Area de un circulo\n");
printf("2. Volumen de un cilindro\n");
printf("3. Perimetro de un rectamgulo \n");
printf("4. Salir\n Elige opcion:");

scanf("%i",&op);

system("cls");
if(op==1)
{
    printf("Ingresa el radio del circulo:");
    scanf("%f", &r);
    x=3.1416 * (r*r);
    printf("\nEl area es:%f",x);
}

else if (op==2)
{
    printf("Ingresa la altura y el radio del cilindro:");
    scanf("%f %f", &h, &r);
    x=3.1416 * (r*r) * h;
    printf("\nEl volumen es:%f",x);
}

else if (op==3)
{
    printf("Ingresa la altura y la base del rectangulo:");
    scanf("%f %f", &h, &b);
    x=h+h+b+b;
    printf("\nEl perimetro es:%f",x);
}

else
{
    prinf("\nGracias por tu preferencia");
}

system("pause>null");

}
