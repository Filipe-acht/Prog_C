#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        1) char
        2) int
        3) float/double
        4) void - vazio


        1) signed       -> queremos trabalhar com valores + e -
        2) unsigned     -> trabalhar apenas com valores +
        3) long         -> queremos aumentar a capacidade de armazenamento da nossa variavel
        4) short        -> queremos diminuir o tamanho de armazenamento

    */
    int i = 10;
    unsigned short int u;

    printf("%i -> variavel u\n", sizeof(u)); //sizeof -> tamanho de..
    printf("%i -> variavel i\n", sizeof(i));


    return 0;
}
