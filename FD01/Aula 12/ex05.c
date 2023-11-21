/**
 * @file ex05.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que some as matrizes A e B,
    gerando C
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
    int matrizB[LINHAS][COLUNAS];
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

    printf("Preenchendo matriz B...\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizB[i][j] = rand() % 100;
        }
    }

    printf("Matriz B:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }  

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
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