//Realiza un programa que identifique el mayor de dos numeros ingresados
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("Este es unprograma para identificar el numero mayor\n");
    printf("Introduce el primer numero\n");
    scanf("%i",&a);
    printf("Introduce el segundo numero para comparar\n");
    scanf("%i",&b);

    if(a>b)
    {
        printf("%i",a, "Es mayor que" "%i",b );
    }

    else if(a<b)
    {
        printf("%i",b, "Es mayor que" "%i", a);
    }

    else if(a==b)
    {
        printf ("%i",a, "Es igual que" "%i",b );
    }
}
