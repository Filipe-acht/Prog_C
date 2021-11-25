#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//biblioteca dedica a manipulacao de caracteres do c

int main()
{
    //Tomada de decisoes - julgamento de uma situacao que decide o que o programa executara
    //toupper - colocar em maiuscula
    char c;
    printf("Digite um caracter em letra minuscula: ");
    scanf("%c", &c);

    if(c >= 'a')
    {
        printf("\nSegue a letra que voce digitou em maiuscula: > %c <\n",
                        toupper( c ) );
    }

    return 0;
}
