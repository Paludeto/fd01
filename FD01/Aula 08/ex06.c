/**
 * @file ex06.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba um número real, calcule e
    exiba o quadrado dele. O programa deverá calcular o quadrado
    de vários números e finalizar quando for digitado um número
    negativo ou zero.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    float quadrado;
    float num = 1;

    while (num > 0 && num != 0) {
        printf("Digite um número para descobrir o seu quadrado:\n");
        scanf("%f", &num);
        quadrado = pow(num, 2);
        printf("O quadrado do número %.2f é igual a %.2f\n", num, quadrado);
    } //while

    return 0;

} //while