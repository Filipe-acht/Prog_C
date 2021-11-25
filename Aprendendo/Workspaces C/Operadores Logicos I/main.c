#include <stdio.h>
#include <stdlib.h>

int main()
{
    //&& -> AND: verifica se as duas condicoes sao verdadeiras
    //|| -> OR: verifica se pelo menos uma condicao e verdadeira
    // ! -> NOT

    int iJ, iI, idade=0;
    iJ = 17;
    iI = 60;

    printf("Digite uma idade: ");
    scanf("%i", &idade);

    if((idade <= iJ))
    {
        printf("\nA idade informada eh de um jovem.\n");
    }else{
        if(idade >= iI)
        {
            printf("\nA idade informada eh de uma pessoa idosa.\n");
        }else{
            if((idade > iJ) && (idade < iI)){
                printf("A idade informada eh de uma pessoa de meia-idade.");
            }
        }
    }
    return 0;
}
