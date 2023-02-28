#include <stdio.h>
#include <stdlib.h>

int main()
{
  system("color 0C");
    int num, var1, var2, var3, var4, var5, var6, var7, var8;
    printf("Ingresa un binario de 8bits y te dire su entero del 1 al 255\n");
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

    /*Tambien puedes utilizar num=num+(var1*128);
                              num=num+(var2*64);
                              num=num+(var3*32);*/

    printf("Tu valor es:");
    printf("%i", num);

    system("pause>null");

}
