#include <stdio.h>
#include <stdlib.h>
 void main()
 {
    int i;
    float salarios[8], salariosReaj[8];
    for (i=0; i<8; i++) {
    printf("\nDigite o salario: \n");
    scanf("%f",&salarios[i]);
    salariosReaj[i] = salarios[i] + (salarios[i] * 0.08);
    }
    printf("\nNumero \tSalario \t Salario Reajustado\n");
    for (i=0; i<8; i++) {
    printf("%d \t",i+1);
    printf("%f \t",salarios[i]);
    printf("%f \n",salariosReaj[i]);
    }
}
