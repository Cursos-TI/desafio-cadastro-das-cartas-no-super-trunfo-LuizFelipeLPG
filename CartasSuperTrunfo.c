#include <stdio.h>

int main() {     
    char estado1;     
    char codigo1[10];          
    char cidade1[20];     //variaveis carta 1
    int populacao1;     
    float area1;     
    float pib1;     
    int turistico1;  

    char estado2;     
    char codigo2[10];          
    char cidade2[20];     //variaveis carta2
    int populacao2;     
    float area2;     
    float pib2;     
    int turistico2;  
    
    

    printf("**jogo super trunfo**\n");        

    printf("Digite o estado da primeira carta:\n");     //entrada de dados  carta1
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

   
   
    printf("**Digite o estado da segunda carta**:\n");     //entrada de dados carta2
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

    printf("\n\n");

    printf("carta 1\n");
    printf("estado: %c \n", estado1);    //saida de dados carta1
    printf("codigo: %s \n", codigo1);     
    printf("cidade: %s \n", cidade1);     
    printf("populacao: %d \n", populacao1);     
    printf("area: %.2f km²\n", area1);     
    printf("pib: %.2f bilhoes de reais \n", pib1);     
    printf("pontos turisticos: %d \n\n", turistico1);   

    printf("carta 2\n");
    printf("estado: %c \n", estado2);    //saida de dados carta2
    printf("codigo: %s \n", codigo2);     
    printf("cidade: %s \n", cidade2);     
    printf("populacao: %d \n", populacao2);     
    printf("area: %.2f km²\n", area2);     
    printf("pib: %.2f bilhoes de reais\n", pib2);     
    printf("pontos turisticos: %d \n", turistico2);      

    return 0; 
}
