//Programa para determinar en que grado de obesidad estas utilizando do while
#include<stdlib.h>
#include<stdio.h>

int main(){
    int x, op;
    char sexo, resp;
do{
system("cls");
    printf("Este programa es para determinar en que rango de peso te encuentras");
    printf("\nCual es tu sexo? (h/m):");
    scanf("%c", &sexo);
    if(sexo == 'h')


    {
            do{ printf("Ingresa tu peso en KG:");
            scanf("%i", &x);
            }while(x<40||x>140);

            op = (x>=40)+(x>=51)+(x>=68)+(x>=80)+(x>=90)+(x>=100);
            switch(op)
            {
                case 1: printf("\nTe encuentras en desnutricion"); break;
                case 2: printf("\nTu peso es bajo"); break;
                case 3: printf("\nTe encuentras en el estandar"); break;
                case 4: printf("\nEstas arriba del promedio"); break;
                default: printf("\nTe encuentras en sobrepeso");
            }
    }
    else{
            do{ printf("Ingrese su peso en KG:");
            scanf("%i", &x);
            }while(x<35||x>130);

            op = (x>=35)+(x>=46)+(x>=66)+(x>=74)+(x>=86)+(x>=92);
            switch(op)
            {
                case 1: printf("\nTe encuentras en desnutricion"); break;
                case 2: printf("\nTu peso es bajo"); break;
                case 3: printf("\nTe encuentras en el estandar"); break;
                case 4: printf("\nEstas arriba del promedio"); break;
                default: printf("\nTe encuentras en sobrepeso");
            }

    }
printf("\npresiona 's' si quieres volver a la primer pantalla:");
fflush(stdin);
scanf("%c",&resp);

}while(resp=='s');
system("pause>XD");
}
