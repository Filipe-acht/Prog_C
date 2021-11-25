#include <stdio.h>

int main(void){
    int idade;

    printf("Digite a idade: ");
    scanf("%d",&idade);

    if(idade <= 12){
        printf("Crianca");
    }else if (idade >= 0 && idade <= 13){//(idade >= 13 && idade <= 17)
        printf("Adolescente");
    }else if(idade >= 18 && idade <= 23){
        printf("Jovem Adulto");
    }else if (idade >= 24 && idade <= 70){
        printf("Adulto");
    }else{
        printf("Idoso");
    }

    return 0;//algo deu certo
}