#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    switch ( expressao ){
        case (expressao-const):
            break;
        case(true):
            break;
        default:
            * não é necessário por break
    }
    */

    printf("Digite um valor entre 0 e 9:\n>>> ");
    int i;
    scanf("%i", &i );

    switch(i){
    case 0:
        printf("A opcao digitada foi 'zero'");
        break;
    case 1:printf("Passou");
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Voce digitou um numero entre 1 e 5", i);
        break;
    case 6:
        printf("A opcao digitada foi 'seis' ", i);
        break;
    case 7:
        printf("A opcao digitada foi 'sete' ", i);
        break;
    case 8:
        printf("A opcao digitada foi 'oito' ", i);
        break;
    case 9:
        printf("A opcao digitada foi 'nove' ", i);
        break;

    default:
        printf("Opcao default");
    }
    return 0;
}
