#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5] = {{1,2,3,4,5},
                        {6,7,8,9,10},
                        {11,12,13,14,15},
                        {16,17,18,19,20},
                        {21,22,23,24,25}};
    //para printar a matriz, é necessário um for para linhas e outro para colunas
    for(int linhas = 0; linhas < 5; ++linhas){
        for(int colunas = 0; colunas < 5; ++colunas){
            printf("%i - ", matriz[linhas][colunas]);
        }
        printf("\n");//ao final do comando ele pula uma linha e executa novamente
    }
    return 0;
}
