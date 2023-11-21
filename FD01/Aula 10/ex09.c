/**
 * @file ex09.c
 * @author Gabriel Paludeto
 * @brief 9) Desenvolva um programa que receba um numero
    tamanho e exiba um quadrado de tamanho tamanho
    utilizando o carácter #
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int tamanho;
    int i, j;

    printf("Digite o tamanho do quadrado\n");
    scanf("%d", &tamanho);

    for (i = 1; i <= tamanho; i++) {
        for (j = 1; j <= tamanho; j++) {
            printf("# ");
        }
        printf("\n");
    }

    return 0;

}
