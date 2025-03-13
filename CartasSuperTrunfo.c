#include <stdio.h>

int main() {
    char codigodacidade[20];
    char nomedacidade[40];
    int população;
    float área;
    float pib;
    int pontosturísticos;

    printf ("Digite o código da cidade: \n");
    scanf ("%s", codigodacidade);
    
    printf ("Digite o nome da cidade: \n");
    scanf ("%s", nomedacidade);

    printf ("Digite a população: \n");
    scanf ("%d", &população);

    printf ("Digite a área: \n");
    scanf ("%f", &área);

    printf ("Digite o PIB: \n");
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos: \n");
    scanf ("%d", &pontosturísticos);

    printf ("Código da Cidade: %s\nNome da Cidade %s\n", codigodacidade, nomedacidade);
    printf ("População: %d\nÁrea: %f\n", população, área);
    printf ("PIB: %f\nNúmero de Pontos Turísticos: %d\n", pib, pontosturísticos);

    return 0;
}
