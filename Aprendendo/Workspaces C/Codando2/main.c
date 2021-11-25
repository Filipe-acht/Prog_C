#include <stdio.h>
#include <stdlib.h> //arquivo de cabecalho padrao da linguagem c(alocar memorias...)

int main()
{
    /*
       Entrada de dados:
            * scanf("tipo_de_entrada", variavel_que_recebera);
            * scanf("%tipo1 %tipo2", %var1, %var2);
    */

    int num1, num2;
    printf("Informe um numero:\n");
    scanf("%i", &num1);
    printf("Informe um segundo numero:\n");
    scanf("%i", &num2);

    printf("Numeros %i %i\n", num1, num2);

    return 0;
}
