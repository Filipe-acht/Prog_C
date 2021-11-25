#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5] = {0};//inicializado com todos os elementos iguais a zero
    float total     = 0;
    float media    = 0;

    printf("Informe 5 notas\n>>> ");

    for(int i = 0; i < 5; ++i)
        scanf("%f", &notas[i]);

    for(int i = 0; i < 5; ++i)
        total += notas[i];//cada vez que o ciclo for executada será armazenado cada valor;

    media = total / 5;

    printf("A media do aluno eh %.2f\n>>> ", media);
    return 0;
}
