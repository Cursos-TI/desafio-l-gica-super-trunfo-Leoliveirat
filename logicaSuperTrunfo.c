#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    char pais1[30], pais2[30];
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    float area1, pib1, area2, pib2, pibpercapta1, pibpercapta2, densidade1, densidade2, superpoder1,superpoder2;
    int opcao, opcao2, opcao3, opcao4;
    char* resultado;

    printf ("*#*# BEM VINDO AO SUPER TRUNFO #*#* \n");
    printf ("\n");
    printf ("O Super Trunfo é um jogo no qual os jogadores comparam as propriedades de suas cartas\n"); 
    printf ("para determinar quem tem a carta mais forte. Cada carta\n"); 
    printf ("possui várias propriedades. Vence a carta com o maior valor. Você poderá comparar,\n");
    printf ("1 atributo ou 2 atributos entre as cartas para fazer a disputa, \n"); 
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

         //CÁLCULOS PARA AS COMPARAÇÕES E DEFINIÇÃO DA VENCEDORA
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
          
//MENU DE ESCOLHA DOS 2 ATRIBUTOS
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

printf("Digite o número do primeiro atributo: \n");
scanf("%d", &opcao3);
printf("Digite o número do segundo atributo: \n");
scanf("%d", &opcao4);


        //COMPARAÇÕES DE 2 ATRIBUTOS E CÁLCULOS PARA A DEFINIÇÃO DA VENCEDORA
        if (opcao3 == 1 && opcao4 == 2) { 
            resultado = (populacao1 > populacao2 && area1 > area2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 1 && opcao4 == 3) {
            resultado = (populacao1 > populacao2 && pib1 > pib2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 1 && opcao4 == 4) {
            resultado = (populacao1 > populacao2 && pontosturisticos1 > pontosturisticos2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 1 && opcao4 == 5) {
            resultado = (populacao1 > populacao2 && densidade1 > densidade2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 1 && opcao4 == 6) {
            resultado = (populacao1 > populacao2 && pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 1 && opcao4 == 7) {
            resultado = (populacao1 > populacao2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        }
        else if (opcao3 == 2 && opcao4 == 3) { 
            resultado = (area1 > area2 && pib1 > pib2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 2 && opcao4 == 4) { 
            resultado = (area1 > area2 && pontosturisticos1 > pontosturisticos2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 2 && opcao4 == 5) { 
            resultado = (area1 > area2 && densidade1 > densidade2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 2 && opcao4 == 6) { 
            resultado = (area1 > area2 && pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 2 && opcao4 == 7) { 
            resultado = (area1 > area2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        }
        else if (opcao3 == 3 && opcao4 == 4) {
            resultado = (pib1 > pib2 && pontosturisticos1 > pontosturisticos2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 3 && opcao4 == 5) {
            resultado = (pib1 > pib2 && densidade1 > densidade2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 3 && opcao4 == 6) {
            resultado = (pib1 > pib2 && pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 3 && opcao4 == 7) {
            resultado = (pib1 > pib2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        }
        else if (opcao3 == 4 && opcao4 == 5) {
            resultado = (pontosturisticos1 > pontosturisticos2 && densidade1 > densidade2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 4 && opcao4 == 6) {
            resultado = (pontosturisticos1 > pontosturisticos2 && pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 4 && opcao4 == 7) {
            resultado = (pontosturisticos1 > pontosturisticos2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        }
        else if (opcao3 == 5 && opcao4 == 6) {
            resultado = (densidade1 > densidade2 && pibpercapta1 > pibpercapta2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        } 
        else if (opcao3 == 5 && opcao4 == 7) {
            resultado = (densidade1 > densidade2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        }
        else if (opcao3 == 6 && opcao4 == 7) {
            resultado = (pibpercapta1 > pibpercapta2 && superpoder1 > superpoder2) ? "A CARTA 1 É A VENCEDORA!" : "A CARTA 2 É A VENCEDORA!";
            printf("Resultado: %s\n", resultado);
        }
        break;

}       



    return 0;

}
