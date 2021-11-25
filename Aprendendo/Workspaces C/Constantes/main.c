#include <stdio.h>
#include <stdlib.h>
//para conversar com o pré-processador: # comando nome_da_constante valor
#define w 7
int main()
{
    //para definir constante: const int(type) <nome>  = valor

    const int a = 5;//constante é imutavel


    printf("%i\n", w + a);
    return 0;
}
