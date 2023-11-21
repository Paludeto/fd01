/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Crie uma matriz identidade com dimensões 5 x 5;
 * @version 0.1
 * @date 2023-10-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {

    int matriz[LINHAS][COLUNAS];

    if (LINHAS != COLUNAS) {
        printf("A matriz identidade precisa ser quadrada\n");
        return 0;
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz identidade %dx%d:\n", LINHAS, COLUNAS);
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}
