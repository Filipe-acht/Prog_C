#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>


typedef struct{
    char jogador1[50];
    char jogador2[50];
    //int pont[100];
}jogador;

jogador J;

int erros=0, quant=0,i, cont=0;
char palavra[50];
char tema[50];
char tela[50];
char letra;


char objeto[8][20]={"cadeira","mesa", "computador","celular", "ventilador","controle","carregador", "caneta"};
char nome[8][20]={"rinaldo","nicoly","lucas","filipe","leonardo","douglas","maria","beatriz"};
char cidade[8][20]={"recife","brasilia","curitiba","florianopolis","salvador","fortaleza","manaus","goiania"};
char animal[8][20]={"cachorro","aranha","cobra","lobo","ornitorrinco","pato","cavalo","gaviao"};
char carro[8][20]={"freemont","corsa","clio","fiorino","prisma","corolla","onix","captur"};
char futebol[8][20]={"flamengo","palmeiras","figueirense","corinthians","fluminense","gremio","bragantino","botafogo"};
char nova_palavra[100][20],dica_nova_palavra[100][20];


void cabecalho(){
printf("\n*********************************************Jogo da Forca*********************************************\n");
}

void menu(){

    printf("---------------------------------------------Menu do jogo---------------------------------------------\n");

    int op_menu;
    printf("\nEscolha a opção desejada:\n");
    printf("1-Jogar\n");
    printf("2-Ver ranking\n");
    printf("3-Cadastrar palavra\n");
    printf("4-Créditos\n");
    printf("5-Sair\n\n");
    printf("Opção desejada: ");
    scanf("%d",&op_menu);


    switch(op_menu){
        case 1:{
            cabecalho();
            escolhe_forma_jogar();
            break;
        }
        case 2:{
            cabecalho();
            imprime_ranking();
            break;
        }
        case 3:{
            cabecalho();
            add_palavra();
            break;
        }
        case 4:{
            creditos();
            break;
        }
        case 5:{
            break;
        }
        default:{
            system("cls");
            printf("Opção invalida!\n");
            fflush(stdin);
            return menu();
            break;
        }
    }

}

void add_palavra(){

    system("cls");
    printf("Informe a palavra que deseja adicionar: \n");
    scanf(" %s",nova_palavra[cont]);
    printf("Informe a dica:\n");
    scanf("%s",dica_nova_palavra[cont]);

    cont++;
    return menu();

}

void forca(int erro){

    if(erro==0){


        printf("\n-----------");
        printf("\n|          |");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n-           ");
    }
    else if(erro==1){

        printf("\n-----------");
        printf("\n|          |");
        printf("\n|          O");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n-           ");
    }
    else if(erro==2){

        printf("\n-----------");
        printf("\n|          |");
        printf("\n|          O");
        printf("\n|         / ");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n-           ");
    }else if(erro==3){

        printf("\n-----------");
        printf("\n|          |");
        printf("\n|          O");
        printf("\n|         / \\");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n-           ");
    }
    else if(erro==4){

        printf("\n-----------");
        printf("\n|          |");
        printf("\n|          O");
        printf("\n|         / \\");
        printf("\n|          |");
        printf("\n|           ");
        printf("\n|           ");
        printf("\n-           ");
    }
    else if(erro==5){


        printf("\n-----------");
        printf("\n|          |");
        printf("\n|          O");
        printf("\n|         / \\");
        printf("\n|          |");
        printf("\n|         /  ");
        printf("\n|           ");
        printf("\n-           ");
    }
    else if(erro==6){
        printf("\n-----------");
        printf("\n|          |");
        printf("\n|          O");
        printf("\n|         / \\");
        printf("\n|          |");
        printf("\n|         / \\");
        printf("\n|           ");
        printf("\n-           ");

        printf("Você perdeu!");
    }

}

