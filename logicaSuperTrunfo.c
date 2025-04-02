#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado[50], cidade[50], codigo[50];
    int populacao, turisticos;
    float area, PIB;
    float densidade;
    float capita;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf ("Carta 01\n");
    printf ("Estado: ");
    scanf ("%s", estado);
    printf ("Código da carta: ");
    scanf ("%s", codigo);
    printf ("Nome da cidade: ");
    scanf ("%s", cidade);
    printf ("População: ");
    scanf ("%d", &populacao);
    printf ("Área: ");
    scanf("%f", &area);
    printf ("PIB: ");
    scanf ("%f", &PIB);
    printf ("Número de pontos turísticos: ");
    scanf ("%d", &turisticos);
    printf ("\n\n\n");

    // CARTA 02

    char estado2[50], cidade2[50], codigo2[50];
    int populacao2, turisticos2;
    float area2, PIB2;
    float densidade2;
    float capita2;

    // Cadastro das Cartas:

    printf ("Carta 02\n");
    printf ("Estado: ");
    scanf ("%s", estado2);
    printf ("Código da carta: ");
    scanf ("%s", codigo2);
    printf ("Nome da cidade: ");
    scanf ("%s", cidade2);
    printf ("População: ");
    scanf ("%d", &populacao2);
    printf ("Área: ");
    scanf("%f", &area2);
    printf ("PIB: ");
    scanf ("%f", &PIB2);
    printf ("Número de pontos turísticos: ");
    scanf ("%d", &turisticos2);
    printf ("\n\n\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    printf ("CARTA 01\n");
    printf ("Estado: %s\n", estado);
    printf ("Código da carta: %s\n", codigo);
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %d Habitantes\n", populacao);
    printf ("Área: %.3f km²\n", area);
    printf ("PIB: %.2f Bilhões de reais\n", PIB);
    printf ("Número de pontos turísticos: %d\n", turisticos);
    
    densidade = (float)(populacao / area);
    capita = (float)(PIB / populacao);
    
    printf ("Densidade Populacional:  %.2f hab/km²\n", densidade);
    printf ("PIB per Capita:  %.2f reais\n", capita);
    printf ("\n\n\n");

    // Exibição dos Dados das Cartas:

    printf ("CARTA 02\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código da carta: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %d Habitantes\n", populacao2);
    printf ("Área: %.3f km²\n", area2);
    printf ("PIB: %.2f Bilhões de reais\n", PIB2);
    printf ("Número de pontos turísticos: %d\n", turisticos2);
    
    densidade2 = (float)(populacao2 / area2);
    capita2 = (float)(PIB2 / populacao2);
    
    
    printf ("Densidade Populacional:  %.2f hab/km²\n", densidade2);
    printf ("PIB per Capita:  %.2f reais\n", capita2);
    printf ("\n\n\n");
    
    // Calcular o Super Poder
    
    float densidadeInversa = (float)(area / populacao);
    float densidadeInversa2 = (float)(area2 / populacao2);
    
    float poder1 = populacao + area + PIB + turisticos + capita + densidadeInversa;
    float poder2 = populacao2 + area2 + PIB2 + turisticos2 + capita2 + densidadeInversa2;
    
    printf("SUPER PODER CARTA 01: %.2f\n", poder1);
    printf("SUPER PODER CARTA 02: %.2f\n", poder2);
    printf ("\n\n\n");

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    
    printf("Comparação das cartas! (Atributo: População)\n");
    printf("Carta 01: %s (%s): %d \n", estado, cidade, populacao);
    printf("Carta 02: %s (%s): %d \n", estado2, cidade2, populacao2);
    
    if(populacao > populacao2){
        printf("Resultado: Carta 01 (%s) venceu!\n", cidade);
    } else {
        printf("Resultado: Carta 02 (%s) venceu!\n", cidade2);
    }



    return 0;
}