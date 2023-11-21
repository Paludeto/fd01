/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Crie um algoritmo que receba 10 números e os armazene em
    um vetor A. Em seguida, gere o vetor B onde cada elemento é o
    quadrado do valor da mesma posição no vetor A 
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <math.h>

int main() {

    int vetorA[10];
    int vetorB[10];

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d do vetor A\n", i + 1);
        scanf("%i", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++) {
        vetorB[i] = pow(vetorA[i], 2);
    }

    printf("Valores vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("%i ", vetorB[i]);
    }

    printf("\n");

    return 0;

}