/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba a altura de uma pessoa e
    calcule e exiba seu peso ideal utilizando a seguinte:
    peso ideal = 72.7 x altura – 58
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    float altura = 0;
    float pesoIdeal;

    printf("Digite a sua altura em metros:\n");
    scanf("%f", &altura);

    pesoIdeal = 72.7 * altura - 58.00;

    printf("O seu peso ideal é de %.2f\n", pesoIdeal);

    return 0;

}