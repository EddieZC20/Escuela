
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;
int main ()
{
srand(time(NULL));
int NumAleatorio;


NumAleatorio=rand()%100;

cout<<"Tu numero aleatorio es:"<<NumAleatorio;

return 0;





}
