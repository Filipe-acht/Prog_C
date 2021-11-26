#include <stdio.h>
#include <stdlib.h>

/*
	FUNÇÕES:

		SINTAXE:

			tipo_retorno nome(lista_de_parametros{

				corpo_da_função;
			}

			* tipo_de_retorno especifica o tipo do valor que a função ira retormar(return).
				** se nenhuma tipo for especificado, por default será int;

*/

void cabecalho(){

    printf("===== A soma de dois numeros =====\n");
}

int soma(int x, int y){
	int res;

	//res = x + y;
	return x + y;

	//return res;
}

int main(){

	int ret, num1, num2, reta;
	cabecalho();

	printf("Digite um numero inteiro:\n>>> ");
	scanf("%d", &num1);

	printf("Digite um segundo numero inteiro:\n>>> ");
	scanf("%d", &num2);

	ret = soma(num1, num2);

	//printf("A soma eh: %d\n ", ret);
	printf("A soma eh: %d\n ", soma(num1,num2));
}
