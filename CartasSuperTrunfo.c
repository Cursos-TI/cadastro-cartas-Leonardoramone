#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  // Carta 1:
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //Carta 2:
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

  // Área para entrada de dados
   //Ler os dados para a variavel 1:
    printf("Digite a letra do Estado 1 - De A a H: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta 1: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &cidade1);

    printf("Digite a população 1: \n");
    scanf("%d", &populacao1);

    printf("Digite a área 1: \n");
    scanf("%f", &area1);

    printf("Digite o PIB 1: \n");
    scanf("%f", &pib1);

    printf("Digite Qtde dos Pontos Turísticos 1: \n");
    scanf("%d", &pontosTuristicos1);


    //Ler os dados para a variável 2
    printf("Digite a letra do Estado 2 - De A a H: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta 2: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Digite a população 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB 2: \n");
    scanf("%f", &pib2);

    printf("Digite Qtde dos Pontos Turísticos 2: \n");
    scanf("%d", &pontosTuristicos2);

  // Área para exibição dos dados da cidade
  printf("\n Carta 1: \n Letra do Estado: %c\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Pontos Turísticos: %d\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1);
    printf("\n Carta 2: \n Letra do Estado: %c\n Código da carta: %s\n Nome da cidade: %s\n População: %d\n Área: %f\n PIB: %f\n Pontos Turísticos: %d\n\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2);

  
return 0;
} 
