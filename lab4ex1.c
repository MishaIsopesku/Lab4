#include <stdio.h> //Підключення бібліотек
#include <math.h>

int main () 
{
    float x, y;
    float result;
  
    printf ("|---Введіть числа---|\n"); //Введеня чисел
    printf (" Введіть число x: ");
    scanf ("%f", &x);
    printf (" Введіть число y: ");
    scanf ("%f", &y);
    if (((x * x + x * y - y * y) == 0) || (1 - y * y == 0)) { //Обчислення
        printf("\n Для заданих значень x та y виконується ділення на 0\n");
    }
    else
    {
        result = (x + y) / (x * x + x * y - y * y) + x / (1 - y * y) + y / (1 + x * x);
        printf("\n|---Результат---|\n");
        printf(" Відповідь: ");
        printf("%.2f\n", result);
    }
    return 0;
}

 
  
  
 
  
