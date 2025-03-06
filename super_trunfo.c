#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomecidade1[50], nomecidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Leitura dos dados da primeira carta

    printf("Digite as informações da primeira carta:\n");

    printf("Estado: ");
    scanf("%s", &estado1);  

    printf("Código: ");
    scanf("%s", &codigo1);  

    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade1);  

    printf("População da cidade: ");
    scanf("%d", &populacao1);  

    printf("Área: ");
    scanf("%f", &area1);  

    printf("PIB: ");
    scanf("%f", &pib1);  

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);  

    // Leitura dos dados da segunda carta

    printf("\nDigite as informações da segunda carta:\n");

    printf("Estado: ");
    scanf("%s", &estado2);  

    printf("Código: ");
    scanf("%s", &codigo2);  

    printf("Nome da Cidade: ");
    scanf("%s", &nomecidade2);  

    printf("População da cidade: ");
    scanf("%d", &populacao2);  

    printf("Área: ");
    scanf("%f", &area2);  
    printf("PIB: ");
    scanf("%f", &pib2);  
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);  

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}