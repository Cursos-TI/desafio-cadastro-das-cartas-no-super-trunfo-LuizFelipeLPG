#include <stdio.h>
#include <string.h>

int main() {
    char estado1[30];
    char codigo1[10];
    char cidade1[30];     // Variáveis carta 1
    int populacao1 = 0;
    float area1 = 0.0;
    float pib1 = 0.0;
    int turistico1 = 0;
    char pais1[30];

    char estado2[30];
    char codigo2[10];
    char cidade2[30];     // Variáveis carta 2
    int populacao2 = 0;
    float area2 = 0.0;
    float pib2 = 0.0;
    int turistico2 = 0;
    char pais2[30];

    printf("** Jogo Super Trunfo **\n");

    // Entrada de dados carta 1
    printf("Digite o país da primeira carta:\n");
    scanf(" %[^\n]", pais1);

    printf("Digite o estado da primeira carta:\n");
    scanf(" %[^\n]", estado1);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigo1);

    printf("Digite a cidade da primeira carta:\n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a população da primeira carta:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira carta:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da primeira carta:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira carta:\n");
    scanf("%d", &turistico1);

    // Cálculos carta 1
    float densidadepopulacao1 = (float)populacao1 / area1;
    float pibpercapita1 = (pib1 * 1e9) / populacao1; // PIB per capita em reais
    float superpoder1 = (float)populacao1 + area1 + pib1 + (float)turistico1 + pibpercapita1 + (1.0 / densidadepopulacao1);

    // Entrada de dados carta 2
    printf("** Digite o país da segunda carta **:\n");
    scanf(" %[^\n]", pais2);

    printf("Digite o estado da segunda carta:\n");
    scanf(" %[^\n]", estado2);

    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigo2);

    printf("Digite a cidade da segunda carta:\n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a população da segunda carta:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda carta:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda carta:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda carta:\n");
    scanf("%d", &turistico2);

    // Cálculos carta 2
    float densidadepopulacao2 = (float)populacao2 / area2;
    float pibpercapita2 = (pib2 * 1e9) / populacao2; // PIB per capita em reais
    float superpoder2 = (float)populacao2 + area2 + pib2 + (float)turistico2 + pibpercapita2 + (1.0 / densidadepopulacao2);

    printf("\n\n");

    // Saída de dados carta 1
    printf("* Carta 1 *\n\n");
    printf("País: %s \n", pais1);
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos turísticos: %d \n", turistico1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacao1);
    printf("PIB per capita: %.2f reais\n", pibpercapita1);
    printf("Super poder: %.2f \n\n", superpoder1);

    // Saída de dados carta 2
    printf("* Carta 2 *\n\n");
    printf("País: %s \n", pais2);
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d \n", turistico2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacao2);
    printf("PIB per capita: %.2f reais\n", pibpercapita2);
    printf("Super poder: %.2f \n\n", superpoder2);

    // Menu de comparação
    int opcao;
    do {
        printf("\n** Comparação das cartas **\n\n");
        printf("Escolha qual atributo você quer comparar:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos turísticos\n");
        printf("5. Densidade populacional\n");
        printf("6. PIB per capita\n");
        printf("7. Super poder\n");
        printf("8. País (apenas exibição)\n");
        printf("Digite a opção (1-8):\n");
        scanf("%d", &opcao);

        if (opcao < 1 || opcao > 8) {
            printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao < 1 || opcao > 8);

    printf("\n");

    // Comparação dos atributos
    switch (opcao) {
        case 1: // População
            printf("Atributo escolhido: População\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            if (populacao1 > populacao2) {
                printf("** %s vence! **\n", pais1);
            } else if (populacao1 < populacao2) {
                printf("** %s vence! **\n", pais2);
            } else {
                printf("** Empate! **\n");
            }
            break;

        case 2: // Área
            printf("Atributo escolhido: Área\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            if (area1 > area2) {
                printf("** %s vence! **\n", pais1);
            } else if (area1 < area2) {
                printf("** %s vence! **\n", pais2);
            } else {
                printf("** Empate! **\n");
            }
            break;

        case 3: // PIB
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f bilhões de reais\n", pais1, pib1);
            printf("%s: %.2f bilhões de reais\n", pais2, pib2);
            if (pib1 > pib2) {
                printf("** %s vence! **\n", pais1);
            } else if (pib1 < pib2) {
                printf("** %s vence! **\n", pais2);
            } else {
                printf("** Empate! **\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo escolhido: Pontos turísticos\n");
            printf("%s: %d pontos\n", pais1, turistico1);
            printf("%s: %d pontos\n", pais2, turistico2);
            if (turistico1 > turistico2) {
                printf("** %s vence! **\n", pais1);
            } else if (turistico1 < turistico2) {
                printf("** %s vence! **\n", pais2);
            } else {
                printf("** Empate! **\n");
            }
            break;

        case 5: // Densidade populacional
            printf("Atributo escolhido: Densidade populacional\n");
            printf("%s: %.2f hab/km²\n", pais1, densidadepopulacao1);
            printf("%s: %.2f hab/km²\n", pais2, densidadepopulacao2);
            if (densidadepopulacao1 < densidadepopulacao2) {
                printf("** %s vence! **\n", pais1);
            } else if (densidadepopulacao1 > densidadepopulacao2) {
                printf("** %s vence! **\n", pais2);
            } else {
                printf("** Empate! **\n");
            }
            break;

        case 6: // PIB per capita
            printf("Atributo escolhido: PIB per capita\n");
            printf("%s: %.2f reais\n", pais1, pibpercapita1);
            printf("%s: %.2f reais\n", pais2, pibpercapita2);
            if (pibpercapita1 > pibpercapita2) {
                printf("** %s vence! **\n", pais1);
            } else if (pibpercapita1 < pibpercapita2) {
                printf("** %s vence! **\n", pais2);
            } else {
                printf("** Empate! **\n");
            }
            break;

        case 7: // Super poder
            printf("Atributo escolhido: Super poder\n");
            printf("%s: %.2f\n", pais1, superpoder1);
            printf("%s: %.2f\n", pais2, superpoder2);
            if (superpoder1 > superpoder2) {
                printf("** %s vence! **\n", pais1);
            } else if (superpoder1 < superpoder2) {
                printf("** %s vence! **\n", pais2);
            } else {
                printf("** Empate! **\n");
            }
            break;

        case 8: // País (apenas exibição)
            printf("Atributo escolhido: País\n");
            printf("País da carta 1: %s\n", pais1);
            printf("País da carta 2: %s\n", pais2);
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }

    return 0;
}