#include <stdio.h>

int main() {
    printf("                Ola, seja bem vindo ao jogo:\n----------------  Super Trunfo de Paises!  ----------------\n        Neste jogo ganha quem possuir a carta mais forte\n -\n -\n -\n -         Sao 22 cartas, divididas da seguinte maneira:\n -\n - 8 estados, cada estado sera representado com uma letra; de A a H \n - Estes estados vao ter um total de 4 cidades q tambem serao representadas, porem com os numeros de : 01 a 04 \n - Aqui vai um Ex: \n - estado de pimpimpom : A \n - cidade pao salgado : 01 \n - O codigo da cidade de Pao salgado do estado de Pimpimpom eh : A01 \n");

    char est1[2], est2[2], cod1[4], cod2[4], cid1[50], cid2[50];
    int pontos1 = 0, pontos2 = 0;
    printf("Escolha um estado e use uma letra de A a H para representalo : \n");
    scanf("%s" , est1);

    printf("\nAgora ponha essa  mesma letra, seguida de um dos numeros de 01 a 04 : \n");
    scanf("%s" , cod1);

     printf("\nQual eh o nome da cidade que voce escolhe? : \n");
    scanf("%s" , cid1);

    float popu1;
    printf("Agora me diga, qual eh o numero de sua populacao? \n");
    scanf("%f" , &popu1);

    float area1;
    printf("O quao extenso ela eh? Ponha a baixo, o numero de sua Area. \n");
    scanf("%f" , &area1);

    float pib1;
    printf("Como vai a economia dessa cidade? me fale o seu PIB \n");
    scanf("%f" , &pib1);

    int turi1;
    printf("Queria turistar la um dia, quantos pontos turitisco ela tem?\n");
    scanf("%d" , &turi1);

    printf("-\n -\n -Boa jogador! Agora vamos para a segunda carta. \n -\n ");
    
    printf("Escolha um estado e use uma letra de A a H para representalo : \n");
    scanf("%s" , est2);

    printf("\nAgora ponha essa  mesma letra, seguida de um dos numeros de 01 a 04 : \n");
    scanf("%s" , cod2);

     printf("\nQual eh o nome da cidade que voce escolhe? : \n");
    scanf("%s" , cid2);

    float popu2;
    printf("Agora me diga, qual eh o numero de sua populacao? \n");
    scanf("%f" , &popu2);

    float area2;
    printf("O quao extenso ela eh? Ponha a baixo, o numero de sua Area. \n");
    scanf("%f" , &area2);

    float pib2;
    printf("Como vai a economia dessa cidade? me fale o seu PIB \n");
    scanf("%f" , &pib2);

    int turi2;
    printf("Queria turistar la um dia, quantos pontos turistico ela tem?\n");
    scanf("%d" , &turi2);

    printf(" - \n -\n - Depois dessa longa jornada, vamos apresentar suas carta ate agora: \n - \n - \n.");

    printf("----------------  Primeira carta:  ---------------- \n - Estado : %s \n - Codigo: %s \n - Nome da Cidade : %s \n - Populacao : %.0f \n - Area : %.2f km \n - PIB : %.2f R$ \n - Numero de Pontos Turisticos : %d \n" , est1, cod1 , cid1 , popu1 , area1 , pib1 , turi1);

     printf("----------------  Segunda carta:  ---------------- \n - Estado : %s \n - Codigo: %s \n - Nome da Cidade : %s \n - Populacao : %.0f \n - Area : %.2f km \n - PIB : %.2f R$ \n - Numero de Pontos Turisticos : %d \n" , est2, cod2 , cid2 , popu2 , area2 , pib2 , turi2);
    
     printf("Vamos ver qual carta eh mais poderosa! \n - \n - \n - \n ");

     if(popu1 > popu2){
        printf("No quesito pulacao quem ganha eh a carta:  %s \n- \n" , cod1);
        pontos1++;
     } else if (popu2 > popu1){
        printf("No quesito populacao quem ganha eh a carta:  %s \n- \n" , cod2);
        pontos2++;
     } else {
        printf("No quesito populacao houve um empate! \n- \n");
     }

          if(area1 > area2){
        printf("Quem possui a maior extensao terretorial eh a carta %s \n- \n" , cod1);
        pontos1++;
     } else if (area2 > area1){
        printf("Quem possui a maior extensao terretorial eh a carta %s \n- \n" , cod2);
        pontos2++;
    }  else{
        printf("No quesito extensao terretorial houve um empate! \n- \n");
    }

        if(pib1 > pib2){
        printf("A melhor economia eh da carta %s \n- \n" , cod1);
        pontos1++;
      } else if (pib2 > pib1){
        printf("A melhor economia eh da carta %s \n- \n" , cod2);
        pontos2++;
     } else {
        printf("No quesito de melhor economia houve um empate! \n- \n");
     }

        if(turi1 > turi2){
        printf("E carta com mais pontos turisticos eh a %s \n- \n" , cod1);
        pontos1++;
        } else if (turi2 > turi1){
        printf("E carta com mais pontos turisticos eh a %s \n- \n" , cod2);
        pontos2++;
     } else {
        printf("No quesito pontos turisticos houve um empate\n -\n");
     }

     printf("\n==============================\n");
     printf("PLACAR FINAL:\nCarta %s: %d pontos\nCarta %s: %d pontos\n", cod1, pontos1, cod2, pontos2);

     if(pontos1 > pontos2){
    printf("\nA grande vencedora foi a carta %s!\n", cod1);
} else if(pontos2 > pontos1){
    printf("\nA grande vencedora foi a carta %s!\n", cod2);
} else {
    printf("\nO jogo terminou em empate!\n");
}


 


return 0;
    
}
