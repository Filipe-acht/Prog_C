#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    /*
        1) += -> soma
        2) -= -> subtracao
        3) *= -> multiplicacao
        4) /= -> Divisao
        5) %= -> modulo
    */

    /*while(x < 10000){
        printf("Msg\n");
        x += 1;//x = x + 1;
    }*/

    int i = 50;
    printf("soma: %i\n", i += 100);
    printf("subtracao: %i\n", i -= 50);
    printf("multiplicacao: %i\n", i *= 3);
    printf("divisao: %i\n", i /= 3);
    printf("resto: %i\n", i %= 3);


    return 0;
}
