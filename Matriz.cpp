//Realiza un programa que solicite valores para una matriz de tipo 3x4
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int i, j, Matriz[3][4];

printf("\nIngresa los valores de la matriz:\nDe fila y de columna");
for(i=0; i<3; i++)
{
    for(j=0; j<4; j++)
    {
        printf("\nIngresa el valor de la ubicacion Fila:%i Columna:%i \n", i+1, j+1);

        scanf("%i", &Matriz[i][j]);
    }
}
printf("Se proyectara la matriz...");

system("cls");

for(i=0; i<3; i++)
{
    for(j=0; j<4; j++)
    {
        printf("%i   ", Matriz[i][j]);
    }
    printf("\n");
}





}
