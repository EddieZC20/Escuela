#include <stdio.h>
#include <stdlib.h>

int main()
{
int op;
printf("Hola, este es un programa para transformar Binarios a Numeros y de Numeros a Binarios\n");
printf("Introduce 1 para binario a numero\nIntroduce 2 para numero a binario\n");
scanf("%i",& op);

if(op==1){
    int num, var1, var2, var3, var4, var5, var6, var7, var8;

    printf("Ingresa un binario de 8bits y te dire su entero del 1 al 255 (por cada digito deja un espacio)\n");
    scanf("%i%i%i%i%i%i%i%i", &var1, &var2, &var3, &var4, &var5, &var6, &var7, &var8);


    var1=var1*128;
    var2=var2*64;
    var3=var3*32;
    var4=var4*16;
    var5=var5*8;
    var6=var6*4;
    var7=var7*2;
    var8=var8*1;

    num=var1+var2+var3+var4+var5+var6+var7+var8;

    printf("Tu valor es:");
    printf("%i", num);

    system("pause>null");


}
  else{
    int num, var1, var2, var3, var4, var5, var6, var7, var8;

    printf("Ingresa un entero del 1 al 255 y te dire su binario\n");
    scanf("%i", &num);

    system("cls");

    var1= num%2;
    num= num/2;

    var2= num%2;
    num= num/2;

    var3= num%2;
    num= num/2;

    var4= num%2;
    num= num/2;

    var5= num%2;
    num= num/2;

    var6= num%2;
    num= num/2;

    var7= num%2;
    num= num/2;

    var8= num%2;
    printf("\n Tu numero en binario es:\n");
    printf("%i%i%i%i%i%i%i%i", var8, var7, var6, var5, var4, var3, var2, var1);


}


}
