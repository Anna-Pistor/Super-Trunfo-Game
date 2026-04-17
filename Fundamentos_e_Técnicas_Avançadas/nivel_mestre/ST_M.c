#include <stdio.h>

int main()
{

    char estado1, estado2;       // atribui letras a estados
    char codigo1[4], codigo2[4]; // limita ate 4 (+1)
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; // int = numeros inteiros
    float area1, area2;
    float pib1, pib2;
    int pontosT1, pontosT2;

    /*
    int = %d
    float = %f
    char = %c
    char[] = %s
    unsigned long int = %lu
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
    scanf(" %lu", &populacao1);

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
    scanf(" %lu", &populacao2);

    printf("digite a area:");
    scanf(" %f", &area2);

    printf("digite o pib:");
    scanf(" %f", &pib2);

    printf("digite a quantidade de pontos turisticos:");
    scanf(" %d", &pontosT2);

    // calculo

    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    float pibPC1 = (pib1 * 1000000000.0) / (float)populacao1;
    float pibPC2 = (pib2 * 1000000000.0) / (float)populacao2;

    float SP1 = (float)populacao1 + area1 + pib1 + pontosT1 + (1.0 / densidade1);
    float SP2 = (float)populacao2 + area2 + pib2 + pontosT2 + (1.0 / densidade2);

    // comparações

    int wP = populacao1 > populacao2;
    int wA = area1 > area2;
    int wPib = pib1 > pib2;
    int wPont = pontosT1 > pontosT2;
    int wSP = SP1 > SP2;
    int wD = densidade1 < densidade2;
    int wPPC = pibPC1 > pibPC2;

    // saida de dados

    printf("\n\n---CARTAS CADASTRADAS---\n");

    printf("\n\nCARTA 1\n\n");

    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo1);
    printf("nome da cidade: %s\n", cidade1);
    printf("população: %lu\n", populacao1);
    printf("area: %.2f\n", area1);
    printf("pib: %.2f\n", pib1);
    printf("quantidade de pontos turisticos: %d\n", pontosT1);
    printf("densidade populacional: %.2f\n", densidade1);
    printf("PIB per capta: %.2f\n", pibPC1);
    printf("SUPER PODER: %.2f\n", SP1);

    printf("\n\nCARTA 2\n\n");

    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("nome da cidade: %s\n", cidade2);
    printf("população: %lu\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("quantidade de pontos turisticos: %d\n", pontosT2);
    printf("densidade populacional: %.2f\n", densidade2);
    printf("PIB per capta: %.2f\n", pibPC2);
    printf("SUPER PODER: %.2f\n\n\n", SP2);

    // coparação

    printf("\n\n---comparação de cartas---/n/n");

    printf("população: Carta %d venceu (%d)", 2 - wP, wP);
    printf("\narea: Carta %d venceu (%d)", 2 - wA, wA);
    printf("\nPIB: Carta %d venceu (%d)", 2 - wPib, wPib);
    printf("\npontos turisticos: Carta %d venceu (%d)", 2 - wPont, wPont);
    printf("\ndensidade populacional: Carta %d venceu (%d)", 2 - wD, wD);
    printf("\nPIB per capta: Carta %d venceu (%d)", 2 - wPPC, wPPC);
    printf("\nsuper poder: Carta %d venceu (%d)", 2 - wSP, wSP);

    return 0;
}