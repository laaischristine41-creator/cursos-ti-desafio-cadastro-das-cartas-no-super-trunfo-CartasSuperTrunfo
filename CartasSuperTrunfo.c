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
    int ponto_turistico1, ponto_turistico2, opcao1, opcao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, capita1, capita2, densidadeInvertida1, densidadeInvertida2, superPoder1, superPoder2;
    //Defini as variáveis a partir dos tipos de dados que iria receber: números inteiros, letras...
    
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
    //Interagi com o usuario utilizando printf e scanf para receber os dados e guiar o usuario nesse processo para cadastrar as cartas.
    densidade1 = (float)populaçao1 / area1;
    capita1 = (pib1 *1000000000) /(float)populaçao1; 
    densidadeInvertida1 = 1/densidade1;
    superPoder1 = (float)populaçao1 + area1 + pib1 + densidade1 + capita1 + ponto_turistico1 + densidadeInvertida1; 
     //Aqui realizei pequenas operações dentro do própio codigo para calcular alguns dados.
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
    // exibe os dados preenchidos pelo usuario na primeira carta(incluindo o  super poder).
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
    //Refiz todo o processo para a carta 2.
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
    
   // printf("\n****Comparação das Cartas:****\n"); - Primeira forma de comparação de cartas.
   // printf("\nConfira o resultado:\n");
   // printf("\nPara 1: verdadeiro, para 0: falso!\n");
   // printf("População: Carta 1 venceu: (%d)\n", populaçao1 > populaçao2);
   // printf(" Área: Carta 1 venceu: (%d)\n", area1 > area2);
    //printf("Pib: Carta 1 venceu: (%d)\n", pib1 > pib2);
    //printf("Pontos turisticos: Carta 1  venceu: (%d)\n", ponto_turistico1 > ponto_turistico2);
    //printf("Densidade populacional: Carta 1  venceu: (%d)\n", densidade1 < densidade2);
    //printf("Pib per capita: Carta 1  venceu: (%d)\n", capita1 > capita2);
    //printf("Super poder: Carta 1  venceu: (%d)\n", superPoder1 > superPoder2);

    //Utilizei operadores relacionais para definir a carta vencedora a partir de cada atributo.
    //Agora, a partir do conhecimento adquirido irei usar estruturas de decisões para definir as cartas vencedoras.
   
    //printf("\n****Comparação das Cartas****\n"); - segunda froma de comparação de cartas.

    //printf("População:\n");
    //if (populaçao1> populaçao2) {
     //   printf("Carta 1 venceu!\n");
   // } else {
     //   printf("Carta 2 venceu!\n");
   // }

    //printf("Area:\n");

    //if(area1>area2){
      //  printf("Carta 1 venceu!\n");
    //} else {
      //  printf("Carta 2 venceu!\n");
   // }

  //printf("PIB:\n");
   // if( pib1 > pib2) {
   //     printf("Carta 1 venceu!\n");
   // } else {
   //     printf("Carta 2 venceu!\n");
   // }

  // printf("Pontos turisticos:\n");

   // if(ponto_turistico1 > ponto_turistico2) {
   //     printf("Carta 1 venceu!\n");
   // } else {
   //     printf("Carta 2 venceu!\n");
   // }
   //printf("Densidade:\n");

   // if(densidade1 < densidade2) {
   //     printf("Carta 1 venceu!\n");
   // } else{
   //     printf("Carta 2 venceu!\n");
   // }
  // printf("PIB per Capita:\n");

   // if(capita1 > capita2) {
   //     printf("Carta 1 venceu!\n");
   // } else {
   //     printf("Carta 2 venceu!\n");
   // }

   // printf("Super Poder:\n");

   // if ( superPoder1 > superPoder2) {
   //     printf("Carta 1 venceu!\n");
   // } else {
   //     printf("Carta 2 venceu!\n");
   // }
