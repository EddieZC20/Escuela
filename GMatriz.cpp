#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int c, r;
    int i, j;
    printf("Indicar numero de renglones para la matriz");
    scanf("%i", &r);
    printf("Indicar numero de columnas para la matriz");
    scanf("%i", &c);

    int matriz[r][c];
    srand(time(NULL));

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            matriz[i][j]=1+rand()%151;
            //printf("  %i  ", &matriz[i][j]);
        }
        //printf("\n");
    }

    system("cls");
    printf("La matriz es:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

}
