#include <stdio.h>

int main() {
    //Variáveis da primeira carta.
    char carta1[50] = "- Carta 1 -";
    char estado1[50];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontoturistico1;
    char codigo1[50] = "C01";

    //Variáveis da segunda carta.
    char carta2[50] = "- Carta 2 -";
    char estado2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoturistico2;
    char codigo2[50] = "C02";

    //Cadastros da carta 1.
    printf("*** Cadastro de Cartas ***\n");
    printf("Digite o Estado:");
    scanf("%s", estado1);
    printf("Digite a Cidade:");
    scanf("%s", cidade1);
    printf("Digite a População da Cidade:");
    scanf("%d", &populacao1);
    printf("Digite quantos KM² a cidade possui:");
    scanf("%f", &area1);
    printf("Digite o PIB da Cidade:");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turisticos a cidade possui:");
    scanf("%d", &pontoturistico1);
     
    //Visualização da carta 1:
    printf("%s\n", carta1);
    printf("Estado: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nCódigo da Carta: %s\n", estado1, cidade1, populacao1, area1, pib1, pontoturistico1, codigo1);

    //Cadastros da carta 2.
    printf("*** Cadastro da segunda carta ***\n");
    printf("Digite o Estado:");
    scanf("%s", estado2);
    printf("Digite a Cidade:");
    scanf("%s", cidade2);
    printf("Digite a População da Cidade:");
    scanf("%d", &populacao2);
    printf("Digite quantos KM² a cidade possui:");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade:");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turisticos a cidade possui:");
    scanf("%d", &pontoturistico2);

    //Visualização da carta 2:
    printf("%s\n", carta2);
    printf("Estado: %s\nCidade: %s\nPopulação: %d\nÁrea: %.2f KM²\nPIB: %.2f\nNúmero de Pontos Turísticos: %d\nCódigo da Carta: %s", estado2, cidade2, populacao2, area2, pib2, pontoturistico2, codigo2);

    return 0;
}
