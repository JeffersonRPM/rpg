#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>

void pausar()
{
    #ifdef WIN32
    system("pause");
    #else
    system("read -p \"Pressione enter para sair\"");
    #endif
}

void limparTela()
{
    #ifdef WIN32
    system("cls");
    #else
    system("clear");
    #endif
}


void limparEntrada()
{
    #ifdef WIN64
    fflush(stdin);
    #else
    __fpurge(stdin);
    #endif
}

typedef struct
{
	char nome[100];
	int vida;
	char cinto1[20];
	char cinto2[20];
	char cinto3[20];
	char mochila3[20];
	char mochila2[20];
	char mochila1[20];
} personagem;
personagem heroi[2];

typedef struct
{
	char nome[50];
	int ataque;
	int qtdvida;
} inimigo;
inimigo guerreiro[15];

typedef struct
{

	char nome[50];
	int ataque;
	int peso;
} arma;
arma Arma[10];

typedef struct
{
	char nome[50];
	int cura;
	int peso;
} pocao;
pocao Pocao[4];

void menu_heroi()
{
        printf("\nHeroi: %s\nVida: %d\n[1]Cinto posicao 1: %s\n[2]Cinto posicao 2: %s\n[3]Cinto posicao 3: %s\n"
        "[1]Mochila posicao 1: %s\n[2]Mochila posicao 2: %s\n[3]Mochila posicao 3: %s\n",
        heroi[1].nome,heroi[1].vida,heroi[1].cinto1,heroi[1].cinto2,heroi[1].cinto3,heroi[1].mochila1,heroi[1].mochila2,heroi[1].mochila3);
}

void define_geral()
{
    int aleatorio;
	strcpy(guerreiro[0].nome,"Scorpion");
	guerreiro[0].qtdvida=80;
    guerreiro[0].ataque=10;

	strcpy(guerreiro[1].nome,"Sub-zero");
	guerreiro[1].qtdvida=80;
    guerreiro[1].ataque=15;

	strcpy(guerreiro[2].nome,"Sonia");
	guerreiro[2].qtdvida=80;
    guerreiro[2].ataque=20;

	strcpy(guerreiro[3].nome,"Jax");
	guerreiro[3].qtdvida=80;
    guerreiro[3].ataque=17;

	strcpy(guerreiro[4].nome,"Kano");
	guerreiro[4].qtdvida=80;
    guerreiro[4].ataque=20;

	strcpy(guerreiro[5].nome,"Kitana");
	guerreiro[5].qtdvida=80;
    guerreiro[5].ataque=22;

	strcpy(guerreiro[6].nome,"Liu-Kang");
	guerreiro[6].qtdvida=80;
    guerreiro[6].ataque=25;

	strcpy(guerreiro[7].nome,"jhonny Cage");
	guerreiro[7].qtdvida=80;
    guerreiro[7].ataque=26;

	strcpy(guerreiro[8].nome,"Shao Kahn");
	guerreiro[8].qtdvida=80;
    guerreiro[8].ataque=30;


	strcpy(guerreiro[9].nome,"Goro"); //Boss
	guerreiro[9].qtdvida=200;
    guerreiro[9].ataque=30;

	strcpy(Pocao[0].nome,"Pocao pequena (20hp)");
	Pocao[0].cura=20;
	Pocao[0].peso=5;
	strcpy(Pocao[1].nome,"Pocao media (40hp)");
	Pocao[1].cura=40;
	Pocao[1].peso=10;
	strcpy(Pocao[2].nome,"Pocao grande (60hp)");
	Pocao[2].cura=60;
	Pocao[2].peso=15;
	strcpy(Pocao[3].nome,"Pocao ultra (100hp)");
	Pocao[3].cura=100;
	Pocao[3].peso=20;
	strcpy(Arma[0].nome,"Graveto");
	Arma[0].ataque=10;
	Arma[0].peso=10;
	strcpy(Arma[1].nome,"Estilingue");
	Arma[1].ataque=20;
	Arma[1].peso=20;
	strcpy(Arma[2].nome,"Faca");
	Arma[2].ataque=30;
	Arma[2].peso=30;
	strcpy(Arma[3].nome,"Arco flecha");
	Arma[3].ataque=35;
	Arma[3].peso=35;
	strcpy(Arma[4].nome,"Cajado");
	Arma[4].ataque=40;
	Arma[4].peso=40;
	strcpy(Arma[5].nome,"Motoserra");
	Arma[5].ataque=45;
	Arma[5].peso=45;
	strcpy(Arma[6].nome,"Lanca chamas");
	Arma[6].ataque=50;
	Arma[6].peso=50;
	strcpy(Arma[7].nome,"AK-47");
	Arma[7].ataque=55;
	Arma[7].peso=55;
	strcpy(Arma[8].nome,"Espada");
	Arma[8].ataque=60;
	Arma[8].peso=60;
	strcpy(Arma[9].nome,"Bazuca");
	Arma[9].ataque=100;
	Arma[9].peso=100;

	strcpy(heroi[1].cinto1,"NULL");
	strcpy(heroi[1].cinto2,"NULL");
	strcpy(heroi[1].cinto3,"NULL");
	strcpy(heroi[1].mochila1,"NULL");
	strcpy(heroi[1].mochila2,"NULL");
	strcpy(heroi[1].mochila3,"NULL");
}
void armazenaa(int aleatorio){
int armazena;
printf("\nDeseja armazenar: 1 - Cinto  2 - Mochila\n");
			scanf("%d",&armazena);
			if (armazena==1)
            {
                if(strcmp(heroi[1].cinto1,"NULL")==0){
                strcpy(heroi[1].cinto1,Arma[aleatorio].nome);
                menu_heroi();
                printf("\n");}
                else if(strcmp(heroi[1].cinto2,"NULL")==0){
                strcpy(heroi[1].cinto2,Arma[aleatorio].nome);
                menu_heroi();
                printf("\n");}
                else if(strcmp(heroi[1].cinto3,"NULL")==0){
                strcpy(heroi[1].cinto3,Arma[aleatorio].nome);
                menu_heroi();
                printf("\n");}
                else{
                printf("Voce jogou fora %s e armazenou %s",heroi[1].cinto1,Arma[aleatorio].nome);
                strcpy(heroi[1].cinto1,Arma[aleatorio].nome);
                menu_heroi();
                printf("\n");}
            }


            else if(armazena==2){

                if(strcmp(heroi[1].mochila3,"NULL")!=0){
                    if(strcmp(heroi[1].mochila2,"NULL")!=0){
                        strcpy(heroi[1].mochila1,Arma[aleatorio].nome);
                        menu_heroi();
                        printf("\n");}
                    else if(strcmp(heroi[1].mochila2,"NULL")==0){
                        strcpy(heroi[1].mochila2,Arma[aleatorio].nome);
                        menu_heroi();
                        printf("\n");}
                        }
                else
                        strcpy(heroi[1].mochila3,Arma[aleatorio].nome);
                        menu_heroi();
                        printf("\n");
            }


}

