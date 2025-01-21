#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo - Países - Cadastro das Cartas\n");
    float populacao = 320.600;
    float area = 123.520;
    float PIB = 359.64;
    int turísticos = 58;
    char cidade[20] = "Rio de janeiro";
    char codigo[10] = "A09";
    float densidadepopulacional = 2.60;                 //populacao / area;
    float PIBpercapital = 1.12;                     //PIB / populacao;
    float supertrunfo = 865.48;

    printf("população: %.2f habitantes\n", populacao);
    printf("area: %.2f metros\n", area);
    printf("PIB: %.2f reais\n", PIB);
    printf("turisticos: %i pessoas\n", turísticos);
    printf("cidade: %s\n", cidade);
    printf("codigo: %s\n", codigo);

    //aventureiro
    //densidadepopulacional = populacao / area;

    //printf("densidadepopulacional é: %.2f\n", densidadepopulacional);

    //PIBpercapital = PIB / populacao;

    //printf("PIBpercapital é: %.2f\n", PIBpercapital);

    //mestre
    printf("densidadepopulacional >= PIBpercapital: %d\n", densidadepopulacional >= PIBpercapital);
    printf("PIB >= populaçao: %d\n", PIB >= populacao);
    printf("PIB >= area: %d\n", PIB >= area);
    printf("PIB >= turísticos: %d\n", PIB >= turísticos);
    printf("PIB >= densidadepppulacional: %d\n", PIB >= densidadepopulacional);
    printf("PIB >= PIBpercapital: %d\n", PIB >= PIBpercapital);

    printf("super poder da carta é: %.2f", supertrunfo);

    
    return 0;

}