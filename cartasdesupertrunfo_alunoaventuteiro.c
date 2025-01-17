#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo - Países - Cadastro das Cartas\n");
    float populacao = 320.600;
    float area = 123.520;
    float PIB = 359.64;
    int turísticos = 58;
    char cidade[20] = "Rio de janeiro";
    char codigo[10] = "A09";
    float densidadepopulacional = populacao / area;
    float PIBpercapital = PIB / populacao;


    printf("população: %.2f habitantes\n", populacao);
    printf("area: %.2f metros\n", area);
    printf("PIB: %.2f reais\n", PIB);
    printf("turisticos: %i pessoas\n", turísticos);
    printf("cidade: %s\n", cidade);
    printf("codigo: %s\n", codigo);

    //aventureiro
    densidadepopulacional = populacao / area;

    printf("densidadepopulacional é: %.2f\n", densidadepopulacional);

    PIBpercapital = PIB / populacao;

    printf("PIBpercapital é: %.2f\n", PIBpercapital);





    
    return 0;

}