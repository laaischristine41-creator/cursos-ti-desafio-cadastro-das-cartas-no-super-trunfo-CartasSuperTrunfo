#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste lais Lima

int main() {
    char nome_cidade1[50], nome_cidade2[50];
    char codigo1[10], codigo2[10];
    unsigned long int populaçao1, populaçao2;
    int ponto_turistico1, ponto_turistico2;
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, densidadeInvertida1, densidadeInvertida2, superPoder1, superPoder2;

    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("\n --- Super Trunfo ---\n");
    printf("\n --- Carta 1 ---\n");
    printf("Digite os dados da carta:\n");

    printf("Cidade:\n");
    scanf(" %[^\n]", nome_cidade1);

    printf("Codigo:\n");
    scanf("%9s", codigo1);

    printf("População:\n");
    scanf("%lu", &populaçao1);

    printf("Pontos turisticos:\n");
    scanf("%d", &ponto_turistico1);

    printf("Área:\n");
    scanf("%f", &area1);

    printf("Pib:\n");
    scanf("%f", &pib1);

    densidade1 = (float)populaçao1 / area1;
    capita1 = (pib1 *1000000000) /(float)populaçao1; 
    densidadeInvertida1 = 1/densidade1;
    superPoder1 = (float)populaçao1 + area1 + pib1 + densidade1 + capita1 + ponto_turistico1 + densidadeInvertida1; 


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %-20s\n", nome_cidade1);
    printf("Codigo: %s\n", codigo1);
    printf("População: %lu habitantes\n", populaçao1);
    printf("Pontos turisticos: %d locais\n", ponto_turistico1);
    printf("Área: %.2f km2\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Densidade populacional: %.2f hab/km2\n", densidade1);
    printf("Pib per capita: %.2f reais\n", capita1);
    printf("Super poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Digite os dados da carta:\n");

    printf("Cidade:\n");
    scanf(" %[^\n]", nome_cidade2);

    printf("Codigo:\n");
    scanf("%9s", codigo2);

    printf("População:\n");
    scanf("%lu",&populaçao2);

    printf("Pontos turisticos:\n");
    scanf("%d", &ponto_turistico2);

    printf("Area:\n");
    scanf("%f", &area2);

    printf("Pib:\n");
    scanf("%f", &pib2);

     densidade2 =(float) populaçao2 / area2;
    capita2 = (pib2*1000000000) / (float)populaçao2; 
     densidadeInvertida2 = 1/densidade2;
    superPoder2 = (float)populaçao2 + area2 + pib2 + densidade2 + capita2 + ponto_turistico2 + densidadeInvertida2; 

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %-20s\n", nome_cidade2);
    printf("Codigo: %s\n", codigo2);
    printf("População: %lu habitantes\n", populaçao2);
    printf("Pontos turisticos: %d locais\n", ponto_turistico2);
    printf("Área: %.3f km2\n", area2);
    printf("Pib: %.3f\n", pib2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("Pib per capita: %.2f reais\n", capita2);
    printf("Super poder: %.2f\n", superPoder2);
    
    printf("\n****Comparação das Cartas:****\n");
    printf("\nConfira o resultado:\n");
    printf("\nPara 1 verdadeiro, para 0 falso!\n");
    printf("População: Carta 1 venceu: (%d)\n", populaçao1 > populaçao2);
    printf(" Área: Carta 1 venceu: (%d)\n", area1 > area2);
    printf("Pib: Carta 1 venceu: (%d)\n", pib1 > pib2);
    printf("Pontos turisticos: Carta 1  venceu: (%d)\n", ponto_turistico1 > ponto_turistico2);
    printf("Densidade populacional: Carta 1  venceu: (%d)\n", densidade1 < densidade2);
    printf("Pib per capita: Carta 1  venceu: (%d)\n", capita1 > capita2);
    printf("Super poder: Carta 1  venceu: (%d)\n", superPoder1 > superPoder2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
