/**
 * @file ex06.c
 * @author Gabriel Paludeto
 * @brief 6) Faça um programa que receba 10 números e calcule o
    quadrado desse número (um de cada vez).
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    int i;
    float num;
    float quadrado;

    for (i = 1; i <= 10; i++) {
        printf("Digite um número para descobrir o seu quadrado\n");
        scanf("%f", &num);

        quadrado = pow(num, 2);

        printf("O quadrado de %.2f é igual a %.2f\n", num, quadrado);
    }

    return 0;

}