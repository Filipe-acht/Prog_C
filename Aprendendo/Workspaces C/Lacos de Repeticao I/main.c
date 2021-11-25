#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
    enquanto(true)
    {
        imprima(1);
    }
    */

    int  i = 1;

    while (i <= 10)
    {
        printf("%i\n", i);
        i = (i + 1);//caso nao seja posto entrara em loop, pois nunca sera false

    }


    return 0;
}
