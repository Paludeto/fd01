/**
 * @file ex09.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba e armazene uma matriz de números inteiros de tamanho 4x3, 
 * em seguida o programa deverá exibir:
   a) A soma de todos os elementos pares positivos da matriz;
   b) A média de todos os elementos da matriz;
   c) A quantidade de todos os elementos impares da matriz;
   d) A soma dos elementos da segunda linha da matriz;
   e) O maior elemento da terceira coluna da matriz;
 * @version 0.1
 * @date 2023-11-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <limits.h>

#define LINHAS 4
#define COLUNAS 3

void preencheMatriz(int matriz[LINHAS][COLUNAS]);
void exibeMatriz(int matriz[LINHAS][COLUNAS]);
int somaParesPositivos(int matriz[LINHAS][COLUNAS]);
float calculaMediaElementos(int matriz[LINHAS][COLUNAS]);
int calculaImpares(int matriz[LINHAS][COLUNAS]);
int somaSegundaLinha(int matriz[LINHAS][COLUNAS]);
int retornaMaiorColuna3(int matriz[LINHAS][COLUNAS]);

int main() {

    int matriz[LINHAS][COLUNAS];
    int somaPares;
    int quantiaImpares;
    int somaLinha2;
    int maiorColuna3;
    float mediaElementos;

    preencheMatriz(matriz);
    exibeMatriz(matriz);
    somaPares = somaParesPositivos(matriz);
    mediaElementos = calculaMediaElementos(matriz);
    quantiaImpares = calculaImpares(matriz);
    somaLinha2 = somaSegundaLinha(matriz);
    maiorColuna3 = retornaMaiorColuna3(matriz);

    printf("Soma dos pares maiores que 0: %d\n", somaPares);
    printf("Média dos elementos: %.2f\n", mediaElementos);
    printf("Quantia de ímpares: %d\n", quantiaImpares);
    printf("Soma dos elementos da linha 2: %d\n", somaLinha2);
    printf("Maior elemento da coluna 3: %d\n", maiorColuna3);

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
            printf("%3d ", matriz[i][j]);
        }
        printf(" |\n");
    }

}

//item A
int somaParesPositivos(int matriz[LINHAS][COLUNAS]) {

    int somaParesPositivos = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if ((matriz[i][j] % 2 == 0) && (matriz[i][j] > 0)) {
                somaParesPositivos += matriz[i][j];
            }
        }
    }

    return somaParesPositivos;

}

//item B
float calculaMediaElementos(int matriz[LINHAS][COLUNAS]) {

    float mediaElementos = 0;
    int totalElementos = LINHAS * COLUNAS;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            mediaElementos += matriz[i][j];
        }
    }
    
    return mediaElementos / totalElementos;

}

//item C
int calculaImpares(int matriz[LINHAS][COLUNAS]) {

    int contaImpares = 0;

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] % 2 == 1) {
                contaImpares++;
            }
        }
    }
    
    return contaImpares;

}

//item D
int somaSegundaLinha(int matriz[LINHAS][COLUNAS]) {

    int somaSegundaLinha = 0;

    for (int i = 0; i < 3; i++) {
        somaSegundaLinha += matriz[1][i];
    }

    return somaSegundaLinha;

}

//item E
int retornaMaiorColuna3(int matriz[LINHAS][COLUNAS]) {

    int maior = INT_MIN;

    for (int i = 0; i < 4; i++) {
        if (matriz[i][2] > maior) {
            maior = matriz[i][2];
        }
    }

    return maior;

}

