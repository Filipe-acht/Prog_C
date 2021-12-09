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
    printf("\nEscolha a op��o desejada:\n");
    printf("1-Jogar\n");
    printf("2-Ver ranking\n");
    printf("3-Cadastrar palavra\n");
    printf("4-Cr�ditos\n");
    printf("5-Sair\n\n");
    printf("Op��o desejada: ");
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
            printf("Op��o invalida!\n");
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

        printf("Voc� perdeu!");
    }

}

void escolhe_forma_jogar(){
    int op_jogo;

    system("cls");

    printf("Escolha a forma de jogar:\n1-Jogar contra o computador.\n2-Jogar contra uma pessoa.\nOp��o escolhida: ");
    scanf("%d", &op_jogo);

    if(op_jogo==1){
        system("cls");
        printf("Informe o seu nome:\n");
        fflush(stdin);
        scanf(" %s",&J.jogador1);

    int op_menu_tema;

    printf("\nEscolha o tema que voc� deseja jogar:\n");
    printf("1-Objeto\n");
    printf("2-Nome\n");
    printf("3-Cidade\n");
    printf("4-Animal\n");
    printf("5-Modelo de carro\n");
    printf("6-Time de futebol\n");
    printf("7-Palavra adicionada\n");
    printf("Informe a op��o desejada: ");
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
            printf("Op��o inv�lida!");
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
        printf("\nOp��o inv�lida!\n");
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
                printf("Voc� acertou: a palavra tem a letra %c\n\n", letra);
                tela[i]=letra;
                errou=0;
            }

        }
        if(errou==1){
            printf("\nVoc� errou a palavra N�O tem a letra %c\n\n", letra);
            erros++;

        }



        if(strcmp(tela,palavra)==0){
            system("cls");
            printf("Parab�ns, o jogador(a) %s ganhou!\nA palavra era: %s\n\n",J.jogador1, palavra);
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
        printf("O tema �: %s",tema);

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
                printf("Voc� acertou: a palavra tem a letra %c\n\n", letra);
                tela[i]=letra;
                errou=0;
            }

        }
        if(errou==1){
            printf("\nVoc� errou a palavra N�O tem a letra %c\n\n", letra);
            erros++;

        }



        if(strcmp(tela,palavra)==0){
            system("cls");
            printf("\n\nParab�ns, o jogador(a) %s ganhou!\nA palavra era: %s\n\n",J.jogador1, palavra);
            ranking(J.jogador1);

            return menu();
        }

        if(erros==6){
            system("cls");
            forca(erros);
            printf("\nO jogador(a) %s perdeu.\n\n",J.jogador1);
            printf("\n\nParab�ns, o jogador(a) %s ganhou!\nA palavra era: %s\n\n",J.jogador2, palavra);
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
    printf("\n\nPrezado usu�rio nosso jogo ainda n�o consegue exibir o menu ranking de forma correta.\nInfelizmente nosso menu s� imprime o nome dos jogaroes que ganharam.\nA quantidade de vezes que seu nome aparece � a aquantidade de vezes que voc� ganhou!\n\n\n");

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

    printf("\n\n***************************************************Cr�ditos do Jogo da Forca***************************************************\n\n\n");
    printf("Trabalho apresentado �s disciplinas T�cnicas de Desenvolvimento de Algoritmos e Laborat�rio de Desenvolvimento de Algoritmos,\nno Centro Universit�rio de  Jo�o Pessoa - Unip�, \ncomo requisito parcial para obten��o de grau referente ao semestre 2021.2, \nsob a orienta��o dos Profs. Leonardo Angelo Virginio de Souto e Douglas Andrade de Menezes.\n\n");
    printf("Criadores:\n  -FILIPE NASC. COSTA SOARES\n  -NICOLY MATOS MARTINS\n  -RINALDO RODRIGUES DE CARVALHO J�NIOR\n\n");
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
