#include <stdio.h>

int main() {
    char estado[1];      
    char codigo[3];       
    char cidade[20];      
    int populacao;
    float area;
    float pib;
    int turistico;

    
    printf("Digite o estado:\n");
    scanf("%s", estado);  

    printf("Digite o código:\n");
    scanf("%s", codigo);  

    printf("Digite a cidade:\n");
    scanf("%s", cidade);  

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &turistico);

    printf("estado: %s\n", estado);
    printf("codigo: %s\n", codigo);
    printf("cidade: %s\n", cidade);
    printf("populacao: %d\n", populacao);
    printf("area: %.2f\n", area);
    printf("pib: %.2f\n", pib);
    printf("pontos turisticos: %d\n", turistico);

    return 0;
}