/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Na tarde de ontem, 06 de dezembro, alguns servidores da Amazon (AWS) pararam de funcionar.
    Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.

    Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e reestabelecer os serviços.

    Para isso, faça um programa que armazene os dados de 5 cidades onde estão localizados os servidores com problemas, cada cidade possui: nome (20 caracteres), quantidade de servidores ativos(inteiro), quantidade de servidores com problemas (inteiro) e quantidade total de servidores(inteiro).

    a) Faça um programa que receba os dados das 5 cidades: nome(strings), a quantidade de servidores ativos
       a quantidade de servidores com falha (salvos nas duas primeiras colunas de uma matriz de inteiros 5x3).
       Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.
    b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;
    c) Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes,
       as 3 quantidades de servidores de todos as cidades.
    d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez).
       Exiba uma mensagem informando também caso não encontre o nome buscado.
    e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de servidores com problemas (duas casas decimais).
    f) Utilizando estrutura de repetição, calcule e exiba o percentual total de servidores ativos e de servidores com problemas.
    g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades que têm o número de servidores com problemas maiores que os servidores ativos.
       Em seguida exiba o nome de todas as cidades (alteradas ou não).
       Ex: "São Paulo" -> "São Paulo Defeated"

    Obs.:
    Sempre que possível, utilize estruturas de repetição;
    Os itens devem ser executados sequencialmente (Não é um menu);

    Treino Extra:
    Faça cada item, de A a G, em uma função separada. Não utilize variáveis globais.
 * @version 0.1
 * @date 2023-11-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <float.h>

void preencheDados(char nomes[5][64], int servidores[5][3]);
void calculaServidores(int servidores[5][3]);
void exibeTabela(char nomes[5][64], int servidores[5][3]);
void buscaCidade(char nomes[5][64], int servidores[5][3]);
void calculaPercentualInativo(char nomes[5][64], int servidores[5][3], float percentualInativo[5]);
void calculaPercentualAtivo(int servidores[5][3], float percentualAtivo[5]);
void exibePercentuais(char nomes[5][64], float percentualInativo[5], float percentualAtivo[5]);
void alteraDefeated(char nomes[5][64], float percentualInativo[5], float percentualAtivo[5]);

int main() {

    char nomes[5][64];
    int servidores[5][3];
    float percentualInativo[5];
    float percentualAtivo[5];

    preencheDados(nomes, servidores);
    calculaServidores(servidores);
    exibeTabela(nomes, servidores);
    buscaCidade(nomes, servidores);
    calculaPercentualInativo(nomes, servidores, percentualInativo);
    calculaPercentualAtivo(servidores, percentualAtivo);
    exibePercentuais(nomes, percentualInativo, percentualAtivo);
    alteraDefeated(nomes, percentualInativo, percentualAtivo);

    return 0;

}

void preencheDados(char nomes[5][64], int servidores[5][3]) {

    for (int i = 0; i < 5; i++) {

        printf("Digite o nome da cidade %d: \n", i + 1);
        fgets(nomes[i], 101, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
        setbuf(stdin, NULL); 

        printf("Digite o número de servidores ativos da cidade de %s\n", nomes[i]);
        scanf("%i", &servidores[i][0]);

        while (servidores[i][0] < 0) {
            printf("Digite um valor não negativo\n");
            scanf("%i", &servidores[i][0]);
        }

        printf("Digite o número de servidores inativos da cidade de %s\n", nomes[i]);
        scanf("%i", &servidores[i][1]);

        while (servidores[i][1] < 0) {
            printf("Digite um valor não negativo\n");
            scanf("%i", &servidores[i][1]);
        }

        setbuf(stdin, NULL); 

    }

}

void calculaServidores(int servidores[5][3]) {

    for (int i = 0; i < 5; i++) {
        servidores[i][2] = servidores[i][0] + servidores[i][1];
    }

}

void exibeTabela(char nomes[5][64], int servidores[5][3]) {

    for (int i = 0; i < 5; i++) {
        printf("%-30s  |\t", nomes[i]);
        printf("Ativos: %3d  |\t", servidores[i][0]);
        printf("Inativos: %3d  |\t", servidores[i][1]);
        printf("Total de servidores: %3d \n", servidores[i][2]);
    }

}

void buscaCidade(char nomes[5][64], int servidores[5][3]) {

    char nome[21];
    int encontrado = 0;
    
    printf("Digite o nome da cidade a ser buscada\n");
    fgets(nome, 21, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    setbuf(stdin, NULL);

    for (int i = 0; i < 5; i++) {
        if (strcmp(nome, nomes[i]) == 0) {
            encontrado = 1;
            printf("Cidade de %s encontrada!\n", nome);
            printf("%-20s  |\t", nomes[i]);
            printf("Ativos: %3d  |\t", servidores[i][0]);
            printf("Inativos: %3d  |\t", servidores[i][1]);
            printf("Total de servidores: %3d \n", servidores[i][2]);
        }
    }

    if (encontrado == 0) {
        printf("Cidade não encontrada\n");
    }

}

void calculaPercentualInativo(char nomes[5][64], int servidores[5][3], float percentualInativo[5]) {

    int indiceMaior = 0;
    float maior = FLT_MIN;
    
    for (int i = 0; i < 5; i++) {

        percentualInativo[i] = (float) servidores[i][1] / servidores[i][2];

        if (percentualInativo[i] > maior) {
            maior = percentualInativo[i];
            indiceMaior = i;
        }

    }

    printf("%s é a cidade com mais servidores inativos, com %.2f %% dos servidores inativos\n", nomes[indiceMaior], maior * 100);

}

void calculaPercentualAtivo(int servidores[5][3], float percentualAtivo[5]) {

    for (int i = 0; i < 5; i++) {
        percentualAtivo[i] = (float) servidores[i][0] / servidores[i][2];
    }

}

void exibePercentuais(char nomes[5][64], float percentualInativo[5], float percentualAtivo[5]) {

    for (int i = 0; i < 5; i++) {
        printf("Cidade: %-20s\n", nomes[i]);
        printf("Percentual de servidores inativos: %.2f %%\n", percentualInativo[i] * 100);
        printf("Percentual de servidores ativos: %.2f %%\n", percentualAtivo[i] * 100);
        printf("=========================================\n");
    }

}

void alteraDefeated(char nomes[5][64], float percentualInativo[5], float percentualAtivo[5]) {

    for (int i = 0; i < 5; i++) {

        printf("%-20s -> ", nomes[i]);

        if (percentualInativo[i] > percentualAtivo[i]) {
            strcat(nomes[i], " - Defeated");
        }

        printf(" \n", nomes[i]);
    }

} 