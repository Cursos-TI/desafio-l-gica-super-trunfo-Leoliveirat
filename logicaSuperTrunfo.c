#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char pais1[30], pais2[30];
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2, pibpercapta1, pibpercapta2, densidade1, densidade2, superpoder1,superpoder2;
    int opcao, opcao2, opcao3;
    char* resultado;

    printf ("*#*# BEM VINDO AO SUPER TRUNFO #*#* \n");
    printf ("\n");
    printf ("O Super Trunfo é um jogo no qual os jogadores comparam as propriedades de suas cartas\n"); 
    printf ("para determinar quem tem a mais forte. Cada carta\n"); 
    printf ("possui várias propriedades. Vence a carta com o maior valor. Você poderá comparar\n");
    printf ("somente 1 atributo entre as cartas para fazer a disputa, ou 2 atributos\n"); 
    printf ("\n");
    printf ("VAMOS JOGAR?\n");
    printf ("\n");
    printf ("Primeiro passo será cadastrar as cartas! \n");
    printf ("\n");

    
//CADASTRO DAS CARTAS

    //CARTA 1

printf ("CADASTRE A CARTA 1 \n");

printf("Digite o País: \n");
getchar();
fgets(pais1, sizeof(pais1), stdin);

printf("Digite sua populção: \n");
scanf("%d", &populacao1);

printf("Digite a área em Km²: \n");
scanf("%f", &area1);

printf("Digite o PIB: \n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turísticos \n");
scanf("%d", &pontosturisticos1);

densidade1 = populacao1 / area1;
printf("Densidade Populacional: %f Pessoas/km²\n", densidade1);
printf("\n");

pibpercapta1 = pib1 / populacao1;
printf("PIB per capta: %f Reais\n", pibpercapta1);
printf("\n");

superpoder1 = (pontosturisticos1 + area1 + pib1 + densidade1 + pibpercapta1);
printf("Super poder: %f \n", superpoder1);

printf("\n");

//CARTA 2

printf ("CADASTRE A CARTA 2 \n");

printf("Digite o País: \n");
getchar();
fgets(pais2, sizeof(pais2), stdin);

printf("Digite sua populção: \n");
scanf("%d", &populacao2);

printf("Digite a área em Km²: \n");
scanf("%f", &area2);

printf("Digite o PIB: \n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turísticos \n");
scanf("%d", &pontosturisticos2);

densidade2 = populacao2 / area2;
printf("Densidade Populacional: %f Pessoas/km²\n", densidade2);
printf("\n");

pibpercapta2 = pib2 / populacao2;
printf("PIB per capta: %f Reais\n", pibpercapta2);
printf("\n");

superpoder2 = (pontosturisticos2 + area2 + pib2 + densidade2 + pibpercapta2);
printf("Super poder: %f \n", superpoder2);

printf("\n");



//MENU DE ESCOLHA DO MODO DE COMPARAÇÃO

  printf("Deseja escolher um ou dois atributos? Escolha a opção digitando 1 ou 2\n");
  printf("1 - Um atributo \n");
  printf("2 - Dois atributos\n");
  scanf("%d", &opcao);

//MENU DE ESCOLHA DOS ATRIBUTOS
  

switch (opcao) {
case 1:
printf("Escolha o atributo que você deseja comparar, Escolha digitando o número da opção.\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Populacional\n");
printf("6 - PIB Per capta\n");
printf("7 - Super poder\n");
printf("\n");
printf("Digite o número do atributo: \n");
scanf("%d", &opcao2);

        // Agora AS COMPARAÇÕES
         if (opcao2 == 1) {
            resultado = (populacao1 > populacao2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } else if (opcao2 == 2) {
            resultado = (area1 > area2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } else if (opcao2 == 3) {
            resultado = (pib1 > pib2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } else if (opcao2 == 4) {
            resultado = (pontosturisticos1 > pontosturisticos2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } else if (opcao2 == 5) {
            resultado = (densidade1 > densidade2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } else if (opcao2 == 6) {
            resultado = (pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } else if (opcao2 == 7) {
            resultado = (superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } else {
            printf("Opção inválida.\n");
        }
        break;
          
          
          //MENU DE ESCOLHA DE 2 ATRIBUTOS
case 2: 
printf("Escolha os dois atributos que você deseja comparar, Escolha digitando o número da opção.\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos Turísticos\n");
printf("5 - Densidade Populacional\n");
printf("6 - PIB Per capta\n");
printf("7 - Super poder\n");
printf("\n");


          //****PROFESSOR, ATÉ AQUI EU FIZ SOZINHO E POR CONTA PRÓPRIA 
          // MAS, CONFESSO QUE A PARTIR DAQUI, EU TIVE UMA DIFICULDADE MAIOR 
          //DEI UMA TRAVADA E ACABEI UTILIZANDO PELA PRIMEIRA VEZ A IA PARA ME AUXILIAR
          //PELO MENOS EM COMO MONTAR ESSA LOGICA, POIS EU ESTAVA PENSANDO EM FAZER
          //ATRAVES DE SWITCH, MAS NAO ESTAVA CONSEGUINDO CHEGAR A UMA LOGICA

          // Perguntar para o usuário escolher os dois atributos
          printf("Digite o número do primeiro atributo: \n");
          scanf("%d", &opcao2);
          printf("Digite o número do segundo atributo: \n");
          scanf("%d", &opcao3);

          // Comparar os dois atributos escolhidos
          if (opcao2 == 1 && opcao3 == 2) { // População e Área
              resultado = (populacao1 > populacao2 && area1 > area2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 1 && opcao3 == 3) { // População e PIB
              resultado = (populacao1 > populacao2 && pib1 > pib2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 1 && opcao3 == 4) { // População e Pontos Turísticos
              resultado = (populacao1 > populacao2 && pontosturisticos1 > pontosturisticos2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 1 && opcao3 == 5) { // População e Densidade
              resultado = (populacao1 > populacao2 && densidade1 > densidade2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 1 && opcao3 == 6) { // População e PIB per capta
              resultado = (populacao1 > populacao2 && pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 1 && opcao3 == 7) { // População e Super poder
              resultado = (populacao1 > populacao2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 2 && opcao3 == 3) { // Área e PIB
              resultado = (area1 > area2 && pib1 > pib2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 2 && opcao3 == 4) { // Área e Pontos Turísticos
              resultado = (area1 > area2 && pontosturisticos1 > pontosturisticos2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 2 && opcao3 == 5) { // Área e Densidade
              resultado = (area1 > area2 && densidade1 > densidade2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 2 && opcao3 == 6) { // Área e PIB per capta
              resultado = (area1 > area2 && pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 2 && opcao3 == 7) { // Área e Super poder
              resultado = (area1 > area2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 3 && opcao3 == 4) { // PIB e Pontos Turísticos
              resultado = (pib1 > pib2 && pontosturisticos1 > pontosturisticos2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 3 && opcao3 == 5) { // PIB e Densidade
              resultado = (pib1 > pib2 && densidade1 > densidade2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 3 && opcao3 == 6) { // PIB e PIB per capta
              resultado = (pib1 > pib2 && pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          } else if (opcao2 == 3 && opcao3 == 7) { // PIB e Super poder
              resultado = (pib1 > pib2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
              printf("Resultado: %s\n", resultado);
          }
          break;
  }        



    return 0;

}
