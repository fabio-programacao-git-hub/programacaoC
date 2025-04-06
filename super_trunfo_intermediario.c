#include <stdio.h>

int main(){
    printf("\n");
    printf("Jogo Super Trunfo\n");
    char estado_1 = 'A', estado_2 = 'B';
    char codigo_1[5] = "A01", codigo_2[5] = "B02";
    char cidade_1[20] = "Rio Branco", cidade_2[20] = "Salvador";
    int populacao_1 = 365000, populacao_2 = 2417678;
    float area_1 = 8.835, area_2 = 693.442;
    float pib_1 = 10955.000, pib_2 = 62954.000;
    int turismo_1 = 16, turismo_2 = 78;

    float media_1 = populacao_1 / area_1;
    float media_1_1 = pib_1 / populacao_1;
    float media_2 = populacao_2 / area_2;
    float media_2_2 = pib_2 / populacao_2;

    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %.3d mil\n", populacao_1);
    printf("Área: %.3f km²\n", area_1);
    printf("PIB: %.3f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", turismo_1);
    printf("Densidade Populacional: %.3f hab/km²\n", media_1);
    printf("PIB per Capita: %.3f mil reais\n", media_1_1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %.3d milhões\n", populacao_2);
    printf("Área: %.3f km²\n", area_2);
    printf("PIB: %.3f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", turismo_2);
    printf("Densidade Populacional: %.3f hab/km²\n", media_2);
    printf("PIB per Capita: %.3f mil reais\n", media_2_2);
    printf("\n");

    return 0;
}