// Avançando: criação de menu interativo com switch, if, else if, else para comparação de cartas
   //printf("***\n Comparação de Cartas ***\n");

   //printf("Escolha com qual atributo deseja jogar:\n");
  // printf("Lembre-se, para densidade, vence a carta com menor valor!!\n");
  // printf("1 - área;\n");
  // printf("2 - PIB;\n");
  // printf("3 - Pontos turisticos;\n");
  // printf("4 - Densidade;\n");
  // printf("5 - PIB per capita;\n");
  // printf("6 - Super Poder;\n");
   //scanf("%d", &opcao1);

   //switch (opcao1) {
   // case 1: 
   // printf("***Comparando Área***\n");

   // printf("%s: %.2f km2\n", nome_cidade1, area1);
   // printf("%s: %.2f km2\n", nome_cidade2, area2);
   // if(area1 > area2){
   //     printf("Carta 1 venceu!\n");
   // } else if(area1 < area2){
   //     printf("Carta 2 venceu!\n");
   // } else{
   //     printf("Empate!!\n");
   // }
   // break;
   // case 2: 
   // printf("***Comparando PIB***\n");
   // printf("%s: %.2f\n", nome_cidade1, pib1);
   // printf("%s: %.2f\n", nome_cidade2, pib2);
   // if (pib1 > pib2) {
   //     printf("Carta 1 venceu!\n");
   // } else if (pib1< pib2) {
   //     printf("Carta 2 venceu!\n");
   // } else{
   //     printf("Empate!!\n");
   // }
   // break;
   // case 3:
    // printf("***Comparando pontos turisticos***\n");
   // printf("%s: %d\n", nome_cidade1, ponto_turistico1);
    //printf("%s: %d\n", nome_cidade2, ponto_turistico2);

   // if (ponto_turistico1 > ponto_turistico2){
   //     printf("Carta 1 venceu!\n");
   // }else{
   // if( ponto_turistico1<ponto_turistico2){
   //     printf("Carta 2 venceu!\n");
   // }else{
   //     printf("Empate!\n");
   // } break;
   // case 4:
   // printf("***Comparando os pontos de densidade populacional***\n");
   // printf("%s: %.2f\n", nome_cidade1, densidade1);
   // printf("%s: %.2f\n", nome_cidade2, densidade2);
   // if (densidade1 < densidade2){
    //    printf("Carta 1 venceu!\n");
    //}
       // else if (densidade1 > densidade2){
           // printf("Carta 2 venceu!\n");
        //} else{
        //    printf("Empate!\n");
      //  } break;
    //case 5: 
    //printf("***Comparando PIB per Capita***\n");
    //printf("%s: %.2f\n", nome_cidade1, capita1);
   // printf("%s: %.2f\n", nome_cidade2, capita2);
   // if (capita1 > capita2){
     //   printf("Carta 1 venceu!\n");
   // } else if ( capita1 < capita2) {
    //    printf("Carta 2 venceu!\n");
    //} else{
      //  printf("Empate!\n");
    //} break;
    //case 6:
    //printf("***Comparando super poder***\n");
    //printf("%s: %.2f\n", nome_cidade1, superPoder1);
    //printf("%s: %.2f\n", nome_cidade2, superPoder2);
    //if (superPoder1 > superPoder2) {
      //  printf("Carta 1 venceu!\n");
    //} else if (superPoder1 < superPoder2) {
      //  printf("Carta 2 venceu!\n");
    //} else{
      //  printf("Empate!\n");
    //} break;
    // default:
  //   printf("Comando inválido!!\n");
//}
// Nivel avançado utilizando operadores ternários, e estruturas de dicisão.
int op1, op2;
// ===== Escolha dos atributos =====
    printf("\nEscolha o PRIMEIRO atributo:\n");
    printf("1 - Area\n2 - PIB\n3 - Pontos turisticos\n4 - Densidade\n5 - PIB per capita\n");
    scanf("%d", &op1);

    printf("\nEscolha o SEGUNDO atributo:\n");

    if (op1 != 1) printf("1 - Area\n");
    if (op1 != 2) printf("2 - PIB\n");
    if (op1 != 3) printf("3 - Pontos turisticos\n");
    if (op1 != 4) printf("4 - Densidade\n");
    if (op1 != 5) printf("5 - PIB per capita\n");

    scanf("%d", &op2);

     // ===== Aviso se repetir atributo =====
    if (op1 == op2) {
        printf("Aviso: voce escolheu o mesmo atributo duas vezes!\n");
    }

      // ===== Variáveis para valores =====
    float v1_c1, v1_c2, v2_c1, v2_c2;

    // Atributo 1
    switch(op1) {
        case 1: v1_c1 = area1; v1_c2 = area2; break;
        case 2: v1_c1 = pib1; v1_c2 = pib2; break;
        case 3: v1_c1 = ponto_turistico1; v1_c2 = ponto_turistico2; break;
        case 4: v1_c1 = densidade1; v1_c2 = densidade2; break;
        case 5: v1_c1 = capita1; v1_c2 = capita2; break;
        default: printf("Opcao invalida!\n");
    }
         // Atributo 2
    switch(op2) {
        case 1: v2_c1 = area1; v2_c2 = area2; break;
        case 2: v2_c1 = pib1; v2_c2 = pib2; break;
        case 3: v2_c1 = ponto_turistico1; v2_c2 = ponto_turistico2; break;
        case 4: v2_c1 = densidade1; v2_c2 = densidade2; break;
        case 5: v2_c1 = capita1; v2_c2 = capita2; break;
        default: printf("Opcao invalida!\n"); return 0;
    }
    // ===== Regra da densidade =====
    if (op1 == 4) {
        v1_c1 = 1 / v1_c1;
        v1_c2 = 1 / v1_c2;
    }

    if (op2 == 4) {
        v2_c1 = 1 / v2_c1;
        v2_c2 = 1 / v2_c2;
    }

    // ===== Soma =====
    float soma1 = v1_c1 + v2_c1;
    float soma2 = v1_c2 + v2_c2;

    // ===== Resultado =====
    printf("\n--- Resultado ---\n");
    printf("%s: %.2f + %.2f = %.2f\n", nome_cidade1, v1_c1, v2_c1, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", nome_cidade2, v1_c2, v2_c2, soma2);

    if (soma1 > soma2) {
        printf("Carta 1 venceu!\n");
    } else if (soma2 > soma1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

return 0;
}