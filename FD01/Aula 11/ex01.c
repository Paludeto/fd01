/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que leia e armazene dois vetores de
    tamanho 5. Ao final o programa deve calcular e exibir o vetor
    soma; 
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {
    
    int vetor1[5];
    int vetor2[5];
    int vetorSoma[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d do vetor 1\n", i + 1);
        scanf("%i", &vetor1[i]);
    }

    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d do vetor 2\n", i + 1);
        scanf("%i", &vetor2[i]);
    }

    printf("Valores vetor 1:\n");
    for (int i = 0; i < 5; i++) {
        printf("%i ", vetor1[i]);
    }

    printf("\n");

    printf("Valores vetor 2:\n");
    for (int i = 0; i < 5; i++) {
        printf("%i ", vetor2[i]);
    }

    printf("\n");
    
    for (int i = 0; i < 5; i++) {
        vetorSoma[i] = vetor1[i] + vetor2[i];
    }

    printf("Valores vetor soma:\n");
    for (int i = 0; i < 5; i++) {
        printf("%i ", vetorSoma[i]);
    }

    printf("\n");


    return 0;

}