void escolhe_forma_jogar(){
    int op_jogo;

    system("cls");

    printf("Escolha a forma de jogar:\n1-Jogar contra o computador.\n2-Jogar contra uma pessoa.\nOpção escolhida: ");
    scanf("%d", &op_jogo);

    if(op_jogo==1){
        system("cls");
        printf("Informe o seu nome:\n");
        fflush(stdin);
        scanf(" %s",&J.jogador1);

    int op_menu_tema;

    printf("\nEscolha o tema que você deseja jogar:\n");
    printf("1-Objeto\n");
    printf("2-Nome\n");
    printf("3-Cidade\n");
    printf("4-Animal\n");
    printf("5-Modelo de carro\n");
    printf("6-Time de futebol\n");
    printf("7-Palavra adicionada\n");
    printf("Informe a opção desejada: ");
    scanf("%d",&op_menu_tema);
    printf("\n");


    switch (op_menu_tema){
        int j;
        srand(time(NULL));
        j = rand()%8;

        case 1:{
            srand(time(NULL));
            j = rand()%8;
           Jogo_op1(objeto[j]);
            break;
        }
        case 2:{
            srand(time(NULL));
            j = rand()%8;
            Jogo_op1(nome[j]);

            break;
        }
        case 3:{
            srand(time(NULL));
            j = rand()%8;
           Jogo_op1(cidade[j]);
            break;
        }
        case 4:{
            srand(time(NULL));
            j = rand()%8;
            Jogo_op1(animal[j]);
            break;
        }
        case 5:{
            srand(time(NULL));
            j = rand()%8;
            Jogo_op1(carro[j]);
            break;
        }
        case 6:{
            srand(time(NULL));
            j = rand()%8;
            Jogo_op1(futebol[j]);
            break;
        }
        case 7:
            srand(time(NULL));
            j = rand()%cont;
            printf("Dica/Tema: %s",dica_nova_palavra[j]);
            Jogo_op1(nova_palavra[j]);

        default:{
            printf("Opção inválida!");
            break;
        }

    }




    }else if(op_jogo==2){
        system("cls");
        printf("Informe o nome do jogador 1:\n");
        scanf(" %s", &J.jogador1);
        fflush(stdin);
        printf("Informe o nome do jogador 2:\n");
        fflush(stdin);
        scanf(" %s",&J.jogador2);

        system("cls");


        Jogo_op2();


    }else{
        system("cls");
        printf("\nOpção inválida!\n");
        fflush(stdin);
        return escolhe_forma_jogar();
    }

}

void Jogo_op1(char palavra[50]){

    //system("cls");
    strcpy(tela, palavra);
    for(int i=0;i<strlen(tela);i++){
        tela[i]='_';
    }

        while(1){
        //system("cls");
        forca(erros);
        printf("\n");

        printf("\nTente advinhar a palavra:\n");

        for(int i=0;i<strlen(tela);i++){
            printf("%c ",tela[i]);
        }
        printf("\n\nInforme uma letra: ");
        scanf(" %c", &letra);


        int errou=1,i;

        for(i=0;i<strlen(tela);i++){

            if(letra==palavra[i]){
                printf("Você acertou: a palavra tem a letra %c\n\n", letra);
                tela[i]=letra;
                errou=0;
            }

        }
        if(errou==1){
            printf("\nVocê errou a palavra NÃO tem a letra %c\n\n", letra);
            erros++;

        }



        if(strcmp(tela,palavra)==0){
            system("cls");
            printf("Parabéns, o jogador(a) %s ganhou!\nA palavra era: %s\n\n",J.jogador1, palavra);
            ranking(J.jogador1);
            erros=0;
            return menu();
        }

        if(erros==6){
            system("cls");
            forca(erros);
            printf("\nO jogador(a) %s perdeu.\n\n",J.jogador1);
            erros=0;
            return menu();
        }


    }

}

