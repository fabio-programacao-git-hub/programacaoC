#include <stdio.h>

int main(){
    printf("\n");
    printf("Jogo Super Trunfo\n");
    char estado_1 = 'A', estado_2 = 'B';
    char codigo_1[5] = "A01", codigo_2[5] = "B02";
    char cidade_1[20] = "Rio Branco", cidade_2[20] = "Salvador";
    int populacao_1 = 365.000, populacao_2 = 2417.678;
    float area_1 = 8.835, area_2 = 693.442;
    float pib_1 = 10955.000, pib_2 = 62954.000;
    int pontos_turistico_1 = 16, pontos_turistico_2 = 78;

    // Densidade populacional e PIB per capita

    float densidade_populacional_1 = populacao_1 / area_1;
    float pib_per_capita_1 = pib_1 / populacao_1;
    float densidade_populacional_2 = populacao_2 / area_2;
    float pib_per_capita_2 = pib_2 / populacao_2;

    printf("\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %.3d mil\n", populacao_1);
    printf("Área: %.3f km²\n", area_1);
    printf("PIB: %.3f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turistico_1);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade_populacional_1);
    printf("PIB per Capita: %.3f mil reais\n", pib_per_capita_1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %.3d milhões\n", populacao_2);
    printf("Área: %.3f km²\n", area_2);
    printf("PIB: %.3f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turistico_2);
    printf("Densidade Populacional: %.3f hab/km²\n", densidade_populacional_2);
    printf("PIB per Capita: %.3f mil reais\n", pib_per_capita_2);
    printf("\n");

    // Comparação das cartas em população

    printf("Carta 1 - Rio Branco (AC): %u mil\n", populacao_1);
    printf("Carta 2 - Salvador (BA): %u milhões\n", populacao_2);

    if (populacao_1 > populacao_2){
        printf("Resultado: Carta 1 (Rio Branco) venceu!\n");
    } else {
        printf("Resultado: Carta 2 (Salvador) Venceu!\n");
    }
    printf("\n");

return 0;

}