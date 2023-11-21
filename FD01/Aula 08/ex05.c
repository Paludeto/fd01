/**
 * @file ex05.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba um número real, calcule e
    exiba o quadrado dele. O programa deverá repetir esse
    procedimento para 10 números, um de cada vez.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    float num, quadrado;
    int contador = 1;

    while(contador <= 10) {
        printf("Digite um número real para descobrir o seu quadrado:\n");
        scanf("%f", &num);
        quadrado = pow(num, 2);
        printf("O quadrado do número %.2f é igual a %.2f\n", num, quadrado);
        contador++;
    } //while

    return 0;

} //main