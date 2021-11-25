/*Faça um programa em C que leia o destino do passageiro, se a viagem inclui retorno (ida e volta) ou não, e informe o preço da passagem conforme a tabela a seguir:*/
#include <stdio.h>
#include <locale.h>

int main(void){
  setlocale(LC_ALL, "Portuguese");
  int cod_destino
    , vlr_ida[200] = {500, 350, 350, 300}
    , vlr_ida_volta[200] = {900, 650, 600, 550}
    , vai_vem;

    printf("\nEscolha seu destino: \n[1] - Região Norte \n[2] - Região Nordeste \n[3] - Região Centro-Oeste \n[4] - Região Sul\n ");
    scanf("%d", &cod_destino);

    if (cod_destino == 1)//Norte
    {
      printf("A sua passagem é de [1] - Ida ou [2] Ida e Volta: ");
      scanf("%d", &vai_vem);
      if(vai_vem == 1)
      {
        printf("Para a Região Norte a sua passagem de ida fica: R$%d ", vlr_ida[0]);
      }
      else
      {
        printf("Para a Região Norte a sua passagem de ida e volta fica: R$%d ", vlr_ida_volta[0]);
      }
    }

    else if(cod_destino == 2)//Nordeste
    {
      printf("A sua passagem é de [1] - Ida ou [2] Ida e Volta: ");
      scanf("%d", &vai_vem);
      if(vai_vem == 1)
      {
        printf("Para a Região Nordeste a sua passagem de ida fica: R$%d ", vlr_ida[1]);
      }
      else
      {
        printf("Para a Região Nordeste a sua passagem de ida e volta fica: R$%d ", vlr_ida_volta[1]);
      }
    }
    else if(cod_destino == 3)//Centro-Oeste
    {
      printf("A sua passagem é de [1] - Ida ou [2] Ida e Volta: ");
      scanf("%d", &vai_vem);
      if(vai_vem == 1)
      {
        printf("Para a Região Centro-Oeste a sua passagem de ida fica: R$%d ", vlr_ida[2]);
      }
      else
      {
        printf("Para a Região Centro-Oeste a sua passagem de ida e volta fica: R$%d ", vlr_ida_volta[2]);
      }
    }

    else if(cod_destino == 4)//Sul
    {
      printf("A sua passagem é de [1] - Ida ou [2] Ida e Volta: ");
      scanf("%d", &vai_vem);
      if(vai_vem == 1)
      {
        printf("Para a Região Sul a sua passagem de ida fica: R$%d ", vlr_ida[3]);
      }
      else
      {
        printf("Para a Região Sul a sua passagem de ida e volta fica: R$%d ", vlr_ida_volta[3]);
      }
    }

    else //invalido
    {
        printf("Destino invalido!");
    }
    return 0;
}