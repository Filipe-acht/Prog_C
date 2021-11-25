#include <stdio.h>
#include <stdlib.h>
//Operadores Logicos e Relacionais
int main()
{
    //&& -> (true) && (true)
    // (true)  || (false)  -> 1
    // (false) || (true)   -> 1
    // (true)  || (true)   -> 1
    // (false) || (false)  -> 0

    system("cls");//limpar a tela

    int x       = 10;
    int cond    = 0;

    cond = (x == 10) || (x < 1);
    printf("%i\n", cond);

    cond = (x == 0) || (x != 10000);
    printf("%i\n", cond);

    cond = (x == 10) || (x != 0);
    printf("%i\n", cond);

    cond = (x != 10) || (x == 0);
    printf("%i\n", cond);

    return 0;
}
