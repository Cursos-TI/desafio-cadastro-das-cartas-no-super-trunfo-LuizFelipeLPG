#include <stdio.h>

int main() {     
   
    char estado1;  
    char codigo1[10];          
    char cidade1[20];     //variaveis carta 1
    int populacao1 = 0;     
    float area1 = 0.0;     
    float pib1 = 0.0;     
    int turistico1 = 0;  

    char estado2;  
    char codigo2[10];          
    char cidade2[20];     //variaveis carta2
    int populacao2 = 0;     
    float area2 = 0.0;     
    float pib2 = 0.0;     
    int turistico2 = 0;  
    
    printf("**jogo super trunfo**\n");        

    printf("Digite o estado da primeira carta (apenas 1 caractere):\n");     //entrada de dados  carta1
    scanf(" %c", &estado1); 

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

    float densidadepopulacao1 = (float) populacao1 / area1;  // cálculo densidade populacional carta 1
    float pibpercapita1 = (pib1 * 1e9) / populacao1; // cálculo PIB per capita carta 1
    float inversodensidade1 = 1.0 / densidadepopulacao1;  // cálculo densidade populacional número Inverso carta 1
    float superpoder1 = (float) populacao1 + area1 + pib1 + (float)turistico1 + pibpercapita1 + inversodensidade1; //cálculo super poder carta 1
   
   
    printf("**Digite o estado da segunda carta (apenas 1 caractere)**:\n");     //entrada de dados carta2
    scanf(" %c", &estado2);  

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

    float densidadepopulacao2 = (float) populacao2 / area2;    //cálculo densidade populacional  carta 2
    float pibpercapita2 = (float)(pib2 * 1e9) / populacao2; // cálculo PIB per capita carta 2
    float inversodensidade2 = 1.0 / densidadepopulacao2;  //cálculo densidade populacional número inverso carta 2
    float superpoder2 = (float) populacao2 + area2 + pib2 + (float)turistico2 + pibpercapita2 + inversodensidade2; //cálculo super poder carta 2
    printf("\n\n");

    printf("carta 1\n\n");
    printf("estado: %c \n", estado1);    //saida de dados carta1 
    printf("codigo: %s \n", codigo1);     
    printf("cidade: %s \n", cidade1);     
    printf("populacao: %d \n", populacao1);     
    printf("area: %.2f km²\n", area1);     
    printf("pib: %.2f bilhoes de reais \n", pib1);     
    printf("pontos turisticos: %d \n", turistico1);   
    printf("densidade populacional: %.2f hab/km²\n", densidadepopulacao1);
    printf("pib per capita: %.2f reais\n", pibpercapita1);
    printf("super poder: %.2f \n\n", superpoder1);


    printf("carta 2\n\n");
    printf("estado: %c \n", estado2);    //saida de dados carta2 
    printf("codigo: %s \n", codigo2);     
    printf("cidade: %s \n", cidade2);     
    printf("populacao: %d \n", populacao2);     
    printf("area: %.2f km²\n", area2);     
    printf("pib: %.2f bilhoes de reais\n", pib2);     
    printf("pontos turisticos: %d \n", turistico2);  
    printf("densidade populacional: %.2f hab/km²\n", densidadepopulacao2);
    printf("pib per capita: %.2f reais\n", pibpercapita2);
    printf("super poder: %.2f \n\n", superpoder2);
    
    printf("*comparacao das cartas*\n\n");      //comparação das cartas

    printf("***se o resultado for 1 a carta 1 ganhou**\n");
    printf("***se o resultado for 0 a carta  2 ganhou ***\n\n");
    printf("populacao: %d \n", populacao1 > populacao2);
    printf("area: %d\n", area1 > area2);
    printf("pib: %d\n", pib1 > pib2);
    printf("pontos turisticos: %d \n", turistico1 > turistico2);
    printf("densidade populacional: %d\n", inversodensidade1 > inversodensidade2);
    printf("pib per capita: %d \n", pibpercapita1 > pibpercapita2);
    printf("super poder: %d \n", superpoder1 > superpoder2);

    return 0;
}