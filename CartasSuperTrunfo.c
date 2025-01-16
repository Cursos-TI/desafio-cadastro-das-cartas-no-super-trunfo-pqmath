#include <stdio.h>

int main() {

    int touristPoints;
    float area, populationDensity, pib, pibPerCapita;
    long int population;
    char cityName[100], cardCode[3], estado;

    printf("Informe os dados da cidade\n");

    printf("Estado: ");
    scanf(" %c", &estado);

    printf("Codigo da carta: ");
    scanf(" %s", &cardCode);

    printf("Nome da cidade: ");
    getchar();
    scanf("%s", &cityName);

    printf("Populacao: ");
    scanf( "%ld", &population);

    printf( "Area: ");
    scanf( "%f", &area);
    populationDensity = population / area;

    printf("PIB:");
    scanf( "%f", &pib);
    pibPerCapita = pib * 1000000000 / population;

    printf( "Pontos turisticos: ");
    scanf( "%d", &touristPoints);

    printf("\nEstado: %c\n", estado);
    printf("Codigo da Carta: %s\n", cardCode);
    printf("Nome da Cidade: %s\n", cityName);
    printf("Populacao: %ld\n", population);
    printf("Area: %.2f km2\n", area);
    printf("Densidade Populacional: %.2f pessoas/km2\n", populationDensity);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("PIB per Capita: %.0f reais\n", pibPerCapita);
    printf("Numero de Pontos Turisticos: %d\n", touristPoints);

    return 0;
}
