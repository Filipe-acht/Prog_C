#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        1) i++ -> operador de pr�-incremento: incrementa uma unidade antes de passar pela instru��o;
        2) ++i -> operador de p�s-incremento: incrementa uma unidade ap�s passar pela a instru��o;
    */

    int i = 1;
    printf("%i\n", i);
    printf("%i\n", ++i);//pr�-incremento
    printf("%i\n", i++);//p�s-incremento

    system("cls");

    int i2 = 5;
    printf("%i\n", i2);
    printf("%i\n", --i2);//pr� decremento
    printf("%i\n", i2--);//p�s decremento

    /*
        1) Incremento\
        -------------------> Pr� ou P�s
        2) Decremento/

        Pr� -> O valor ser� incrementado/decrementado na instru��o que
                que a var�vel estiver contida;
        P�s -> O valor ser� incrementado/decrementado na pr�xima instru��o;
    */



    int x = 0;
    x = x + 1;//Incrementar qntas unidades desejarmos
    x += 1;//Incrementar qntas unidades desejarmos
    ++x;//s� podemos incrementar uma �nica unidade

    system("cls");
    printf("%i", x);
    return 0;
}
