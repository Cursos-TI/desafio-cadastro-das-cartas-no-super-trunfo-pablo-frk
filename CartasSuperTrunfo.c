#include <stdio.h>  //Entrada e saída de dados
#include <string.h> //Permite eu usar o fgets que possibilita ler nomes compostos
#include <stdlib.h> //Permite usar o comando system, dar comandos ao prompt
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
   // Carta 1
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    char estado1;
    char nomeCidade1[50];
    char codigo1[4];

    // Carta 2
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    char estado2;
    char nomeCidade2[50];
    char codigo2[4];

    // Inicio entradas carta 1
    system("cls");
    printf("\n");
    printf("SUPER TRUNFO - CIDADES\n");
    printf("Cadastrando a Carta 1\n");

    printf("\n");

    printf("Digite o estado: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo: ");
    scanf("%s", codigo1);
    getchar();

    printf("Digite nome da cidade: ");
    fgets(nomeCidade1, 50, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos1);

    // Fim das entradas carta 1

    ///////////

    // Inicio entradas carta 2

    system("cls");
    printf("\n");
    printf("SUPER TRUNFO - CIDADES\n");
    printf("Cadastrando a Carta 2\n");

    printf("\n");
    printf("Digite o estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo: ");
    scanf("%s", codigo2);
    getchar();

    printf("Digite nome da cidade: ");
    fgets(nomeCidade2, 50, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("Digite a populacao da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos2);

    system("cls");
    // Fim das entradas carta 2

    ///////////////////////////////////

    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.1f Bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos1);

    printf("\n////////////////\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.1f Bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontosTuristicos2);

    printf("\n\n");

    return 0;
}
