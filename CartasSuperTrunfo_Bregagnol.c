#include <stdio.h>
#include <string.h>

int main() {
// Declaração das variáveis para a Carta 1
char estado1[10];
char codigo1[50];
char nomeCidade1[50];
unsigned long int populacao1;
float area1;
float pib1;
int pontosTuristicos1;
float densidadePopulacional1;
float pibPerCapita1;
float superPoder1;

// Declaração das variáveis para a Carta 2
char estado2[10];
char codigo2[50];
char nomeCidade2[50];
unsigned long int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
float densidadePopulacional2;
float pibPerCapita2;
float superPoder2;

// Entrada de dados para a Carta 1
printf("Insira os dados da Carta 1:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado1);
printf("Código da Carta (ex: A01): ");
scanf("%s", codigo1);
printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade1);
printf("População: ");
scanf("%lu", &populacao1); // Corrigido para %lu
printf("Área (em km²): ");
scanf("%f", &area1);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib1);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos1);

// Cálculos da Carta 1
densidadePopulacional1 = (float)populacao1 / area1;
pibPerCapita1 = (float)pib1 * 1000000000 / populacao1; // Ajustado para converter bilhões
superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

// Entrada de dados para a Carta 2
printf("\nInsira os dados da Carta 2:\n");
printf("Estado (A-H): ");
scanf(" %c", &estado2);
printf("Código da Carta (ex: B02): ");
scanf("%s", codigo2);
printf("Nome da Cidade: ");
scanf(" %[^\n]", nomeCidade2);
printf("População: ");
scanf("%lu", &populacao2); // Corrigido para %lu
printf("Área (em km²): ");
scanf("%f", &area2);
printf("PIB (em bilhões de reais): ");
scanf("%f", &pib2);
printf("Número de Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);

// Cálculos da Carta 2
densidadePopulacional2 = (float)populacao2 / area2;
pibPerCapita2 = (float)pib2 * 1000000000 / populacao2; // Ajustado para converter bilhões
superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

// Exibição dos dados da Carta 1
printf("\nCarta 1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %lu\n", populacao1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

// Exibição dos dados da Carta 2
printf("\nCarta 2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %lu\n", populacao2);
printf("Área: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

// Comparação das Cartas (Resultado 1 para Verdadeiro e 0 para Falso)
printf("\n\nComparação de Cartas:\n");
printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);
printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadePopulacional1 < densidadePopulacional2);
printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

return 0;
}
