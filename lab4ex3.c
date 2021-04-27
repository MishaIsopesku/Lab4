#include<stdio.h>
#include<math.h>

int main() 
{
int n;
float x,s,s0;

printf("Введіть n: ");
scanf("%d", &n);
printf("Введіть x: ");
scanf("%f", &x);

int j,i;
s = 0 ;
for(i=1; i<=n; ++i)
  { s0 = 0 ;
     for(j=2; j<=n; ++j) s0+=x+i*j;
     s += s0 ;
   }
printf("Результат: %.2f\n ", s);
return 0;
}