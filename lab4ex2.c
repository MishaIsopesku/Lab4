#include <stdio.h>

int main(){
int k,i,s=0;

 printf("\nВиберіть яким способом виконати программу\n");
 printf("1-(цикл for), 2-(цикл while), 3-(цикл do while): ");
 scanf("%d",&k);

switch(k){
case 1:for(i=1;i<=10;i+=2)s+=i; break;
case 2:i=1; while(i<=10)s+=i,i+=2; break;
case 3:i=1; do s+=i; while(i+=2,i<=10); break;

default:printf("Ви ввели неправильне число");
}
printf("\nВідповідь:");
printf("%d\n",s*s);

return 0;
}