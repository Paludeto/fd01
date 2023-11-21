/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Faça um algoritmo que leia uma matriz 3 por 3 (3x3) e
    retorna a soma dos elementos da sua diagonal principal e
    da sua diagonal secundária;
 * @version 0.1
 * @date 2023-10-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 3 
#define COLUNAS 3

int main() {

    srand(time(NULL));
    int matriz[LINHAS][COLUNAS];
    int somaPrincipal = 0;
    int somaSecundaria = 0;

    printf("Preenchendo matriz...\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        somaPrincipal += matriz[i][i];
    }

    for (int i = 0; i < LINHAS; i++) {
        somaSecundaria += matriz[i][(LINHAS - 1) - i];
    }

    printf("Matriz:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Soma da diagonal principal: %d\n", somaPrincipal);
    printf("Soma da diagonal secundária: %d\n", somaSecundaria);

    return 0;

}