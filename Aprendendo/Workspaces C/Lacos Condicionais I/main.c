#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*
        O do while -> executa ao menos uma vez até chegar no while
        O while    -> verifica e depois executa
        faça
        {
        }
        enquanto (true);
    */
    int contador = 0;
    char c;
    do
    {
        contador += 1;
        printf("Digite 0 para sair do looping\n");
        printf("Quantidade de vezes %i\n", contador);
        c = getchar();
    }while(c != '0');
    printf("Quantidade de vezes final %i\n", contador);

    return 0;
}
