#include <stdio.h>

int main()
{
 system ("color 5f");
 float a,b,c,D,x,x1,x2;
 printf("+--------------------------------------------+ \n");
 printf("+-- Program Mencari Akar Persamaan Kuadrat --+ \n");
 printf("+---- Bentuk Persamaan ax^2 + bx + c = 0 ----+ \n");
 printf("+------------- Guruh Andi Pratama -----------+ \n");
 printf("+----------------- D400150*** ---------------+ \n");
 printf("+--------------------------------------------+ \n");
 printf(" Masukan Nilai a = ");scanf("%f",&a);
 printf(" Masukan Nilai b = ");scanf("%f",&b);
 printf(" Masukan Nilai c = ");scanf("%f",&c);
 printf("+--------------------------------------------+ \n");

 if (a==0)
    printf("Pastikan bilangan a tidak = 0 \n");
 if (a<0)
    {D = (b*b)-(4*a*c);
        printf(" Diskriminan = %2.2f\n",D);}
 else if (a>0)
    {D = (b*b)-(4*a*c);
        printf(" Diskriminan = %2.2f\n",D);}
 printf("+--------------------------------------------+ \n");
 if (D>0)
     {x1=((-b+sqrt(D))/(2*a));
         printf(" x1 = %2.2f\n",x1);
      x2=((-b-sqrt(D))/(2*a));
         printf(" x2 = %2.2f\n",x2);}
 else if(D==0)
     {x= -b/(2*a);
         printf(" x1 = x2 = %2.2f\n",x);}
 else if(D<0)
      printf("Pastikan D Tidak Negatif (-)\n");
 printf("+--------------------------------------------+\n");

 return 0;
}
