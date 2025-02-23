#include <stdio.h>
#include <string.h>  

int main() {     
    char estado1[50];     
    char codigo1[10];          
    char cidade1[20];     //variaveis carta 1
    int populacao1 = 0;     
    float area1 = 0.0;     
    float pib1 = 0.0;     
    int turistico1 = 0;  

    char estado2[50];     
    char codigo2[10];          
    char cidade2[20];     //variaveis carta2
    int populacao2 = 0;     
    float area2 = 0.0;     
    float pib2 = 0.0;     
    int turistico2 = 0;  
    
    printf("jogo super trunfo\n");        

    printf("Digite o estado da primeira carta:\n");     //entrada de dados  carta1
    scanf(" %[^\n]", estado1);  

    printf("Digite o código da primeira carta:\n");     
    scanf("%s", codigo1);  

    printf("Digite a cidade da primeira carta:\n");     
    scanf(" %[^\n]", cidade1);  

    printf("Digite a populacao da primeira carta:\n");     
    scanf("%d", &populacao1);        

    printf("Digite a area da primeira carta:\n");     
    scanf("%f", &area1);        

    printf("Digite o PIB da primeira carta:\n");     
    scanf("%f", &pib1);        

    printf("Digite a quantidade de pontos turisticos da primeira carta:\n");     
    scanf("%d", &turistico1);           

    float densidadepopulacao1 = (float) populacao1 / area1;  // cálculo densidade populacional 
    float pibpercapita1 = (pib1 * 1e9) / populacao1; // cálculo PIB per capita (sem verificação)
   
   
    printf("Digite o estado da segunda carta:\n");     //entrada de dados carta2
    scanf(" %[^\n]", estado2);  

    printf("Digite o código da segunda carta:\n");     
    scanf("%s", codigo2); 

    printf("Digite a cidade da segunda carta:\n");     
    scanf(" %[^\n]", cidade2);  

    printf("Digite a populacao da segunda carta:\n");     
    scanf("%d", &populacao2);        

    printf("Digite a area da segunda carta:\n");     
    scanf("%f", &area2);        

    printf("Digite o PIB da segunda carta:\n");     
    scanf("%f", &pib2);        

    printf("Digite a quantidade de pontos turisticos da segunda carta:\n");     
    scanf("%d", &turistico2);          

    float densidadepopulacao2 = (float) populacao2 / area2;    //cálculo densidade populacional 
    float pibpercapita2 = (pib2 * 1e9) / populacao2; // cálculo PIB per capita (sem verificação)

    printf("\n\n");

    printf("carta 1\n\n");
    printf("estado: %s \n", estado1);    //saida de dados carta1
    printf("codigo: %s \n", codigo1);     
    printf("cidade: %s \n", cidade1);     
    printf("populacao: %d \n", populacao1);     
    printf("area: %.2f km²\n", area1);     
    printf("pib: %.2f bilhoes de reais \n", pib1);     
    printf("pontos turisticos: %d \n", turistico1);   
    printf("densidade populacional: %.2f hab/km²\n", densidadepopulacao1);
    printf("pib per capita: %.2f reais\n\n", pibpercapita1);


    printf("carta 2\n\n");
    printf("estado: %s \n", estado2);    //saida de dados carta2
    printf("codigo: %s \n", codigo2);     
    printf("cidade: %s \n", cidade2);     
    printf("populacao: %d \n", populacao2);     
    printf("area: %.2f km²\n", area2);     
    printf("pib: %.2f bilhoes de reais\n", pib2);     
    printf("pontos turisticos: %d \n", turistico2);  
    printf("densidade populacional: %.2f hab/km²\n", densidadepopulacao2);
    printf("pib per capita: %.2f reais\n", pibpercapita2);

    return 0; 
}