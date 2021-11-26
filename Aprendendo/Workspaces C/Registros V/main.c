#include <stdio.h>
#include <stdlib.h>

/*
	ALOCAÇÕES:

		* ESTÁTICA -> variáveis locais, globais, matrizes e estruturas;
		* DINÂMICA -> alguns programas precisam ser capazes de ajustar as suas necessidades
			de armazenamento como resposta a eventos.
			** Funções:
					*** malloc() -> void *malloc(size_t size);
							char *ptr;
							ptr = malloc (1);
							scanf ("%c", ptr);
					*** free() -> void free(void *ptr);

			** Tamanho das variáveis:
					*** sizeof():
*/

typedef struct agenda {
    char nome[70];
    char telefone[50];
    int codigo;
} t_agenda;

int main() {
    int tamanho = sizeof(t_agenda);
    printf("tamanho = %d\n", tamanho);
}
