#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //getchar -> vai le um caracter

    printf("Digite um caracter: ");

    char c;
    c = getchar();

    if(c == '1')
    {
        printf("\O caracter digitado esta correto.\n");
    }else{
        printf("\nO valor digitado e invalido.\n");
        printf("Voce digitou o caracter >%c<.\n", c);

    }
    return 0;
}
