#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Precedência de Operadores -> é a ordem que as sub-expressões serão resolvidas
    /*
        1) funções
        2) ()
        3) -, ++, --, !
        4) *, /, %
        5) +, -
        6) <, <=, >, >=
        7) ==, !=
        8)?: (ternário)
    */

    int a, b, c;
    a = 15;
    b = 10;
    c = 5;

    float x = 0;

    x = a * b / c;
    printf("Expressão: a * b / c = %.1f\n", x);

    x = a / b * c;
    printf("Expressão: a / b * c = %.1f\n", x);

    x = a + b * c;
    printf("Expressão: a + b * c = %.1f\n", x);

    x = a * b + c;
    printf("Expressão: a * b + c = %.1f\n", x);

    x = (a * b) + c;
    printf("Expressão: (a * b) + c = %.1f\n", x);

    x = a * (b + c);
    printf("Expressão: a * (b + c) = %.1f\n", x);

    return 0;
}
