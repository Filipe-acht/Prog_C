#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba numeros inteiros positivos e calcule a media dles. Quando receber zero, encerre a execução, exibindo o valor da media.*/

int main()
{

    int num;
    int soma = 0;
    int qtd  = 0;
    float media;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num != 0){
        while (num > 0){

            soma += num; // soma = soma + numero -=, *=, /=
            qtd++; //qtd = qtd + 1 ---> qtd += 1

            if(num == 0){
                media = soma / qtd;
                printf("A media eh: %.1f", media);
                break;
            }
            
            printf("Digite outro numero: ");
            scanf("%d", &num);        
        }

            media = soma / qtd;
            printf("A media eh: %.1f", media);
    }
    printf("bye");
    return 0;
}