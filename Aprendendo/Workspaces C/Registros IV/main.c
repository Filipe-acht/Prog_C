#include <stdio.h>
#include <stdlib.h>
/*
	* Algoritmo que recebe um vetor de 5 espaços
	* Calcule as medias
	* Exibir seus dados de forma organizada
*/
typedef struct aluno{
	int matricula;
	float n1;
	float n2;
	float media;
	char curso[30];
	char nome [30];
	int i;
}Aluno;


int main(){

	Aluno a1, a2;
	//Aluno alunos[5];
	Aluno alunos[2];
    int i;

	for( i = 0; i <= 5; i++){
		printf("Digite seu nome:\n>>> ");
		scanf("%s", &alunos[i].nome);

		printf("Digite seu curso:\n>>> ");
		scanf("%s", &alunos[i].curso);

		printf("Digite sua matricula:\n>>> ");
		scanf("%s", &alunos[i].matricula);

		printf("Digite sua primeira nota:\n>>> ");
		scanf("%f", &alunos[i].n1);

		printf("Digite sua segunda nota:\n>>> ");
		scanf("%f", &alunos[i].n2);

		alunos[i].media = (alunos[i].n1 + alunos[i].n2) / 2;
	}
        for( i = 0; i <= 5; i++){
            printf("\nOs dados dos alunos são: %s %d %f ", alunos[i].nome, alunos[i].matricula, alunos[i].media);
		}

        return 0;
}
