/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief Construa um programa que leia uma matriz de tamanho
    5 x 5 e escreva:
     O valor e a localização (linha, coluna) do maior valor encontrado
    na matriz.
 * @version 0.1
 * @date 2023-10-17
 *
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 5
#define COLUNAS 5

int main() {

    srand(time(NULL));
    int matriz[LINHAS][COLUNAS];
    int maiorValor = 0;
    int linhaMaiorValor, colunaMaiorValor;

    printf("Preenchendo matriz...\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Encontrando o maior valor...\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaiorValor = i;
                colunaMaiorValor = j;
            }
        }
    }

    printf("O maior elemento é o número %d, na posição %dx%d\n", maiorValor, linhaMaiorValor, colunaMaiorValor);

    return 0;

}