#include <stdio.h>
#include <stdlib.h>
/*Escreva um programa em C que leia 15 valores reais, e encontre o maior e o menor entre eles , e print*/
int main()
    {
    float numero, maior=12382194849849848, menor=-212131515151515;
    int cont;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    maior = numero;
    menor = numero;

    for(cont = 0; cont < 15; cont++)
    {
    printf("\nDigite outro numero: ", cont+1);
    scanf("%f", &numero);

    if(numero > maior){

        maior = numero;
    }if(numero < menor){
        menor = numero;
    }
    }


    printf("\nO menor numero eh: %f", menor);
    printf("\nO maior numero eh: %f", maior);
}