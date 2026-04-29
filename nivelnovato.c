#include <stdio.h>
//comparar cartas
int main() {
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];   // espaço para códigos
    char nome1[50], nome2[50];       // espaço para nomes
    unsigned long int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    float densidade1, densidade2;  // densidade populacional
    float capita1, capita2;        // PIB per capita

    printf("--- Cadastro Carta 1 ---\n");
    printf("Estado (AA): ");
    scanf(" %s[^\n]", &estado1);
    
    printf("Código (ex: 01): ");
    scanf(" %s[^\n]", &codigo1);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nome1);   // aceita espaços
    printf("População: ");
    scanf("%lu", &pop1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

     printf("--- Cadastro Carta 2 ---\n");
    printf("Estado (AA): ");
    scanf(" %s[^\n]", &estado2);
    
    printf("Código (ex: 01): ");
    scanf(" %s[^\n]", &codigo2);
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", &nome2);   // aceita espaços
    printf("População: ");
    scanf("%lu", &pop2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    
    densidade1 = (float)(pop1)/(area1); // densidade populacional = população / pela área
    capita1 = (float)(pib1*1000000000)/pop1; // PIB per capita = PIB / população

    densidade2 = (float)(pop2/area2);
    capita2 = (float)(pib2*1000000000)/pop2;

    printf("\n--- Cartas Cadastradas ---\n");

    printf("Carta 1: %s - %s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos turísticos: %d\n",
           nome1, pop1, area1, pib1, pontos1);
    printf("Densidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n", densidade1, capita1);       

    printf("=============================\n");

    printf("Carta 2: %s - %s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nPontos turísticos: %d\n",
           nome2, pop2, area2, pib2, pontos2);
    printf("Densidade populacional: %.2f hab/km²\nPIB per capita: %.2f reais\n", densidade2, capita2);  

    printf("=============================\n");  
    
    printf("------Comparaçao das Cartas --------\n");

    printf("Atrituto: População\n");

    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, pop1);
    printf("Carta 2 - %s (%s): %d\n", nome2, estado2, pop2);
        if(pop1>pop2){
              printf("Resultado: Carta1 (%s) venceu!", nome1);
    } else {
       printf("Resultado: Carta 2 (%s) venceu!", nome2);
    }

    return 0;
}