int ataca(int escolhe,int guer){
printf("A batalha comecou\n");
do{
    guerreiro[guer].qtdvida=guerreiro[guer].qtdvida-Arma[escolhe].ataque;
    if (guerreiro[guer].qtdvida>=0)
        printf("%s.....Vida: %d\n",guerreiro[guer].nome,guerreiro[guer].qtdvida);
    heroi[1].vida=heroi[1].vida-guerreiro[guer].ataque;
    if(heroi[1].vida>=0)
        printf("%s.....Vida: %d\n",heroi[1].nome,heroi[1].vida);
    if (heroi[1].vida<=0){
        printf("GAME OVER");
        return 0;}
    else if(guerreiro[guer].qtdvida<=0){
        printf("Voce venceu e aumentou sua vida para 100");
        heroi[1].vida=100;
        printf("\n");
        return 1;}
}while((guerreiro[guer].qtdvida>0)||(heroi[1].vida>0));

    }

void nivel2(int aleatorio){
    int escolhe=0,verifica, inim,anterior=0;
    printf("Voce encontrou uma caixa\n");
    anterior=aleatorio;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 3)+5;
    printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleatorio].nome, Arma[aleatorio].ataque, Arma[aleatorio].peso);
    armazenaa(aleatorio);

    printf("Deseja usar essa arma? 1-Sim  2-Nao");

    scanf("%d",&escolhe);
        if(escolhe==1){
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[5].nome, guerreiro[5].qtdvida, guerreiro[5].ataque);
            verifica=ataca(aleatorio,inim=5);
            if(verifica==0)
            return;}
        else{
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[5].nome, guerreiro[5].qtdvida, guerreiro[5].ataque);
            verifica=ataca(anterior,inim=5);
            if(verifica==0)
            return;}

        printf("\n..........................................................................................\n");
        printf("Voce encontrou a caixa 2\n");
        anterior=aleatorio;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 3)+7;
    printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleatorio].nome, Arma[aleatorio].ataque, Arma[aleatorio].peso);
    armazenaa(aleatorio);

    printf("Deseja usar essa arma? 1-Sim  2-Nao");
    scanf("%d",&escolhe);
        if(escolhe==1){
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[7].nome, guerreiro[7].qtdvida, guerreiro[7].ataque);
            verifica=ataca(aleatorio,inim=7);}
        else{
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[7].nome, guerreiro[7].qtdvida, guerreiro[7].ataque);
            verifica=ataca(anterior,inim=7);
        }
        if(verifica==0)
            return;

        printf("\n..........................................................................................\n");
        printf("Voce encontrou a caixa 3\n");
        anterior=aleatorio;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 3)+7;
    printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleatorio].nome, Arma[aleatorio].ataque, Arma[aleatorio].peso);
    armazenaa(aleatorio);

    printf("Deseja usar essa arma? 1-Sim  2-Nao");
    scanf("%d",&escolhe);
        if(escolhe==1){
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[9].nome, guerreiro[9].qtdvida, guerreiro[9].ataque);
            ataca(aleatorio,inim=9);}
            if(heroi[1].vida>0)
                printf("VOCE VENCEU O NIVEL");
        else{
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[9].nome, guerreiro[9].qtdvida, guerreiro[9].ataque);
            ataca(anterior,inim=9);
            if(heroi[1].vida>0)
                printf("\n\nVOCE VENCEU O NIVEL");


        }
}