void Jogo_op2(){
    erros=0;

    printf("Informe a palavra jogador 2:\n");
    scanf(" %s",palavra);
    printf("Informe o tema da palavra jogador 2:\n");
    scanf(" %s",tema);
    system("cls");
    strcpy(tela, palavra);
    for(int i=0;i<strlen(tela);i++){
        tela[i]='_';
    }


    while(1){
        //system("cls");
        printf("O tema é: %s",tema);

        forca(erros);
        printf("\n");

        printf("\nTente advinhar a palavra:\n");

        for(int i=0;i<strlen(tela);i++){
            printf("%c ",tela[i]);
        }
        printf("\n\nInforme uma letra: ");
        scanf(" %c", &letra);


        int errou=1;

        for(i=0;i<strlen(tela);i++){

            if(letra==palavra[i]){
                printf("Você acertou: a palavra tem a letra %c\n\n", letra);
                tela[i]=letra;
                errou=0;
            }

        }
        if(errou==1){
            printf("\nVocê errou a palavra NÃO tem a letra %c\n\n", letra);
            erros++;

        }



        if(strcmp(tela,palavra)==0){
            system("cls");
            printf("\n\nParabéns, o jogador(a) %s ganhou!\nA palavra era: %s\n\n",J.jogador1, palavra);
            ranking(J.jogador1);

            return menu();
        }

        if(erros==6){
            system("cls");
            forca(erros);
            printf("\nO jogador(a) %s perdeu.\n\n",J.jogador1);
            printf("\n\nParabéns, o jogador(a) %s ganhou!\nA palavra era: %s\n\n",J.jogador2, palavra);
            return menu();
        }


    }


}

void ranking(char nome[50]){


  FILE * r;

    r = fopen("ranking.txt", "a");

    if(r==0){
        printf("\nErro ao abrir o arquivo ranking");
        return 1;
    }

    fprintf(r,"%s\n",nome);

  int fechou;
    fechou = fclose(r);
    if(fechou == 0){
        printf("\nArquivo fechado com sucesso!\n");
    }else{
        printf("\nErro ao fechar o arquivo ranking!\n");
    }

}

void imprime_ranking(){
    system("cls");
    printf("********************************************Ranking********************************************\n\n");
    printf("\n\nPrezado usuário nosso jogo ainda não consegue exibir o menu ranking de forma correta.\nInfelizmente nosso menu só imprime o nome dos jogaroes que ganharam.\nA quantidade de vezes que seu nome aparece é a aquantidade de vezes que você ganhou!\n\n\n");

    FILE * r;

    r = fopen("ranking.txt", "r");

    char nome[255];
    if(r==0){
        printf("\nErro ao abrir o arquivo ranking");
        return 1;
    }
    while(fgets(nome,20,r)!=NULL){
        printf(nome);
    }


    int fechou;
    fechou = fclose(r);
    if(fechou == 0){
        printf("\n\n\nArquivo fechado com sucesso!\n");
    }else{
        printf("\nErro ao fechar o arquivo ranking!\n");
    }

    return menu();


}

void creditos(){

    system("cls");

    printf("\n\n***************************************************Créditos do Jogo da Forca***************************************************\n\n\n");
    printf("Trabalho apresentado às disciplinas Técnicas de Desenvolvimento de Algoritmos e Laboratório de Desenvolvimento de Algoritmos,\nno Centro Universitário de  João Pessoa - Unipê, \ncomo requisito parcial para obtenção de grau referente ao semestre 2021.2, \nsob a orientação dos Profs. Leonardo Angelo Virginio de Souto e Douglas Andrade de Menezes.\n\n");
    printf("Criadores:\n  -FILIPE NASC. COSTA SOARES\n  -NICOLY MATOS MARTINS\n  -RINALDO RODRIGUES DE CARVALHO JÚNIOR\n\n");
    printf("Ano: 2021.\n");
    printf("\n\n\n******************************************************************************************************************************\n\n");
}

int main()
{

    setlocale(LC_ALL, "Portuguese");
    cabecalho();
    menu();

    return 0;
}
