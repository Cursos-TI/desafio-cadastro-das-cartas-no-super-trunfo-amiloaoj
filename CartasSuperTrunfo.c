#include <stdio.h>

int main() {
    // definição das variáveis
    char estado1, estado2, codigo1[4], codigo2[4], cidade1_nome[50], cidade2_nome[50];
    int turis1, turis2;
    unsigned long int popul1, popul2;
    float area1, area2, pib1, pib2, pibpc1, pibpc2, densip1, densip2; // pibpc = pib per capita; densip = densidade populacional

    // mensagem de boas-vindas e introdução
    printf("| | | Seja bem vindo ao Super Trunfo: Países em C! :D | | |\n\n");
    printf("Neste Brasil fictício, teremos 8 estados e 4 cidades em cada estado.\n");
    printf("Vamos adicionar duas cidades. Comece adicionando os dados da primeira carta!\n");
    // dados da primeira carta
    printf("Digite uma letra de A a H correspondente ao Estado: ");
    scanf(" %c", &estado1);

    printf("Agora insira o código da carta! O formato deve ser a letra escolhida para o estado e um número de 01 a 04 (A01, por ex): ");
    scanf(" %s", codigo1);

    printf("Boa escolha! E qual o nome dessa cidade? ");
    scanf(" %[^\n]", cidade1_nome);

    getchar();

    printf("Quantos habitantes ela possui? ");
    scanf(" %lu", &popul1);

    printf("Qual sua área em km²? ");
    scanf(" %f", &area1);

    printf("Qual o PIB? ");
    scanf(" %f", &pib1);

    printf("Última característica! Quantos pontos turísticos ela possui? ");
    scanf(" %i", &turis1);
    // dados da segunda carta
    printf("Muito bem, agora vamos adicionar a segunda carta do nosso jogo.\n");
    printf("Digite a letra correspondente ao Estado: ");
    scanf(" %c", &estado2);

    printf("Agora o código da segunda carta: ");
    scanf(" %s", codigo2);

    printf("Qual o nome da cidade? ");
    scanf(" %[^\n]", cidade2_nome);

    getchar();

    printf("Quantos habitantes residem nela? ");
    scanf(" %lu", &popul2);

    printf("Qual sua área em km²? ");
    scanf(" %f", &area2);

    printf("Qual o PIB? ");
    scanf(" %f", &pib2);

    printf("Por fim, quantos pontos turísticos ela possui? ");
    scanf(" %i", &turis2);

    // cálculos de densidade populacional e pib per capita
    pibpc1 = pib1 / (float) popul1;
    pibpc2 = pib2 / (float) popul2;
    densip1 = (float) popul1 / area1;
    densip2 = (float) popul2 / area2;

    // cálculos de super-poder
    float superpoder1 = area1 + (float) popul1 + pib1 + pibpc1 + (float) turis1 + (1.0 / densip1);
    float superpoder2 = area2 + (float) popul2 + pib2 + pibpc2 + (float) turis2 + (1.0 / densip2);

    // exibição das cartas
    printf("\n Muito bem! Vamos ver as cartas cadastradas:\n");

    printf("--------CARTA 1--------\n");
    printf("CÓDIGO: %s - - ESTADO: %c \n", codigo1, estado1);
    printf("- - %s - - \n", cidade1_nome);
    printf("HAB: %lu \n", popul1);
    printf("PIB: R$ %.2f \n", pib1);
    printf("%.0fkm² \n", area1);
    printf("%i pontos turísticos. \n", turis1);
    printf("PIB per Capita: R$%.2f \n", pibpc1);
    printf("Densidade Populacional: %.2f hab/km² \n", densip1);
    printf("Super Poder: %.2f \n \n", superpoder1);

    printf("--------CARTA 2--------\n");
    printf("CÓDIGO: %s - - ESTADO: %c \n", codigo2, estado2);
    printf("- - %s - - \n", cidade2_nome);
    printf("HAB: %lu \n", popul2);
    printf("PIB: R$ %.2f \n", pib2);
    printf("%.0fkm². \n", area2);
    printf("%i pontos turísticos. \n", turis2);
    printf("PIB per Capita: R$%.2f \n", pibpc2);
    printf("Densidade Populacional: %.2f hab/km² \n", densip2);
    printf("Super Poder: %.2f \n \n", superpoder2);

    // comparação das cartas - simplificado como exigido
    int resultadoPopul = popul1 > popul2;
    int resultadoArea = area1 > area2;
    int resultadoPib = pib1 > pib2;
    int resultadoPibpc = pibpc1 > pibpc2;
    int resultadoTuris = turis1 > turis2;
    int resultadoDensip = densip1 < densip2;
    int resultadoSuperpoder = superpoder1 > superpoder2;

    printf("Agora, vamos comparar as cartas!\n");
    printf("1 é vítória da carta 1, 0 é vitória da carta 2.\n");
    printf("População: %d\n", resultadoPopul);
    printf("Área: %d\n", resultadoArea);
    printf("PIB: %d\n", resultadoPib);
    printf("PIB per Capita: %d\n", resultadoPibpc);
    printf("Pontos Turísticos: %d\n", resultadoTuris);
    printf("Densidade Populacional: %d\n", resultadoDensip);
    printf("Super Poder: %d\n", resultadoSuperpoder);

    return 0;
}