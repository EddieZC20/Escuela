#include <stdlib.h>
#include <stdio.h>

int main()
{
    int x, arre[5];
    for (x=0; x<5; x++)
    {
        printf("\n Ingresa el valor %i: ", x+1);
        scanf("%i", &arre[x]);
    }

    //scanf("%i", &arre[x]);
    for (x=0; x<=4; x++)
    {
        printf("%i ", arre[x]);
    }

    system("pause<lol");
}
