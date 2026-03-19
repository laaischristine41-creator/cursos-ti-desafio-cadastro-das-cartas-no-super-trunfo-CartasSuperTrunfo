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
    float area, pib, densidade, capita;
    
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

    densidade = populaçao / area;
    capita = pib / populaçao; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %-20s\n", nome_cidade);
    printf("Codigo: %s\n", codigo);
    printf("População: %d habitantes\n", populaçao);
    printf("Pontos turisticos: %d locais\n", ponto_turistico);
    printf("Área: %.2f km2\n", area);
    printf("Pib: %.2f bilhões de reais\n", pib);
    printf("Densidade populacional: %.2f hab/km2\n", densidade);
    printf("Pib per capita: %.2f reais\n", capita);

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

     densidade =(float) populaçao / area;
    capita = (float)pib / populaçao; 

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %-20s\n", nome_cidade);
    printf("Codigo: %s\n", codigo);
    printf("População: %d habitantes\n", populaçao);
    printf("Pontos turisticos: %d locais\n", ponto_turistico);
    printf("Área: %.3f km2\n", area);
    printf("Pib: %.3f\n", pib);
    printf("Densidade populacional: %.2f hab/km2\n", densidade);
    printf("Pib per capita: %.2f reais\n", capita);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
