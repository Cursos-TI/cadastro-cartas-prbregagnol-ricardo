#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades

// Declaração das variáveis para a Carta 1
char estado1;
char codigo1[4];
char nomeCidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontosTuristicos1;
float densidadePopulacional1; 
float pibPerCapita1;
float superPoder1;
  
// Declaração das variáveis para a Carta 2
char estado2;
char codigo2[4];
char nomeCidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
float densidadePopulacional2; 
float pibPerCapita2;
float superPoder2;
  
// Área para entrada de dados 
// Entrada de dados para a Carta 1
printf("Olá Mundo, no codespace\n");
printf("Insira os dados da Carta 1:\n");
printf("Estado (A-H):Rio Grande do Sul ");
scanf(" %c", &estado1);
printf("Código da Carta (ex: A01): A01 ");
scanf("%s", codigo1);
printf("Nome da Cidade: Porto Alegre ");
scanf(" %[^\n]", nomeCidade1); // Lê string com espaços
printf("População:1330000");
scanf("%d", &populacao1);
printf("Área (em km²): 495,39 ");
scanf("%f", &area1);
printf("PIB (em bilhões de reais): 90 ");
scanf("%f", &pib1);
printf("Número de Pontos Turísticos:10 ");
scanf("%d", &pontosTuristicos1);

 // Cálculos da Carta 1
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (float)pib1 / populacao1;
  
  superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

// Entrada de dados para a Carta 2
printf("\nInsira os dados da Carta 2:\n");
printf("Estado (A-H):Santa Catarina ");
scanf(" %c", &estado2);
printf("Código da Carta (ex: B02):B02 ");
scanf("%s", codigo2);
printf("Nome da Cidade: Florianópolis");
scanf(" %[^\n]", nomeCidade2); // Lê string com espaços
printf("População:573.211 ");
scanf("%d", &populacao2);
printf("Área (em km²):674,8 ");
scanf("%f", &area2);
printf("PIB (em bilhões de reais):31,19");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: 42 ");
scanf("%d", &pontosTuristicos2);

// Cálculos da Carta 2
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (float)pib2 / populacao2;
  superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

// Área para exibição dos dados da cidade
// Exibição dos dados da Carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
printf("PIB per Capita: %.2f\n", pibPerCapita1);

// Exibição dos dados da Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2f\n", pibPerCapita2);

// --- Exibição e Comparação ---
    printf("\n\nComparação de Cartas:\n");
    
    // Para Densidade, o menor valor vence
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);
  
return 0;
}
