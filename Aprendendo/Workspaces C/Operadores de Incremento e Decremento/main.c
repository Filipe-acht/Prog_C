#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        1) i++ -> operador de pré-incremento: incrementa uma unidade antes de passar pela instrução;
        2) ++i -> operador de pós-incremento: incrementa uma unidade após passar pela a instrução;
    */

    int i = 1;
    printf("%i\n", i);
    printf("%i\n", ++i);//pré-incremento
    printf("%i\n", i++);//pós-incremento

    system("cls");

    int i2 = 5;
    printf("%i\n", i2);
    printf("%i\n", --i2);//pré decremento
    printf("%i\n", i2--);//pós decremento

    /*
        1) Incremento\
        -------------------> Pré ou Pós
        2) Decremento/

        Pré -> O valor será incrementado/decrementado na instrução que
                que a varável estiver contida;
        Pós -> O valor será incrementado/decrementado na próxima instrução;
    */



    int x = 0;
    x = x + 1;//Incrementar qntas unidades desejarmos
    x += 1;//Incrementar qntas unidades desejarmos
    ++x;//só podemos incrementar uma única unidade

    system("cls");
    printf("%i", x);
    return 0;
}
