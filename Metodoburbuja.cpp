#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int ind=0, par[]={10, 7}, aux;
    printf("%i %i", par[ind], par[ind+1]);
    if (par[ind]>par[ind+1])
    {
        aux=par[ind];
        par[ind]=par [ind+1];
        par[ind+1]=aux;
    }
    printf("%i %i", par[ind], par[ind+1]);
}
