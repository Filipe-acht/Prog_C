#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

int main()
{
    //A diferen�a entre o getchar e o getche, para o getche n�o � necess�rio teclar ENTER
    //A diferen�a entre getch e getche, o getch -> espera o caracter e n�o imprime na tela
    float num1, num2, resultado;
    char op = 0;

    do
    {

        num1 = num2 = resultado = 0;
        //op��es da calculadora
        printf(" (1) somar\n");
        printf(" (2) subtrair\n");
        printf(" (3) multiplicar\n");
        printf(" (4) dividir\n\n");
        printf(" (0) sair do programa\n\n");

        printf("Informe a operacao: \n");
        //op = getchar();
        printf("\t\t\t\t>>> ");
        op = getche();//o valor ser� jogado automaticamente dentro da variavel
        printf("\n");

        if(op != '0'){
            printf("Digite o primeiro numero: \t>>> ");
            scanf("%f", &num1);
            printf("Digite o segundo  numero: \t>>> ");
            scanf("%f", &num2);

            if( op == '1'){
                resultado = num1 + num2;
            }else{
                if(op == '2'){
                    resultado = num1 - num2;
                }else{
                    if(op == '3'){
                        resultado = num1 * num2;
                    }else{
                        if(op == '4'){
                            resultado = num1 / num2;
                        }
                    }
                }
            }
        }
        printf("\nO resultado eh: \t\t>>> %.2f\n\n", resultado);

        //system("pause");
        printf("\nPressione uma tecla para realizar uma nova operacao... ");
        getch();
        system("cls");

    }while(op != '0');


    return 0;
}
