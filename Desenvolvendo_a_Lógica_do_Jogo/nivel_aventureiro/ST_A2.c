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

    // calculo

    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;
    float pibPC1 = (pib1 * 1000000000) / populacao1;
    float pibPC2 = (pib2 * 1000000000) / populacao2;

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
    printf("densidade populacional: %.2f\n", densidade1);
    printf("PIB per capta: %.2f\n", pibPC1);

    printf("\n\nCARTA 2\n\n");

    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo2);
    printf("nome da cidade: %s\n", cidade2);
    printf("população: %d\n", populacao2);
    printf("area: %.2f\n", area2);
    printf("pib: %.2f\n", pib2);
    printf("quantidade de pontos turisticos: %d\n", pontosT2);
    printf("densidade populacional: %.2f\n", densidade2);
    printf("PIB per capta: %.2f\n", pibPC2);

    // comparação/menu

    int opcao;
    printf("\n\n=== MENU DE COMPARAÇÃO===\n\n");
    printf("1 - populacao\n");
    printf("2 - area\n");
    printf("3 - pib\n");
    printf("4 - pontos turisticos\n");
    printf("5 - densidade\n");
    printf("escolha: ");
    scanf(" %d", &opcao);

    printf("\ncarta 1 %s\n", cidade1);
    printf("carta 2 %s", cidade2);

    switch (opcao)
    {
    case 1:
        printf("\nAtributo: Populacao");
        printf(" %s: %d\n", cidade1, populacao1);
        printf(" %s: %d\n", cidade2, populacao2);

        if (populacao1 > populacao2)
            printf("carta 1: %s venceu!!", cidade1);
        else
            printf("carta 2: %s venceu!!", cidade2);
        break;

        ////////////////////////////////////////////

    case 2:
        printf("\nAtributo: Area");
        printf(" %s: %.2f\n", cidade1, area1);
        printf(" %s: %.2f\n", cidade2, area2);

        if (area1 > area2)
            printf("carta 1: %s venceu!!", cidade1);
        else
            printf("carta 2: %s venceu!!", cidade2);
        break;

        ////////////////////////////////////////////

    case 3:
        printf("\nAtributo: PIB");
        printf(" %s: %.2f\n", cidade1, pib1);
        printf(" %s: %.2f\n", cidade2, pib2);

        if (pib1 > pib2)
            printf("carta 1: %s venceu!!", cidade1);
        else
            printf("carta 2: %s venceu!!", cidade2);
        break;
        ///////////////////////////////////////////

    case 4:
        printf("\nAtributo: Pontos Turisticos");
        printf(" %s: %d\n", cidade1, pontosT1);
        printf(" %s: %d\n", cidade2, pontosT2);

        if (pontosT1 > pontosT2)
            printf("carta 1: %s venceu!!", cidade1);
        else
            printf("carta 2: %s venceu!!", cidade2);
        break;

        /////////////////////////////////////////

    case 5:
        printf("\nAtributo: Densidade Populacional");
        printf(" %s: %.2f\n", cidade1, densidade1);
        printf(" %s: %.2f\n", cidade2, densidade2);

        if (densidade1 < densidade2)
            printf("carta 1: %s venceu!!", cidade1);
        else
            printf("carta 2: %s venceu!!", cidade2);
        break;

    default:
        printf("opcao invalida!");
        break;
    }

    return 0;
}