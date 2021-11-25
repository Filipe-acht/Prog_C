#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite uma caracter entre A ate G\n>>> ");
    char caractere = 0;
    scanf("%c", &caractere);
    int codigo = 0;

    /*switch(caractere){
        case 'A':
            codigo = 65;
            break;
        case 'B':
            codigo = 66;
            break;
        case 'C':
            codigo = 67;
            break;
        case 'D':
            codigo = 68;
            break;
        case 'E':
            codigo = 69;
            break;
        case 'F':
            codigo = 70;
            break;
        case 'G':
            codigo = 71;
            break;

        default:
            codigo = -1;
    }
*/
    codigo = (caractere == 'A') ? 65 :
             (caractere == 'B') ? 66 :
             (caractere == 'C') ? 67 :
             (caractere == 'D') ? 68 :
             (caractere == 'E') ? 69 :
             (caractere == 'F') ? 70 :
             (caractere == 'G') ? 71 : - 1;

    printf("O codigo ASCII do caracter digitado eh: %i", codigo );



    return 0;
}
