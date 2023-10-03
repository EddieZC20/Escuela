#include<string.h>
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<time.h>
#include <cstdlib>
#include <ctime>
int vidas=10, bloq, gameover=0;
int r1, r2, rr2;
int arre[10];
int x, y, r = 0;
using namespace std;

int main() {
    char resp[20];
    char solucion[10][25] = {
        "LAMENTAR", "LO QUE PUEDES HACER HOY", "LO AYUDA", "QUE POR BIEN NO VENGA",
        "RIE MEJOR", "CORAZON QUE NO SIENTE", "ORO", "BUENA CARA", "POCO APRIETA",
        "SE LO LLEVA LA CORRIENTE"
    };
    string frase[] = {
        "Mas vale prevenir que ", "No dejes para manana ", "A quien madruga, Dios ",
        "No hay mal ", "El que rie al ultimo ", "Ojos que no ven ", "El tiempo es ",
        "Al mal tiempo ", "El que mucho abarca ", "Camaron que se duerme "
    };

    int arre[10];
    int x, y;
    srand(time(NULL));

    for (x = 0; x < 10; x++) {
        int ale;
        int ctrl = 1;
        while (ctrl > 0) {
            ale = rand() % 10;
            ctrl = 0;
            for (y = 0; y < x; y++) {
                if (arre[y] == ale) {
                    ctrl++;
                    break;
                }
            }
        }
        arre[x] = ale;
    }
    int r = 1; //r es la variable que se va encargar de controlar el programa, solo deberas ir sumando r++ para que cambie la pregunta

    cout << frase[arre[r]] << endl;

    return 0;
}
