#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*
        for(parte1; parte2; parte3){

            parte1 -> inicializa��o
            parte2 -> condi��o
            parte3 -> atualiza��o
        }
   */

   for(int a = 0, b = 10; a <= 10; ++a, --b){
   //for(int a = 0, b = 10 && b >= 0; a <= 10; ++a, --b){
    printf("%i", a);
    printf("  - ");
    printf("%i\n", b);
   }


    return 0;
}
