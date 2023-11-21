/**
 * @file ex04.c
 * @author Faça um programa que leia e armazene um vetor (VetorA) de inteiros e tamanho 10. Crie um VetorB, de mesmo tamanho, 
 * gerado a partir do Vetor A invertido (de trás para frente). 
 * Em seguida, calcule o VetorC que deverá ser o resultado do VetorA multiplicado pelo escalar 3 e em seguida subtraído do Vetor B.
 * @brief 
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO 10

void preencheVetor(int vetor[TAMANHO]);
void inverteVetor(int vetorA[TAMANHO], int vetorB[TAMANHO]);
void exibeVetor(int vetor[TAMANHO]);

int main() {

    int vetorA[TAMANHO];
    int vetorB[TAMANHO];
    int vetorC[TAMANHO];

    preencheVetor(vetorA);
    exibeVetor(vetorA);
    inverteVetor(vetorA, vetorB);
    exibeVetor(vetorB);

    for (int i = 0; i < TAMANHO; i++) {
        vetorB[i] = vetorA[i];
    }

    for (int i = 0; i < TAMANHO; i++) {
        vetorC[i] = vetorA[i] * 3 - vetorB[i];
    }

    exibeVetor(vetorC);
    
    return 0;   

}

void preencheVetor(int vetor[TAMANHO]) {

    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 100;
    }

}

void inverteVetor(int vetorA[TAMANHO], int vetorB[TAMANHO]) {

    int j = TAMANHO - 1;

    for (int i = 0; i < TAMANHO; i++) {
        vetorB[j] = vetorA[i];
        j--;
    }

}


void exibeVetor(int vetor[TAMANHO]) {

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

}