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
    scanf(" %s", nome1);

    printf("Quantos habitantes ela possui? ");
    scanf(" %i", &popul1);

    printf("Qual sua área em km²? ");
    scanf(" %f", &area1);

    printf("Qual o PIB? ");
    scanf(" %f", &pib1);

    printf("Última característica! Quantos pontos turísticos ela possui? ");
    scanf(" %i", &turis1);
    // dados da segunda carta
    printf("Muito bem, agora vamos adicionar a segunda carta do nosso jogo.\n Digite a letra correspondente ao Estado: ");
    scanf(" %c", &estado2);

    printf("Agora o código da segunda carta: ");
    scanf(" %s", codigo2);

    printf("Qual o nome da cidade? ");
    scanf(" %s", nome2);

    printf("Quantos habitantes residem nela? ");
    scanf(" %i", &popul2);

    printf("Qual sua área em km²? ");
    scanf(" %f", &area2);

    printf("Qual o PIB? ");
    scanf(" %f", &pib2);

    printf("Por fim, quantos pontos turísticos ela possui? ");
    scanf(" %i", &turis2);

    return 0;
}
// mestre, tentei fazer o código da forma mais limpa possível e de uma maneira que realmente parecesse uma interação com o usuário. o nome da cidade não aceita espaços,
// pesquisei e vi que é necessário outro tipo de comando para isso mas não arrisquei tentar usá-lo pois as instruções da atividade pedem para manter as coisas
// simples com os aprendizados do nível novato. confesso que estou incomodado do nome da cidade não aceitar espaços. era pra ficar assim mesmo? pode me dar um feedback?
// obrigado!
