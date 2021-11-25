#include <stdio.h>
#include <stdlib.h>

int main()
{
    //matriz é um "vetor" multidimensional
    // tipo <nome> [linhas] [colunas]
    //matriz bidimensional
    //int matriz [3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int matriz [3][3] = {{1, 2, 3},//populando matriz
                         {4, 5, 6},
                         {7, 8, 9}};
    //acessando os dados
    printf("%i\n", matriz[0][0]);
    printf("%i\n", matriz[0][1]);
    printf("%i\n", matriz[0][2]);

    return 0;
}
