#include <stdio.h>

int main() {
    char estado1[30], estado2[30];
    char codigo1[10], codigo2[10];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Leitura dos dados da primeira carta 
    
    printf("Digite as informações da primeira carta:\n");

    printf("Estado: ");
    fgets(estado1, 30, stdin);

    printf("Código: ");
    scanf("%s", codigo1);
    getchar(); // Limpa o ENTER

    printf("Nome da Cidade: ");
    fgets(nomecidade1, 50, stdin);

    printf("População da cidade: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    getchar(); // Limpa o ENTER

    printf("\nDigite as informações da segunda carta:\n");

    printf("Estado: ");
    fgets(estado2, 30, stdin);

    printf("Código: ");
    scanf("%s", codigo2);
    getchar(); // Limpa o ENTER

    printf("Nome da Cidade: ");
    fgets(nomecidade2, 50, stdin);

    printf("População da cidade: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\n--- Cálculos ---\n");
    printf("Carta 1 - Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Carta 1 - PIB per capita: R$ %.2f\n", pibPerCapita1);

    printf("Carta 2 - Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Carta 2 - PIB per capita: R$ %.2f\n", pibPerCapita2);

    // Comparação pelo PIB per capita
    printf("\n--- Comparação pelo PIB per capita ---\n");
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Carta 1 vence! (Maior PIB per capita)\n");
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Carta 2 vence! (Maior PIB per capita)\n");
    } else {
        printf("Empate no PIB per capita.\n");
    }

    return 0;
}