void nivel1(){
    int aleatorio,verifica, escolhe=0, inim,anterior=0;
    printf("Voce encontrou uma caixa\n");
    anterior=aleatorio;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 3);
    printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleatorio].nome, Arma[aleatorio].ataque, Arma[aleatorio].peso);
    armazenaa(aleatorio);

    printf("Deseja usar essa arma? 1-Sim  2-Nao");
    scanf("%d",&escolhe);
        if(escolhe==1){
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[0].nome, guerreiro[0].qtdvida, guerreiro[0].ataque);
            ataca(aleatorio,inim=0);}
        else{
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[0].nome, guerreiro[0].qtdvida, guerreiro[0].ataque);
            ataca(anterior,inim=0);}


        printf("\n..........................................................................................\n");
        printf("Voce encontrou a caixa 2\n");
        anterior=aleatorio;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 3);
    printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleatorio].nome, Arma[aleatorio].ataque, Arma[aleatorio].peso);
    armazenaa(aleatorio);

    printf("Deseja usar essa arma? 1-Sim  2-Nao");
    scanf("%d",&escolhe);
        if(escolhe==1){
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[2].nome, guerreiro[2].qtdvida, guerreiro[2].ataque);
            verifica=ataca(aleatorio,inim=2);}
        else{
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[2].nome, guerreiro[2].qtdvida, guerreiro[2].ataque);
            verifica=ataca(anterior,inim=2);
        }
        if(verifica==0)
            return;

        printf("\n..........................................................................................\n");
        printf("Voce encontrou a caixa 3\n");
        anterior=aleatorio;
    srand((unsigned)time(NULL));
    aleatorio = (rand() % 3)+5;
    printf("Voce obteve a arma: %s\nDano: %d\nPeso: %d\n",Arma[aleatorio].nome, Arma[aleatorio].ataque, Arma[aleatorio].peso);
    armazenaa(aleatorio);

    printf("Deseja usar essa arma? 1-Sim  2-Nao");

    scanf("%d",&escolhe);
        if(escolhe==1){
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[6].nome, guerreiro[6].qtdvida, guerreiro[6].ataque);
            ataca(aleatorio,inim=6);
            if(heroi[1].vida>0){
                printf("VOCE VENCEU O NIVEL");
                printf(".\n..\n...\n....\n.....\n......\n........\n.........\n..........\n...........\n\n");
                nivel2(aleatorio);}
            else
                return;}
        else{
            printf("\nVoce encontrou o: %s\nVida: %d\nAtaque: %d\n", guerreiro[6].nome, guerreiro[6].qtdvida, guerreiro[6].ataque);
            ataca(aleatorio,inim=6);
            if(heroi[1].vida>0){
                printf("\n\nVOCE VENCEU O NIVEL");
                 printf(".\n..\n...\n....\n.....\n......\n........\n.........\n..........\n...........\n\n");
                nivel2(aleatorio);}
            else
                return;


        }
}






int main(){

printf("Caio Marcelo da Silva de Jesus - PC3011259\n\nJefferson Roberto Piaia Martines - PC3015602\n\n"
           "Murilo Formaggio Feliciano - PC3006875\n\nThiago Souza Peixoto - PC3003353\n\n");
    pausar();
    limparTela();

    printf("***************Mortal Kombat***************\n\n");
    printf("Escolha o nome do seu personagem: ");
    gets(heroi[1].nome);
    heroi[1].vida=100;

    printf("\n\n************Instrucoes basicas*************"
           "\n\n1 - O primeiro que ficar com 0 de vida, morre.\n\n2 - So e possivel utilizar o ultimo item"
           " armazenados na mochila.\n    Caso queira usar um item adicinado anteriormente, tera que descartar o item antecessor."
           "\n    E aconselhado guardar as pocoes no cinto e as armas na mochila, tente sempre ficar com a arma mais forte."
           "\n\n3 - Voce pode armazenar itens em seu cinto, mas tem uma capacidade maxima permitida que sao 3 slots."
           "\n\n4 - O objetivo do jogo e derrotar todos os inimigos, voce tera pocoes para recuperar sua vida ao longo das fases.\n");

    define_geral();
    printf("\n");

    printf("Nivel 1");
    nivel1();
    pausar();

}
