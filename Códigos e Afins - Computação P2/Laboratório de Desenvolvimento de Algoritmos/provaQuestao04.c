#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL,"Portuguese");
    float valores[100], media=0;
    int iguais30 = 0
      , maior = 0
      , igual = 0
      , cont;
    printf("\nDigite os numeros:\n");
    for (cont = 0; cont < 100; cont++) {
    scanf("%f",&valores[cont]);
    if (valores[cont] == 30)
    iguais30++;
    media += valores[cont];
    }

    media = media / 100;
    for (cont = 0; cont < 100; cont++) {
    if (valores[cont] > media)
    maior++;
    else if (valores[cont] == media)
    igual++;
    }
    printf("\nQuantidade de números iguais a 30: %d\n", iguais30);
    printf("\nQuantidade de números maiores que a média: %d\n", maior);
    printf("\nQuantidade de números iguais a média: %d\n", igual);
}
