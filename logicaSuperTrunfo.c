#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Variáveis
    char estado[20], codigocarta[10], nome[30];
    int populacao, pontos;
    float area, pib;

    // Carta 1 (entrada manual)
    printf("Digite a SIGLA do ESTADO da carta: ");
    scanf("%s", estado);
    printf("Digite o CODIGO da carta: ");
    scanf("%s", codigocarta);
    printf("Digite o NOME da CIDADE: ");
    scanf("%s", nome);
    printf("Digite a POPULACAO da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a AREA da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de PONTOS TURISTICOS: ");
    scanf("%d", &pontos);

    // Cálculos da carta 1
    float PIBCAP = pib / populacao;
    float DEN1 = populacao / area;
    float superTrunfo = area + pib + PIBCAP + (1.0 / DEN1);

    // Carta 2 (gerada automaticamente)
    char estado2[20] = "SP";
    char codigocarta2[10] = "SP02";
    char nome2[30] = "Santos";
    int populacao2, pontos2;
    float area2, pib2;

    srand(time(NULL));
    populacao2 = rand() % 1000000 + 10000;
    area2 = rand() % 5000 + 100;
    pib2 = rand() % 100000 + 5000;
    pontos2 = rand() % 20;

    float PIBCAP2 = pib2 / populacao2;
    float DEN2 = populacao2 / area2;
    float superTrunfo2 = area2 + pib2 + PIBCAP2 + (1.0 / DEN2);

    // Exibição das cartas
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", estado, codigocarta, nome, populacao, area, pib, pontos);
    printf("PIB per Capita: %.2f\nDensidade Populacional: %.2f\nSuper Trunfo: %.2f\n", PIBCAP, DEN1, superTrunfo);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f\nPIB: %.2f\nPontos Turisticos: %d\n", estado2, codigocarta2, nome2, populacao2, area2, pib2, pontos2);
    printf("PIB per Capita: %.2f\nDensidade Populacional: %.2f\nSuper Trunfo: %.2f\n", PIBCAP2, DEN2, superTrunfo2);

    // Escolha do atributo
    int opcao2;
    printf("\nDigite o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - PIB per Capita\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - Super Trunfo\n");
    printf("7 - Pontos Turísticos\n");
    scanf("%d", &opcao2);

    // Comparações
    switch (opcao2) {
        case 1: // População
            if (populacao > populacao2) printf("Voce GANHOU!\n");
            else if (populacao < populacao2) printf("Voce PERDEU!\n");
            else printf("Empate!\n");
            break;
        case 2: // Área
            if (area > area2) printf("Voce GANHOU!\n");
            else if (area < area2) printf("Voce PERDEU!\n");
            else printf("Empate!\n");
            break;
        case 3: // PIB
            if (pib > pib2) printf("Voce GANHOU!\n");
            else if (pib < pib2) printf("Voce PERDEU!\n");
            else printf("Empate!\n");
            break;
        case 4: // PIB per Capita
            if (PIBCAP > PIBCAP2) printf("Voce GANHOU!\n");
            else if (PIBCAP < PIBCAP2) printf("Voce PERDEU!\n");
            else printf("Empate!\n");
            break;
        case 5: // Densidade Populacional (vence a MENOR)
            if (DEN1 < DEN2) printf("Voce GANHOU!\n");
            else if (DEN1 > DEN2) printf("Voce PERDEU!\n");
            else printf("Empate!\n");
            break;
        case 6: // Super Trunfo
            if (superTrunfo > superTrunfo2) printf("Voce GANHOU!\n");
            else if (superTrunfo < superTrunfo2) printf("Voce PERDEU!\n");
            else printf("Empate!\n");
            break;
        case 7: // Pontos Turísticos
            if (pontos > pontos2) printf("Voce GANHOU!\n");
            else if (pontos < pontos2) printf("Voce PERDEU!\n");
            else printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}