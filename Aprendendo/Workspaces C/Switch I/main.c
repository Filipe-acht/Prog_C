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

    printf("Digite um valor entre 0 e 9: ");
    int i;
    scanf("%i", &i );

    switch(i){
    case 0:
        printf("A opcao digitada foi 'zero'");
        break;
    case 1:
        printf("A opcao digitada foi 'um' ");
        break;
    case 2:
        printf("A opcao digitada foi 'dois' ");
        break;
    case 3:
        printf("A opcao digitada foi 'tres'");
        break;
    case 4:
        printf("A opcao digitada foi 'quatro' ");
        break;
    case 5:
        printf("A opcao digitada foi 'cinco' ", i);
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
