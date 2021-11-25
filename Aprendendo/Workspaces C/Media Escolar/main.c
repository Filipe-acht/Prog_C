#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1
        , nota2
        , nota3
        , nota4
        , media;
    nota1 = nota2 = nota3 = nota4 = media = 0;//inicializando as variáveis

    printf("==========Media Escolar==========\n\n");
    printf("Digite a sua 1 nota bimestral: ");
    scanf("%f", &nota1);
    printf("Digite a sua 2 nota bimestral: ");
    scanf("%f", &nota2);
    printf("Digite a sua 3 nota bimestral: ");
    scanf("%f", &nota3);
    printf("Digite a sua 4 nota bimestral: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("\n\nA sua media escolar foi de: %.2f \n\n", media);

    if(media >= 7)
    {
        printf("Voce foi aprovado!");
    }else{
        printf("Voce foi reprovado!");
    }

    return 0;
}
