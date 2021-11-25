/*1) Escreva um programa que leia o número de alunos e de alunas de uma sala. Como saída, o 
programa deve apresentar o número de alunos e em seguida o de alunas.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num_alunos
      , num_alunas

    printf("Informe o número de alunas: ");
    scanf("%d", &num_alunas);

    printf("Informe o número de alunos: ");
    scanf("%d", &num_alunos);

    printf("O número de alunas é %d e o número de alunos é %d", num_alunas, num_alunos);

    return 0;
}