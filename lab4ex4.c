#include "stdio.h"
#include "math.h"
int main(){
      printf(" Данні нижньої границі:-3\n");
      printf(" Данні верхньої границі:3\n");
      printf(" Крок інтервалу:0.5\n");
      printf("\n|----------|----------|\n");//Декор
      printf("|  X\t   |\t  Y   | \n");
      printf("|----------|----------|\n");//Декор     
for(float x=-3;x<=3;x+=0.5)printf("|% .2f\t   |\t%  .2f |\n",x,(2+x*x*x)/(x+sqrt(13*fabs(x))));
return 0;
}