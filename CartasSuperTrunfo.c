#include <stdio.h>

int main() {
    char estado[5];
    char codigodacidade[5];
    char nomedacidade[20];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;
    
    printf ("Complete os dados da Carta 1: \n"); //Carta 1

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

    printf ("\nDados da Carta 1: \n"); //Dados da carta 1
    printf ("Estado: %s\n", estado);
    printf ("Código da Cidade: %s\nNome da Cidade: %s\n", codigodacidade, nomedacidade);
    printf ("População: %d\nÁrea: %f\n", populacao, area);
    printf ("PIB: %f\nNúmero de Pontos Turísticos: %d\n", pib, pontosturisticos);

    printf ("\nComplete os dados da Carta 2: \n"); //Carta 2

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

    printf ("\nDados da Carta 2: \n"); //Dados da Carta 2
    printf ("Estado: %s\n", estado);
    printf ("Código da Cidade: %s\nNome da Cidade: %s\n", codigodacidade, nomedacidade);
    printf ("População: %d\nÁrea: %f\n", populacao, area);
    printf ("PIB: %f\nNúmero de Pontos Turísticos: %d\n", pib, pontosturisticos);

    return 0;
}
