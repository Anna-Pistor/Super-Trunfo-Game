#include <stdio.h>

int main()
{

    char estado1, estado2;       // atribui letras a estados
    char codigo1[4], codigo2[4]; // limita ate 4 (+1)
    char cidade1[50], cidade2[50];
    int populacao1, populacao2; // int = numeros inteiros
    float area1, area2;
    float pib1, pib2;
    int pontosT1, pontosT2;

    /*
    int = %d
    float = %f
    char = %c
    char[] = %s
    */

    // carta 1
    printf("CADASTRO CARTA 1:\n");

    printf("digite um estado entre A e H:");
    scanf(" %c", &estado1);

    printf("digite o codigo da carta (ex: A01):");
    scanf(" %s", codigo1);

    printf("digite o nome da cidade:");
    scanf(" %[^\n]", cidade1);

    printf("digite a população:");
    scanf(" %d", &populacao1);

    printf("digite a area:");
    scanf(" %f", &area1);

    printf("digite o pib:");
    scanf(" %f", &pib1);

    printf("digite a quantidade de pontos turisticos:");
    scanf(" %d", &pontosT1);

    // 2

    printf("CADASTRO CARTA 2:\n");

    printf("digite um estado entre A e H:");
    scanf(" %c", &estado2);

    printf("digite o codigo da carta (ex: A01):");
    scanf(" %s", codigo2);

    printf("digite o nome da cidade:");
    scanf(" %[^\n]", cidade2);

    printf("digite a população:");
    scanf(" %d", &populacao2);

    printf("digite a area:");
    scanf(" %f", &area2);

    printf("digite o pib:");
    scanf(" %f", &pib2);

    printf("digite a quantidade de pontos turisticos:");
    scanf(" %d", &pontosT2);

    // saida de dados

    printf("\n\n---CARTAS CADASTRADAS---\n");

    printf("\n\nCARTA 1\n\n");

    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("nome da cidade: %s\n", cidade1);
    printf("população: %d\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("pib: %.2f\n", pib1);
    printf("quantidade de pontos turisticos: %d\n", pontosT1);

    printf("\n\nCARTA 2\n\n");

    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("nome da cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("quantidade de pontos turisticos: %d\n", pontosT2);

    return 0;
}