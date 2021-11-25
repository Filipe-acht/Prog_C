#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Operação Ternária é uma estrutura condicional simplificada
    //notação inline
    // expressão(booleana) ? valorTrue : valorFalse;
    //<variavel> = (true) ? <valor1> senao <valor2>;
    // num = (true) ? 20 : 10;

    int num, num2;

    printf("Informe um numero\n>>> ");
    scanf("%d", &num);

/*
    if(num < 0)
        num2 = 0;
    else
        num2 = num;
    printf("O valor de num2 eh: %d\n", num2);
*/
    num2 = (num < 0) ? 0 : num;
    printf("O valor de num2 eh: %d\n", num2);

    return 0;
}
