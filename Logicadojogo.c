#include <stdio.h>
#include <math.h>

void exibirMenu()
{
    printf("\nEscolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica\n");
    printf("0 - Sair\n");
    printf("Opcao: ");
}

int main()
{
    char estado[1], estado2[1];
    char codigoCarta[4], codigoCarta2[4];
    char nomeCidade[30], nomeCidade2[30];
    unsigned long int populacao, populacao2;
    float area, area2;
    double pib, pib2;
    int pontosTuristicos, pontosTuristicos2;
    float densidadePopulacional, densidadePopulacional2;
    float pibPerCapita, pibPerCapita2;

    int opcao;

    // Leitura de dados
    printf("Estado: ");
    scanf(" %c", estado);

    printf("\nCódigo: ");
    scanf("%3s", codigoCarta);

    printf("\nNome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade);

    printf("\nPopulação: ");
    scanf("%ld", &populacao);

    printf("\nÁrea: ");
    scanf("%f", &area);

    printf("\nPIB: ");
    scanf("%lf", &pib);

    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    printf("Estado: ");
    scanf(" %c", estado2);

    printf("\nCódigo: ");
    scanf("%3s", codigoCarta2);

    printf("\nNome da Cidade: ");
    scanf(" %[^\n]s", nomeCidade2);

    printf("\nPopulação: ");
    scanf("%ld", &populacao2);

    printf("\nÁrea: ");
    scanf("%f", &area2);

    printf("\nPIB: ");
    scanf("%lf", &pib2);

    printf("\nNúmero de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\nCarta 1: ");
    // Exibição de dados
    printf("\nEstado: %s", estado);
    printf("\nCódigo: %s", codigoCarta);
    printf("\nNome da cidade: %s", nomeCidade);
    printf("\nPopulação: %lu", populacao);
    printf("\nÁrea: %.2f", area);
    printf("\nPIB: %.2lf", pib);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos);
    printf("\n\n");

    printf("\nCarta 2: ");
    // Exibição de dados
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigoCarta2);
    printf("\nNome da cidade: %s", nomeCidade2);
    printf("\nPopulação: %lu", populacao2);
    printf("\nÁrea: %.2f", area2);
    printf("\nPIB: %.2lf", pib2);
    printf("\nNúmero de Pontos Turísticos: %d", pontosTuristicos2);
    printf("\n\n");

    // Cálculo de dados
    densidadePopulacional = (float)(populacao / area);
    pibPerCapita = (double)(pib / populacao);
    printf("\nCarta 1: ");
    printf("\nDensidade Populacional: %.2f", densidadePopulacional);
    printf("\nPIB per capita: %.2f\n", pibPerCapita);

    densidadePopulacional2 = (float)(populacao2 / area2);
    pibPerCapita2 = (double)(pib2 / populacao2);
    printf("\nCarta 2: ");
    printf("\nDensidade Populacional: %.2f", densidadePopulacional2);
    printf("\nPIB per capita: %.2f\n", pibPerCapita2);

    printf("\nComparação de Cartas:\n");

    do
    {
        exibirMenu();
        scanf("%d", &opcao);
        if (opcao == 0)
        {
            printf("Encerrando Programa\n");
            break;
        }

        switch (opcao)
        {
        case 1:
            if (populacao > populacao2)
            {
                printf("População: Carta 1 venceu\n");
            }
            else if (populacao < populacao2)
            {
                printf("População: Carta 2 venceu\n");
            }
            else
            {
                printf("População: Empate\n");
            }
            break;
        case 2:
            if (area > area2)
            {
                printf("Area: Carta 1 venceu\n");
            }
            else if (area2 > area)
            {
                printf("Area: Carta 2 venceu\n");
            }
            else
            {
                printf("Area: Empate\n");
            }
            break;
        case 3:
            if (pib > pib2)
            {
                printf("Pib: Carta 1 venceu\n");
            }
            else if (pib2 > pib)
            {
                printf("Pib: Carta 2 venceu\n");
            }
            else
            {
                printf("Pib: Empate\n");
            }
            break;
        case 4:
            if (pontosTuristicos > pontosTuristicos2)
            {
                printf("Pontos Turisticos: Carta 1 venceu\n");
            }
            else if (pontosTuristicos2 > pontosTuristicos)
            {
                printf("Pontos Turisticos: Carta 2 venceu\n");
            }
            else
            {
                printf("Pontos Turisticos: Empate\n");
            }
            break;
        case 5:
            if (densidadePopulacional < densidadePopulacional2)
            {
                printf("Densidade Demográfica: Carta 1 venceu\n");
            }
            else if (densidadePopulacional2 < densidadePopulacional)
            {
                printf("Densidade Demográfica: Carta 2 venceu\n");
            }
            else
            {
                printf("Densidade Demográfica: Empate\n");
            }
            break;
        default:
            printf("Opção Inválida");
            return 0;
        }

    } while (1);

    return 0;
}