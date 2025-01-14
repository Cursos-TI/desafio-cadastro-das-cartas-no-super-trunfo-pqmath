#include <stdio.h>

int main() {

    int cityCode = 0, touristPoints = 0;
    double area = 0, population = 0;
    char name[100];

    printf("Informe os dados da cidade\n");

    printf("Nome da cidade: ");
    scanf("%s", &name);
    
    printf("Codigo da cidade: ");
    scanf("%d", &cityCode);
    
    printf("Populacao da cidade: ");
    scanf( "%lf", &population);
    
    printf( "area da cidade: ");
    scanf( "%lf", &area);
    
    printf( "pontos turisticos: ");
    scanf( "%d", &touristPoints);

    printf("\n Nome da cidade: %s.\n codigo da cidade: %d."
    "\n Populacao: %.3lf. \n Area: %.2lf Km.\n "
    "Quantidade de pontos turisticos: %d.", name, cityCode, population, area, touristPoints);

    return 0;

}
