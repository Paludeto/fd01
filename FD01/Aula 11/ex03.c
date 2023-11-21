/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief Leia um vetor A com 10 elementos inteiros correspondentes
    as idades de um grupo de pessoas. Escreva um programa que
    conte e exiba a quantidade de pessoas que possuem idade
    superior a 35 anos.
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    int vetorA[10];
    int contador = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d do vetor A\n", i + 1);
        scanf("%i", &vetorA[i]);
    }

    
    for (int i = 0; i < 10; i++) {
        if (vetorA[i] > 35) {
            contador++;
        }
    }

    printf("A quantidade de pessoas maiores de 35 anos é igual a %d\n", contador);

    return 0;

}