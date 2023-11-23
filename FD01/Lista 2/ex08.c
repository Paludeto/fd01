/**
 * @file ex08.c
 * @author  Faça um programa que receba o nome e o preço de custo de 3 produtos. Para isso, crie, além da matriz com os nomes (tamanho 20), uma matriz 3x3 de preços de produtos onde cada coluna representa: 
 * coluna 0 é o preço de custo (digitado pelo usuário), coluna 1 será o preço à vista calculado (preço de custo acrescido em 10%), coluna 2 é o preço a prazo calculado (preço de custo acrescido em 20%).  Para tanto, relacione o índice/linha da matriz de preços com o índice/linha de um vetor bidimensional de strings que armazenará o nome dos produtos.
    O programa deve exibir, um por um, o nome do produto e a sua tabela com todos os preços (custo, à vista e a prazo). 
 * @brief 
 * @version 0.1
 * @date 2023-11-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>

void preencheNomes(char nomes[3][21]);
void preenchePrecos(float precos[3][3]);
void exibeProdutos(char nomes[3][21], float precos[3][3]) ;


int main() {

    char nomes[3][21];
    float precos[3][3];

    preencheNomes(nomes);
    preenchePrecos(precos);
    exibeProdutos(nomes, precos);

    return 0;

}

/**
 * @brief Preenche nome dos produtos
 * 
 * @param nomes 
 */
void preencheNomes(char nomes[3][21]) {

    for (int i = 0; i < 3; i++) {

        printf("Digite o nome do produto de número %d:\n", i + 1);
        fgets(nomes[i], 21, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
        setbuf(stdin, NULL);

    }

}

/**
 * @brief Preenche preço dos produtos
 * 
 * @param precos 
 */
void preenchePrecos(float precos[3][3]) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                printf("Digite o preço de custo do produto %d\n", i + 1);
                scanf("%f", &precos[i][j]);
            } else if (j == 1) {
                precos[i][j] = precos[i][0] * 1.1;
            } else {
                precos[i][j] = precos[i][0] * 1.2;
            }
        }
    }


}

/**
 * @brief Exibe produtos e seus respectivos preços
 * 
 * @param nomes 
 * @param precos 
 */
void exibeProdutos(char nomes[3][21], float precos[3][3]) {

    for (int i = 0; i < 3; i++) {
        printf("%-20s | ", nomes[i]);
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                printf("Preço de custo: %.2f | ", precos[i][j]);
            } else if (j == 1) {
                printf("Preço à vista: %.2f | ", precos[i][j]);
            } else {
                printf("Preço à prazo: %.2f |\n", precos[i][j]);
            }
        }
    }

}
