#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

using namespace std;
void posicion(int i, int j)
{
    COORD coord;
    coord.X=i;
    coord.Y=j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
/*nt main()
{
    system("color ")

    for(int x=10; x<=110; x++)
    {
        posicion(x, 12); printf("*");
        posicion(65, 14); printf("%i%c", x-10, 37);
        Sleep (40);
    }
    posicion(50, 14); printf("Descarga exitosa\n\n");
    system("pause<null");
}*/

int main()
{
    posicion(12, 10); printf("创创创创创创创创创� 抖抖抖抖抖抖抖抖抖洞创创创创创创创创创`");
    posicion(12, 11); printf("创创创创创创创创炊抖抖洞创创创创创创抖抖抖洞创创创创创创创�");
    posicion(12, 12); printf("创创创创创创创抖抖创创创创创创创创创创创炊抖洞创创创创创创�");
    posicion(12, 13); printf("创创创创创创炊抖创创创创创创创创创创创创创创炊洞创创创创创�");
    posicion(12, 14); printf("创创创创创创抖创创创创创创创创创创创创创创创创抖创创创创创�");
    posicion(12, 15); printf("创创创创创炊洞创创创创创创创创创创`创创创创创炊洞创创创创碻");
    posicion(12, 16); printf("创创创创创抖创创创创创创创创创创创创创创创创创炊洞创创创创�");
    posicion(12, 17); printf("创创创创创抖炊洞创创创创创创创创创创创创创创抖炊洞创创创创�");
    posicion(12, 18); printf("�.创创创创抖炊洞创创创创创创创创创创创创创创抖创洞创创创创�");
    posicion(12, 19); printf("创创创创创抖炊洞创创创创创创创创创创创创创创抖创洞创创创创�");
    posicion(12, 20); printf("创创创创创抖创抖创创创创创创创创创创创创创创抖炊洞创创创创�");
    posicion(12, 21); printf("创创创创创抖创抖创创创创创创创创创创创创创炊洞炊洞创创创创�");
    posicion(12, 22); printf("创创创创创炊洞抖创炊抖抖抖洞创创抖抖抖抖创炊洞抖创创创创创�");
    posicion(12, 23); printf("创创创创创创抖抖炊抖抖抖抖洞创创抖抖抖抖抖炊抖抖创创创创创�");
    posicion(12, 24); printf("创创创创创创炊抖炊抖抖抖抖洞创创抖抖抖抖抖炊抖创创创创创创�");
    posicion(12, 25); printf("创创抖洞创创创抖创抖抖抖抖创创创炊抖抖抖抖创抖创创创抖抖创�");
    posicion(12, 26); printf("创炊抖抖创创炊洞创抖抖抖洞创抖洞创抖抖抖洞创抖创创炊抖抖洞�");
    posicion(12, 27); printf("创抖创炊洞创炊洞创创抖洞创炊抖抖创创抖洞创创抖创创抖创炊洞�");
    posicion(12, 28); printf("炊抖创创抖抖创抖创创创创创抖抖抖洞创创创创炊洞炊抖洞创炊抖�");
    posicion(12, 29); printf("抖创创创创炊抖抖抖洞创创创抖抖抖洞创创创抖抖抖抖洞创创创炊�");
    posicion(12, 30); printf("抖抖抖抖洞创创抖抖抖抖创创抖抖抖洞创炊抖抖抖洞创创炊抖抖抖�");
    posicion(12, 31); printf("创抖抖炊抖抖创创创抖抖洞创创创创创创炊抖炊洞创创抖抖抖炊抖�");
    posicion(12, 32); printf("创创创创创抖抖抖创抖洞炊洞创创创创创抖创抖洞炊抖抖洞创创创�");
    posicion(12, 33); printf("创创创创创创创抖抖抖炊洞抖抖抖抖抖洞抖炊抖抖洞创创创创创创�");
    posicion(12, 34); printf("创创创创创创创创创抖炊洞洞洞洞洞洞洞洞洞抖创创创创创创创创.");
    posicion(12, 35); printf("创创创创创创创创抖抖创洞洞洞洞洞洞洞洞创抖抖洞创创创创创创�");
    posicion(12, 36); printf("创创创创创创抖抖洞抖创炊抖抖抖抖抖抖创炊洞抖抖洞创创创创创�");
    posicion(12, 37); printf("创创创创创炊洞抖创炊抖抖抖洞创创抖抖抖抖创炊洞抖创创创创创�");
    posicion(12, 38); printf("创创抖抖抖抖抖创创炊洞创创创创创创创创抖创创创抖抖抖抖洞创�");
    posicion(12, 39); printf("创炊洞创创创创创抖抖抖洞创创创创创创抖抖抖抖创创创创创抖创碶n\n");

}
