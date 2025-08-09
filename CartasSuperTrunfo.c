#include <stdio.h>

int main() {
    // definição das variáveis
    char estado1, estado2, codigo1[4], codigo2[4], nome1[20], nome2[20];
    int popul1, popul2, turis1, turis2;
    float area1, area2, pib1, pib2;
    // mensagem de boas-vindas e introdução
    printf("Seja bem vindo ao Super Trunfo: Países em C! :D\n\n");
    printf("Neste Brasil fictício, teremos 8 estados e 4 cidades em cada estado.\n");
    printf("Vamos adicionar duas cidades. Comece adicionando os dados da primeira carta!\n");
    // dados da primeira carta
    printf("Digite uma letra de A a H correspondente ao Estado: ");
    scanf(" %c", &estado1);

    printf("Agora insira o código da carta! O formato deve ser a letra escolhida para o estado e um número de 01 a 04 (A01, por ex): ");
    scanf(" %s", codigo1);

    printf("Boa escolha! E qual o nome dessa cidade? ");
    scanf(" %[^\n]", nome1);

    getchar();

    printf("Quantos habitantes ela possui? ");
    scanf(" %i", &popul1);

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
    scanf(" %[^\n]", nome2);

    getchar();

    printf("Quantos habitantes residem nela? ");
    scanf(" %i", &popul2);

    printf("Qual sua área em km²? ");
    scanf(" %f", &area2);

    printf("Qual o PIB? ");
    scanf(" %f", &pib2);

    printf("Por fim, quantos pontos turísticos ela possui? ");
    scanf(" %i", &turis2);

    // exibição das cartas
    printf("\n Muito bem! Vamos ver as cartas cadastradas:\n");

    printf("--------CARTA 1--------\n");
    printf("CÓDIGO: %s - - ESTADO: %c \n", codigo1, estado1);
    printf("- - %s - - \n", nome1);
    printf("HAB: %i - - PIB: R$ %.2f \n", popul1, pib1);
    printf("%.0fkm² - - %i pontos turísticos. \n \n", area1, turis1);

    printf("--------CARTA 2--------\n");
    printf("CÓDIGO: %s - - ESTADO: %c \n", codigo2, estado2);
    printf("- - %s - - \n", nome2);
    printf("HAB: %i - - PIB: R$ %.2f \n", popul2, pib2);
    printf("%.0fkm² - - %i pontos turísticos. \n", area2, turis2);

    return 0;
}
// mestre, tentei seguir todas as orientações da IA que responde feedback aqui no github, consegui deixar a entrada de dados do nome da cidade funcionando
// corretamente com espaços, apenas não segui a orientação da IA de organizar o código das cartas em uma struct porque ainda não vi esse conteúdo (nível novato)
// e estou mantendo o código simples e com os conteúdos que vimos até então, tal como foi orientado. Apenas me estendi um pouco com o scanf e getchar pra ler os
// espaços nos nomes.
