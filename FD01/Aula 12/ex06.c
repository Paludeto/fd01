/**
 * @file ex06.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que multiplique as matrizes A e D
    abaixo gerando matriz AD
 * @version 0.1
 * @date 2023-10-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS_1 2
#define COLUNAS_1 3
#define LINHAS_2 3
#define COLUNAS_2 2

int main() {

    srand(time(NULL));
    int matrizA[LINHAS_1][COLUNAS_1];
    int matrizB[LINHAS_2][COLUNAS_2];
    int matrizC[LINHAS_1][COLUNAS_2];
    
    if (COLUNAS_1 != LINHAS_2) {
        printf("Impossível multiplicar\n");
        return 0;
    }

    printf("Preenchendo matriz A...\n");
    for (int i = 0; i < LINHAS_1; i++) {
        for (int j = 0; j < COLUNAS_1; j++) {
            matrizA[i][j] = rand() % 100;
        }
    }

    printf("Matriz A:\n");
    for (int i = 0; i < LINHAS_1; i++) {
        for (int j = 0; j < COLUNAS_1; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }   

    printf("Preenchendo matriz B...\n");
    for (int i = 0; i < LINHAS_2; i++) {
        for (int j = 0; j < COLUNAS_2; j++) {
            matrizB[i][j] = rand() % 100;
        }
    }

    printf("Matriz B:\n");
    for (int i = 0; i < LINHAS_2; i++) {
        for (int j = 0; j < COLUNAS_2; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    } 

    //multiplica as matrizes
    for (int i = 0; i < LINHAS_1; i++) { 
        for (int j = 0; j < COLUNAS_2; j++) { 

            matrizC[i][j] = 0; 
  
            for (int k = 0; k < COLUNAS_2; k++) { 
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j]; 
            } 
  
        } 
    } 

    printf("Matriz C:\n");
    for (int i = 0; i < LINHAS_1; i++) {
        for (int j = 0; j < COLUNAS_2; j++) {
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    } 

    return 0;

}