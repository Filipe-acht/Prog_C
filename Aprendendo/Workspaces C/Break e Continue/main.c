#include <stdio.h>
#include <stdlib.h>

int main()
{
    //break     -> interrompe o ciclo
    // continue -> interrompe o la�o

    for(int x = 0; x <= 10; ++x){
        if(x == 2){
                printf("-\n", x);
            continue;//chegando em 2, interrompe o la�o atual
        }
        if(x == 8){
            printf("-\n", x);
            break; //chegando em 8 o loopiing ser� finalizado
        }
        printf("%i\n", x);
    }

    printf(" \n");
    return 0;
}
