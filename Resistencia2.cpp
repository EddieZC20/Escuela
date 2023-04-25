#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int menu(int x)
 {
     int y;
     printf("color de banda%i\n",x);
     printf("\n0.Negro \n1.cafe \n2.rojo");
     printf("\n3Naranja \n4.Amarillo \n5.Verde");
     printf("\n6. azul \n7.Violeta \n8.Gris \n9.Blanco\n");
     printf("Color: ");
     scanf("%i",&y);
     return y;
 }

 float banda(int p)
 {
     float val;
     switch(p)
     {
     case 0: val=0; break;
     case 1: val=1; break;
     case 2: val=2; break;
     case 3: val=3; break;
     case 4: val=4; break;
     case 5: val=5; break;
     case 6: val=6; break;
     case 7: val=7; break;
     case 8: val=8; break;
     default : val=9; break;
     }
     return val;
 }

 int main()
 {
     float b1,b2,b3,b4,r;
     int op;
     op=menu(1);
     b1=banda(op);
     op=menu(2);
     b2=banda(op);
     op=menu(3);
     b3=pow(10,op);
     r=((b1*10)+(b2))*b3;
     printf("\nB4:(1.oro 2.Plata)");
     scanf("%1",&op);
     printf("\nLa resistencia es %.0f",r);
     if(op==1)
     {
         printf("+-5%c",37);


     }
     else{ printf("+-10%c",37);}
 system("pause>null");

 }
