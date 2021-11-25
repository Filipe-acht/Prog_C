#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
	Manipula��o de Strings:

	1) strlen -> int strlen(char *s); retorna o comprimento da string s
	2) strcmp -> int strcmp(char *s1, char *s2); faz uma compara��o entre as duas
	3) strcpy -> void stpcpy(char *destino, char *fonte); faz uma "atribui��o", mas n�o aloca em mem�ria
	4) strcat -> void strcat(char *destino, char *fonte); acrescenta o conte�do de fonte � string destino, n�o aloca em mem�ria;
	5) toupper/tolower -> char tolower/toupper(char c);converte para mai�scula ou main�scula
    */
    char nota[5] = {1,2,3,5};
    int tam;

    tam = strlen(nota);
    printf("%d", tam);

    return 0;
}
