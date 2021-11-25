#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Preced�ncia de Operadores -> � a ordem que as sub-express�es ser�o resolvidas
    /*
        1) fun��es
        2) ()
        3) -, ++, --, !
        4) *, /, %
        5) +, -
        6) <, <=, >, >=
        7) ==, !=
        8)?: (tern�rio)
    */

    int a, b, c;
    a = 15;
    b = 10;
    c = 5;

    float x = 0;

    x = a * b / c;
    printf("Express�o: a * b / c = %.1f\n", x);

    x = a / b * c;
    printf("Express�o: a / b * c = %.1f\n", x);

    x = a + b * c;
    printf("Express�o: a + b * c = %.1f\n", x);

    x = a * b + c;
    printf("Express�o: a * b + c = %.1f\n", x);

    x = (a * b) + c;
    printf("Express�o: (a * b) + c = %.1f\n", x);

    x = a * (b + c);
    printf("Express�o: a * (b + c) = %.1f\n", x);

    return 0;
}
