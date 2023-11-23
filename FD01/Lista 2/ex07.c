/**
 * @file ex07.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba duas matrizes de números inteiros A e B, ambas 2x3. 
 * Em seguida calcule uma matriz C segundo a fórmula C = (A + B) * 2. Mostre a matriz C resultante.
 * @version 0.1
 * @date 2023-11-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 2
#define COLUNAS 3

void preencheMatriz(int matriz[LINHAS][COLUNAS]);
void exibeMatriz(int matriz[LINHAS][COLUNAS]);
void preencheMatriz(int matriz[LINHAS][COLUNAS]);
void calculaMatrizC(int matrizA[LINHAS][COLUNAS], int matrizB[LINHAS][COLUNAS], int matrizC[LINHAS][COLUNAS]);

int main () {

    int matrizA[LINHAS][COLUNAS];
    int matrizB[LINHAS][COLUNAS];
    int matrizC[LINHAS][COLUNAS];

    preencheMatriz(matrizA);
    preencheMatriz(matrizB);

    printf("Matriz A:\n");
    exibeMatriz(matrizA);

    printf("Matriz B:\n");
    exibeMatriz(matrizB);

    calculaMatrizC(matrizA, matrizB, matrizC);
    printf("Matriz C:\n");
    exibeMatriz(matrizC);

    return 0;

}

void preencheMatriz(int matriz[LINHAS][COLUNAS]) {

    srand(time(NULL));
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = rand() % 100;
        }
    }

}

void exibeMatriz(int matriz[LINHAS][COLUNAS]) {

    for (int i = 0; i < LINHAS; i++) {
        printf("| ");
        for (int j = 0; j < COLUNAS; j++) {
            printf("%3i ", matriz[i][j]);
        }
        printf(" |");
        printf("\n");
    }

}

void calculaMatrizC(int matrizA[LINHAS][COLUNAS], int matrizB[LINHAS][COLUNAS], int matrizC[LINHAS][COLUNAS]) {

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matrizC[i][j] = (matrizA[i][j] + matrizB[i][j]) * 2;
        }
    }
    
}
