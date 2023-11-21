/**
 * @file ex05.c
 * @author Gabriel Paludeto
 * @brief Dado dois vetores, A (4 elementos) e B (5 elementos), faça
    um programa em C que imprima todos os elementos comuns
    aos dois vetores.
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    int i, j;
    int vetorA[4] = {1, 2, 3, 4};
    int vetorB[5] = {3, 4, 5, 6, 7};

    for (i = 0 ; i < 5; i++) {
        for (j = 0; j < 4; j++) {
            if (vetorB[i] == vetorA[j]) {
                printf("O número %d é comum aos dois vetores\n", vetorB[i]);
            }
        }
    }

    return 0;

}