#include <stdio.h>
#include <stdlib.h> // Biblioteca incluída para a função system("clear") ou system("cls")

// Desafio Super Trunfo - Países
// Nível: Novato
// Objetivo: Cadastrar e exibir os dados de duas cartas.

int main() {
    // --- Declaração de Variáveis ---
    // Para a primeira carta
    char  estado1;
    char  codigo1[5];       // Ex: "A01" + caractere nulo '\0'
    char  nomeCidade1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   pontosTuristicos1;

    // Para a segunda carta
    char  estado2;
    char  codigo2[5];
    char  nomeCidade2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;
    
    // --- Boas-vindas ao Usuário ---
    printf("======================================\n");
    printf("  Bem-vindo ao Cadastro Super Trunfo\n");
    printf("======================================\n\n");


    // --- Cadastro da Carta 1 ---
    printf("--- Insira os dados da CARTA 1 ---\n");

    printf("Estado (A-H): ");
    // O espaço antes de %c ignora qualquer caractere de nova linha ou espaço anterior.
    scanf(" %c", &estado1); 

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    // Usamos " %[^\n]" para ler uma string que pode conter espaços (como "Rio de Janeiro").
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n>>> Carta 1 cadastrada com sucesso! <<<\n\n");


    // --- Cadastro da Carta 2 ---
    printf("--- Insira os dados da CARTA 2 ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    
    printf("\n>>> Carta 2 cadastrada com sucesso! <<<\n\n");
    
    // system("clear"); // Descomente esta linha para limpar o terminal em Linux/macOS
    // system("cls");   // Descomente esta linha para limpar o terminal em Windows
    
    // --- Exibição dos Dados das Cartas Cadastradas ---
    printf("======================================\n");
    printf("     Cartas do Super Trunfo Salvas\n");
    printf("======================================\n\n");

    // Exibindo dados da Carta 1
    printf("--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    // Usamos %.2f para formatar o float com duas casas decimais.
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontosTuristicos1);

    // Exibindo dados da Carta 2
    printf("--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}