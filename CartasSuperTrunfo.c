#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste lais Lima

int main() {
    char nome_cidade[50];
    char codigo[10];
    int populaçao;
    int ponto_turistico;
    float area;
    float pib;
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("\n --- Super Trunfo ---\n");
    printf("\n --- Carta 1 ---\n");
    printf("Digite os dados da carta:\n");

    printf("Cidade:\n");
    scanf(" %[^\n]", nome_cidade);

    printf("Codigo:\n");
    scanf("%9s", codigo);

    printf("População:\n");
    scanf("%d", &populaçao);

    printf("Pontos turisticos:\n");
    scanf("%d", &ponto_turistico);

    printf("Área:\n");
    scanf("%f", &area);

    printf("Pib:\n");
    scanf("%f", &pib);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %-20s\n", nome_cidade);
    printf("Codigo: %s\n", codigo);
    printf("População: %d habitantes\n", populaçao);
    printf("Pontos turisticos: %d locais\n", ponto_turistico);
    printf("Área: %.3f km2\n", area);
    printf("Pib: %.3f bilhões de reais\n", pib);

    printf("\n--- Carta 2 ---\n");
    printf("Digite os dados da carta:\n");

    printf("Cidade:\n");
    scanf(" %[^\n]", nome_cidade);

    printf("Codigo:\n");
    scanf("%9s", codigo);

    printf("População:\n");
    scanf("%d",&populaçao);

    printf("Pontos turisticos:\n");
    scanf("%d", &ponto_turistico);

    printf("Area:\n");
    scanf("%f", &area);

    printf("Pib:\n");
    scanf("%f", &pib);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %-20s\n", nome_cidade);
    printf("Codigo: %s\n", codigo);
    printf("População: %d habitantes\n", populaçao);
    printf("Pontos turisticos: %d locais\n", ponto_turistico);
    printf("Área: %.3f km2\n", area);
    printf("Pib: %.3f\n", pib);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
