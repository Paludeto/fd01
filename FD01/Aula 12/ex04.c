/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief  Faça um programa que multiplique por 5 a
    matriz A (preenchida a partir do teclado) para gerar a
    matriz C.
 * @version 0.1
 * @date 2023-10-17
 *
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 2
#define COLUNAS 3

int main() {

    srand(time(NULL));
    int matrizA[LINHAS][COLUNAS];
    int matrizC[LINHAS][COLUNAS];
    
    printf("Preenchendo matriz A...\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizA[i][j] = rand() % 100;
        }
    }

    printf("Matriz A:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizC[i][j] = 5 * matrizA[i][j];
        }
    }

    printf("Matriz C:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}