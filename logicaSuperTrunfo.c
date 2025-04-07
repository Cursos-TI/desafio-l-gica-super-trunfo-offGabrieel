#include <stdio.h>

// Desafio Super Trunfo - Países
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 

int main() {
    
    // Definição das variáveis para armazenar as propriedades das cidades

    char estado[50], cidade[50], codigo[50];
    int populacao, turisticos, opcao;
    float area, PIB, densidade, capita;
    char primeiroAtributo, segundoAtributo;
    float somaFinal1, somaFinal2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);

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
    float area2, PIB2, densidade2, capita2;
    
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
    
    printf ("CARTA 01\n");
    printf ("Estado: %s\n", estado);
    printf ("Código da carta: %s\n", codigo);
    printf ("Nome da cidade: %s\n", cidade);
    printf ("População: %d Habitantes\n", populacao);
    printf ("Área: %.2f km²\n", area);
    printf ("PIB: %.2f Reais\n", PIB);
    printf ("Número de pontos turísticos: %d\n", turisticos);
    
    densidade = (float)(populacao / area);
    capita = (float)(PIB / populacao);
    
    printf ("Densidade Populacional:  %.2f hab/km²\n", densidade);
    printf ("PIB per Capita:  %.2f Reais\n", capita);
    printf ("\n\n");

    // Exibição dos Dados das Cartas:

    printf ("CARTA 02\n");
    printf ("Estado: %s\n", estado2);
    printf ("Código da carta: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", cidade2);
    printf ("População: %d Habitantes\n", populacao2);
    printf ("Área: %.2f km²\n", area2);
    printf ("PIB: %.2f Reais\n", PIB2);
    printf ("Número de pontos turísticos: %d\n", turisticos2);
    
    densidade2 = (float)(populacao2 / area2);
    capita2 = (float)(PIB2 / populacao2);
    
    
    printf ("Densidade Populacional:  %.2f hab/km²\n", densidade2);
    printf ("PIB per Capita:  %.2f reais\n", capita2);
    printf ("\n\n");
    
    // Calcular o Super Poder
    
    float densidadeInversa = (float)(area / populacao);
    float densidadeInversa2 = (float)(area2 / populacao2);
    
    float poder1 = populacao + area + PIB + turisticos + capita + densidadeInversa;
    float poder2 = populacao2 + area2 + PIB2 + turisticos2 + capita2 + densidadeInversa2;
    
    printf("SUPER PODER CARTA 01: %.2f\n", poder1);
    printf("SUPER PODER CARTA 02: %.2f\n", poder2);
    printf ("\n\n");

    // Comparação de Cartas:
    // Menu de seleção de atributos que deseja ser comparado
    
    printf("** Comparação das cartas! **\n");
    printf("Escolha o primeiro atributo!\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per capta\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção:\n");
    scanf("%s", &primeiroAtributo);

    // Sistema de interação com o menu

    switch (primeiroAtributo){
        case '1':
            printf("Você escolheu o atributo População!\n");
            printf("Carta 01: %d Habitantes\n", populacao);
            printf("Carta 02: %d Habitantes\n", populacao2);
            if (populacao > populacao2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (populacao < populacao2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + populacao;
            somaFinal2 = somaFinal2 + populacao2;
        break;
        case '2':
            printf("Você escolheu o atributo Área!\n");
            printf("Carta 01: %.2f km²\n", area);
            printf("Carta 02: %.2f km²\n", area2);
            if (area > area2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (populacao < populacao2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + area;
            somaFinal2 = somaFinal2 + area2;
        break;
        case '3':
            printf("Você escolheu o atributo PIB!\n");
            printf("Carta 01: %.2f Reais\n", PIB);
            printf("Carta 02: %.2f Reais\n", PIB2);
            if (PIB > PIB2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (populacao < populacao2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + PIB;
            somaFinal2 = somaFinal2 + PIB2;
        break;
        case '4':
            printf("Você escolheu o atributo Pontos turísticos!\n");
            printf("Carta 01: %d\n", turisticos);
            printf("Carta 02: %d\n", turisticos2);
            if (turisticos > turisticos2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (turisticos < turisticos2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + turisticos;
            somaFinal2 = somaFinal2 + turisticos2;
        break;
        case '5':
            printf("Você escolheu o atributo Densidade demográfica!\n");
            printf("Carta 01: %.2f hab/km²\n", densidade);
            printf("Carta 02: %.2f hab/km²\n", densidade2);
            if (densidade < densidade2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (densidade > densidade2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + densidade;
            somaFinal2 = somaFinal2 + densidade2;
        break;
        case '6':
            printf("Você escolheu o atributo PIB per Capita!\n");
            printf("Carta 01: %.2f Reais\n", capita);
            printf("Carta 02: %.2f Reais\n", capita2);
            if (capita > capita2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (capita < capita2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + capita;
            somaFinal2 = somaFinal2 + capita2;
        break;
        case '7':
            printf("Você escolheu o atributo Super Poder!\n");
            printf("Carta 01: %.2f\n", poder1);
            printf("Carta 02: %.2f\n", poder2);
            if (poder1 > poder2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (poder1 < poder2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + poder1;
            somaFinal2 = somaFinal2 + poder2;
        break;
        default:
            printf("Opção Inválida!\n");
        break;
    }
    
    printf("\n\n");

    // Segundo menu de interação para selecionar o atributo que deseja comparar

    printf("Escolha o segundo atributo!\n");
    printf("** Atenção: você deve escolher um atributo diferente do primeiro! **\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per capta\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção:\n");
    scanf("%s", &segundoAtributo);

    // segundo sistema de interação com o menu de comparações de atributos
    
    if (primeiroAtributo == segundoAtributo){
        printf("Você escolheu o mesmo atributo!\n");
    } else { 
        switch (segundoAtributo){
        case '1':
            printf("Você escolheu o atributo População!\n");
            printf("Carta 01: %d Habitantes\n", populacao);
            printf("Carta 02: %d Habitantes\n", populacao2);
            if (populacao > populacao2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (populacao < populacao2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + populacao;
            somaFinal2 = somaFinal2 + populacao2;
        break;
        case '2':
            printf("Você escolheu o atributo Área!\n");
            printf("Carta 01: %.2f km²\n", area);
            printf("Carta 02: %.2f km²\n", area2);
            if (area > area2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (populacao < populacao2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + area;
            somaFinal2 = somaFinal2 + area2;
        break;
        case '3':
            printf("Você escolheu o atributo PIB!\n");
            printf("Carta 01: %.2f Reais\n", PIB);
            printf("Carta 02: %.2f Reais\n", PIB2);
            if (PIB > PIB2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (populacao < populacao2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + PIB;
            somaFinal2 = somaFinal2 + PIB2;
        break;
        case '4':
            printf("Você escolheu o atributo Pontos turísticos!\n");
            printf("Carta 01: %d\n", turisticos);
            printf("Carta 02: %d\n", turisticos2);
            if (turisticos > turisticos2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (turisticos < turisticos2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + turisticos;
            somaFinal2 = somaFinal2 + turisticos2;
        break;
        case '5':
            printf("Você escolheu o atributo Densidade demográfica!\n");
            printf("Carta 01: %.2f hab/km²\n", densidade);
            printf("Carta 02: %.2f hab/km²\n", densidade2);
            if (densidade < densidade2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (densidade > densidade2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + densidade;
            somaFinal2 = somaFinal2 + densidade2;
        break;
        case '6':
            printf("Você escolheu o atributo PIB per Capita!\n");
            printf("Carta 01: %.2f Reais\n", capita);
            printf("Carta 02: %.2f Reais\n", capita2);
            if (capita > capita2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (capita < capita2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + capita;
            somaFinal2 = somaFinal2 + capita2;
        break;
        case '7':
            printf("Você escolheu o atributo Super Poder!\n");
            printf("Carta 01: %.2f\n", poder1);
            printf("Carta 02: %.2f\n", poder2);
            if (poder1 > poder2){
                printf("Carta 01: %s (%s) venceu!\n", estado, cidade);
            } else if (poder1 < poder2){
                printf("Carta 02: %s (%s) venceu!\n", estado2, cidade2);
            } else {
                printf("Houve um empate!\n");
            }
            somaFinal1 = somaFinal1 + poder1;
            somaFinal2 = somaFinal2 + poder2;
        break;
        default:
            printf("Opção Inválida!\n");
        break;
        }
    }
    printf("\n\n");

    // Exibição do resultado final com a soma e comparação dos dois atributos selecionados 
    
        printf("** Resultado Final **\n");
        printf("CARTA 01: %s (%s)\n", estado, cidade);
        printf("Soma dos atributos: %.2f\n", somaFinal1);
        printf("CARTA 02: %s (%s)\n", estado2, cidade2);
        printf("Soma dos atributos: %.2f\n", somaFinal2);
    
    if (somaFinal1 > somaFinal2){
        printf("CARTA 01 Venceu!\n");
    } else if(somaFinal1 < somaFinal2) {
        printf("CARTA 02 Venceu!\n");
    } else {
        printf("Houve um empate!\n");
    }
    
    return 0;
}