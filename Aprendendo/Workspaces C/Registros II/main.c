#include <stdio.h>
#include <stdlib.h>

typedef struct aluno{//toda variavel do tipo aluno vai conter as seguintes informações
	//O typedef, define um novo tipo
	char nome[20];
	int matricula;
	float n1, n2, n3, media;
}Aluno; //aqui defino o nome de chamada


int main(){
	/*
	Duas formas de chamar:
		** Aluno aluno1;
		** strutct Aluno aluno2;

	a2.n1 = 7.5;
	a2.matricula = 54811;
	a2.nome = 'Filipe';
	*/
	Aluno a1, a2;//criando a variavel do tipo aluno, que contem todas as definicoes do struct

	printf("Digite seu nome: ");
	scanf("%s", &a1.nome);

	printf("Digite sua matricula: ");
	scanf("%d", &a1.matricula);

	printf("Digite a 1 nota: ");
	scanf("%f", &a1.n1);

	printf("Digite a 1 nota: ");
	scanf("%f", &a1.n2);

	printf("Digite a 1 nota: ");
	scanf("%f", &a1.n3);

	a1.media = (a1.n1 + a1.n2 + a1.n3) / 3;

	printf("O nome do aluno eh %s, matricula %d e a media dele eh: %f ", a1.nome,a1.matricula, a1.media);

}
