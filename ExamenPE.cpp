#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>

void posicion(int i, int j)
{
    COORD coord;
    coord.X=i;
    coord.Y=j;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    for(int x=20; x<=80; x++)
    {
        posicion(x,8); printf("%c", 3);
    }
    for(int y=8; y<=28; y++)
    {
        posicion(80,y); printf("%c", 3);
    }
    for(int x=80; x>=20; x--)
    {
        posicion(x,28); printf("%c", 3);
    }
    for(int y=28; y>=12; y--)
    {
        posicion(20, y); printf("%c", 3);//Una vuelta
    }
    for(int x=20; x<=70; x++)
    {
        posicion(x,12); printf("%c", 3);
    }
    for(int y=12; y<=24; y++)
    {
        posicion(70,y); printf("%c", 3);
    }
    for(int x=70; x>=30; x--)
    {
        posicion(x,24); printf("%c", 3);
    }
    for(int y=24; y>=16; y--)
    {
        posicion(28, y); printf("%c", 3);//Dos vueltas
    }
    for(int x=28; x<=60; x++)
    {
        posicion(x,16); printf("%c", 3);
    }
    for(int y=16; y<=20; y++)
    {
        posicion(60,y); printf("%c", 3);
    }
    for(int x=60; x>=40; x--)
    {
        posicion(x,20); printf("%c", 3);
    }
    for(int y=20; y>=18; y--)
    {
        posicion(40, y); printf("%c", 3);
    }
    for(int x=40; x<=50; x++)
    {
        posicion(x,18); printf("%c", 3);
    }
    for(int nm=1; nm<=3; nm++)
    {
        posicion(41, 19); printf("Eddie Alberto Zapata Cardenas\n\n");
        Sleep(200);
        posicion(41, 19); printf("                                  ");
        Sleep(200);
        posicion(41, 19); printf("Eddie Alberto Zapata Cardenas\n\n");
        Sleep(200);
    }
    system("pause<null");
    //system(pause<null");
}
