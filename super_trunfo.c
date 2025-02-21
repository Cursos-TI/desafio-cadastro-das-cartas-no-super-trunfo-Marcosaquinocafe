#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nomeCidade1[50], nomeCidade2[5];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Leitura dos dados da primeira carta

    printf("Digite as informações da primeira carta:\n");

    printf("Estado: ");
    scanf(" %c", &estado1);  

    printf("Código: ");
    scanf("%4s", &codigo1);  

    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade1);  

    printf("População da cidade: ");
    scanf("%d", &populacao1);  

    printf("Área: ");
    scanf("%f", &area1);  

    printf("PIB: ");
    scanf("%f", &pib1);  

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);  

    // Leitura dos dados da segunda carta

    printf("\nDigite as informações da segunda carta:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);  

    printf("Código: ");
    scanf("%4s", &codigo2);  

    printf("Nome da Cidade: ");
    scanf("%s", &nomeCidade2);  

    printf("População da cidade: ");
    scanf("%d", &populacao2);  

    printf("Área: ");
    scanf("%f", &area2);  
    printf("PIB: ");
    scanf("%f", &pib2);  
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);  

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}