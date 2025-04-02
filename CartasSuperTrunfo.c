#include <stdio.h>

int main() {
    char estado[5];
    char codigodacidade[5];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    float densidadepopulacional;
    float pibpercapta;
    
    printf ("Complete os dados da Carta 1: \n"); //O usuário irá inserir os dados da Carta 1

    printf ("Digite o Estado: \n");
    scanf ("%s", estado);

    printf ("Digite o código da cidade: \n");
    scanf ("%s", codigodacidade);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomedacidade);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área: \n");
    scanf ("%f", &area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &pontosturisticos);

    printf ("\nDados da Carta 1: \n"); //Serão exibidos dos dados da carta 1
    printf ("Estado: %s\n", estado);
    printf ("Código da Cidade: %s\nNome da Cidade: %s\n", codigodacidade, nomedacidade);
    printf ("População: %d\nÁrea: %.3f km²\n", populacao, area);
    printf ("PIB: %.2f reais\nNúmero de Pontos Turísticos: %d\n", pib, pontosturisticos);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional = (float) populacao / area);
    printf ("PIB per capta: %.2f reais\n", pibpercapta = (float) pib / populacao);

    printf ("\nComplete os dados da Carta 2: \n"); //O usuário irá inserir os dados da carta 2

    printf ("Digite o Estado: \n");
    scanf ("%s", estado);

    printf ("Digite o código da cidade: \n");
    scanf ("%s", codigodacidade);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomedacidade);

    printf ("Digite a população: \n");
    scanf ("%d", &populacao);

    printf ("Digite a área: \n");
    scanf ("%f", &area);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &pontosturisticos);

    printf ("\nDados da Carta 2: \n"); //Serão exibidos os dados da Carta 2
    printf ("Estado: %s\n", estado);
    printf ("Código da Cidade: %s\nNome da Cidade: %s\n", codigodacidade, nomedacidade);
    printf ("População: %d\nÁrea: %.3f km²\n", populacao, area);
    printf ("PIB: %.2f reais\nNúmero de Pontos Turísticos: %d\n", pib, pontosturisticos);
    printf ("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional = (float) populacao / area);
    printf ("PIB per capta: %.2f reais\n", pibpercapta = (float) pib / populacao);
    return 0;
}
