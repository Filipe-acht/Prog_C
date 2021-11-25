#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        1) char   - 1 byte  =  8 bits
        2) int    - 2 bytes =  -32768 + 32767
        3) float  - 4 bytes
        4) void   -  vazio
        5) double - 8 bytes
    */
    /*
        Valores Formatados:
        printf("%tipo_de_saida", valor_a_ser_impreso);
        printf("%tipo1 %tipo2", var1, var2);
    */
    /*
        Identificadores de saída:
            * integer % ou %d
            * float / double %f
            * char %c
            * string %s
            * modulo de um numero %u
            * endereco de memoria %p
            * imprimi o número com notação cientifica %e ou %E
            * imprimi somente UM sinal de porcentagem %%

    */

    int x = 10;
    printf("%i\n", x);

    float ff = 4.12;
    printf("%f\n", ff);

    printf(" %i - %f\n", x, ff);


    return 0;//tudo okay
}
