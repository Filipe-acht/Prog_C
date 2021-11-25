#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
	Manipulação de Strings:

	1) strlen -> int strlen(char *s); retorna o comprimento da string s
	2) strcmp -> int strcmp(char *s1, char *s2); faz uma comparação entre as duas
	3) strcpy -> void stpcpy(char *destino, char *fonte); faz uma "atribuição", mas não aloca em memória
	4) strcat -> void strcat(char *destino, char *fonte); acrescenta o conteúdo de fonte à string destino, não aloca em memória;
	5) toupper/tolower -> char tolower/toupper(char c);converte para maiúscula ou mainúscula
    */
    char nota[5] = {1,2,3,5};
    int tam;

    tam = strlen(nota);
    printf("%d", tam);

    return 0;
}
