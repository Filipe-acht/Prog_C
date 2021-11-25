#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1
      , num2
      , sum
      , sub
      , div
      , mult;
    printf("Calculadora 1.0\n");
    printf("Informe dois numeros:\n ");
    scanf("%i%i", &num1, &num2);

    sum  = num1 + num2;
    sub  = num1 - num2;
    mult = num1 * num2;
    div  = num1 / num2;


    printf("A soma dos numeros e: %i\n", sum);
    printf("A subtracao dos numeros e: %i \n", sub);
    printf("A multiplicacao dos numeros e: %i \n", mult);
    printf("A divisao dos numeros e: %i\n", div);

    return 0;
}
