#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
int main () {

    //declaração das variaveis da Carta 1

    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    char unidadePopulacao1[20];
    char complementePopulacao1[20];
    int area1;
    char unidadeArea1[20];
    char complementeArea1[20];
    int pib1;
    char unidadePib1[20];
    char complementoPib1[20];
    int pontosTuristicos1;

    

    // entrada dos dados da Carta 1

    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // espaço antes do %c para ignorar enter anterior
    limparBuffer();


    printf("Codigo da carta (ex A01): ");
    scanf(" %3s", codigo1);
    limparBuffer();


    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    limparBuffer();

    
    printf("Populacao (exemplo: 11 mil habitantes): ");
    scanf(" %d %s %s", &populacao1, unidadePopulacao1, complementePopulacao1);
    limparBuffer();

   

   
    printf("area (exemplo: 1 mil km): ");
    scanf(" %d %s %s", &area1, unidadeArea1, complementeArea1);
    limparBuffer();

   

    printf("PIB (exemplo: 1 mil reais): ");
    scanf(" %d %s %s", &pib1, unidadePib1, complementoPib1);
    limparBuffer();

     
    printf("Numeros de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    limparBuffer();


    // Exibição das informações
    
 printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1); 
    printf("Populacao: %d %s %s\n", populacao1, unidadePopulacao1, complementePopulacao1);
    

    printf("Area: %d %s %s\n", area1, unidadeArea1, complementeArea1);
    printf("PIB: %d %s %s\n", pib1, unidadePib1, complementoPib1);

    
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);
    

   
 
}