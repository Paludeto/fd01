/**
 * @file ex05.c
 * @author Gabriel Paludeto
 * @brief 5) Faça um programa que calcule o fatorial de um número a ser
    digitado.
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int num;
    int fatorial = 1;

    printf("Digite um número para calcular o seu fatorial\n");
    scanf("%d", &num);

    for (;num > 1; num--) {
        fatorial = fatorial * num;
    }

    printf("%d\n", fatorial);

    return 0;

}