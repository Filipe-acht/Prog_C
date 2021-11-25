#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Caracteres de Escape:
        1) \n -> quebra de linha
        2) \t -> tabulacao
        3) \\ -> para imprimir uma barra invertida
        4) \" -> imprime uma aspa dupla
        5) \' -> imprime uma aspa simples
        6) \0 -> sinaliza onde deve parar de imprimir
     */
    printf("Eu\t\t\t\n\tsou\n\t \0o code::block\n");
    return 0;
}
