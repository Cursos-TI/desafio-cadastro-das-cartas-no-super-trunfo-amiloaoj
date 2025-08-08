#include <stdio.h>

int main() {

    char estado1, estado2, codigo1[4], codigo2[4], nome1[20], nome2[20];
    int popul1, popul2, turis1, turis2;
    float area1, area2, pib1, pib2;

    printf("Seja bem vindo ao Super Trunfo: Países em C! :D\n\n");
    printf("Neste Brasil fictício, teremos 8 estados e 4 cidades em cada estado.\n");
    printf("Vamos adicionar duas cidades. Comece adicionando os dados da primeira carta!\n");

    printf("Digite uma letra de A a H correspondente ao Estado: ");
    scanf(" %c", &estado1);

    printf("Agora insira o código da carta! O formato deve ser a letra escolhida para o estado e um número de 01 a 04 (A01, por ex): ");
    scanf(" %s", codigo1);

    printf("Boa escolha! E qual o nome dessa cidade? ");
    scanf(" %s", nome1);

    printf("Quantos habitantes ela possui? ");
    scanf(" %i", &popul1);

    printf("Qual sua área em km²? ");
    scanf(" %f", &area1);

    printf("Qual o PIB? ");
    scanf(" %f", &pib1);

    printf("Última característica! Quantos pontos turísticos ela possui? ");
    scanf(" %i", &turis1);

    return 0;
}
