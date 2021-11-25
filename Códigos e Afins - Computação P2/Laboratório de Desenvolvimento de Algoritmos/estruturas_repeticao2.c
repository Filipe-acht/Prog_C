#include <stdio.h>
#include <stdlib.h>
/*Faça um programa que imprime o primeiro numero, entre 1 e 1 milhao, que é divisivel por 11, 13 e 17*/

int main(){
    for (int entre = 1; entre <= 1000000; entre++) {
      if (entre % 11 == 0 && entre % 13 == 0 && entre % 17 == 0) {
           printf("O numero eh %d\n", entre);
           break;
        }
    }
}