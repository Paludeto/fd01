/**
 * @file ex03.c
 * @author your name (you@domain.com)
 * @brief Faça um programa que solicite o tamanho de um quadrado e mostre a borda de um quadrado utilizando o caracter #.
 * @version 0.1
 * @date 2023-11-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int tamanhoQuadrado;

    printf("Digite o tamanho desejado para o quadrado:\n");
    scanf("%d", &tamanhoQuadrado);

    for (int i = 0; i < tamanhoQuadrado; i++) {

        for (int j = 0; j < tamanhoQuadrado; j++) {
            
            if (i == 0 || i == tamanhoQuadrado - 1) {
                printf("# ");
            } else if (j == 0 || j == tamanhoQuadrado - 1) {
                printf("# ");
            } else {
                printf(" ");
            }

        }

        printf("\n");

    }

    return 0;

}