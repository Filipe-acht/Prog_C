#include <stdio.h>
#include <stdlib.h>

//== -> comparacao positiva(1)
//!= -> comparacao negativa(0)
//!  -> not
int main()
{
    int i = 10;

    printf("Digite um numero != 5: \n");
    scanf("%i", &i);

    if(i !=5)
    {
        printf("A expressao e: \n");
        printf("TRUE");
    }else{
        printf("A expressao e: \n");
        printf("FALSE");
    }


    return 0;
}
