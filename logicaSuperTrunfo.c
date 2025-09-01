#include <stdio.h>
#include <string.h>



int main() {
    // Variáveis da Cidade 1
    char codigo1[10], nome1[50];
    int populacao1;
    float area1, pib1;

    // Variáveis da Cidade 2
    char codigo2[10], nome2[50];
    int populacao2;
    float area2, pib2;

    // Cadastro da primeira cidade
    printf("Digite o código da cidade 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome1);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &populacao1);
    printf("Digite a área (km²) da cidade 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    // Cadastro da segunda cidade
    printf("\nDigite o código da cidade 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome2);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &populacao2);
    printf("Digite a área (km²) da cidade 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("\n--- Comparação das Cidades ---\n");

    // Comparação de População
    if (populacao1 > populacao2) {
        printf("Maior população: %s\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Maior população: %s\n", nome2);
    } else {
        printf("As cidades têm a mesma população.\n");
    }

    // Comparação de Área
    if (area1 > area2) {
        printf("Maior área: %s\n", nome1);
    } else if (area2 > area1) {
        printf("Maior área: %s\n", nome2);
    } else {
        printf("As cidades têm a mesma área.\n");
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        printf("Maior PIB: %s\n", nome1);
    } else if (pib2 > pib1) {
        printf("Maior PIB: %s\n", nome2);
    } else {
        printf("As cidades têm o mesmo PIB.\n");
    }

    return 0;
}
