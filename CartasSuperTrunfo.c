#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    char nome[50];
    char estado[30];
    char codigo[30];
    int populacao, turismo;
    float pib, area;

    printf("Digite o nome do estado: ");
    fgets(estado, sizeof(estado), stdin);

    printf("Digite o nome da cidade: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo);

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turismo);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    
    printf("\nEstado: %s", estado);
    printf("Cidade: %s", nome);
    printf("Código: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", turismo);
    printf("PIB: %.2f\n", pib);
    printf("Área: %.2f\n", area);
    
    return 0;
}