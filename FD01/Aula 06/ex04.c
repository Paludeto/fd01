/**
 * @file ex04.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que calcule o imposto de renda a ser
    pago tendo como entrada o salário de um empregado. O
    imposto deve ser calculado da seguinte maneira:
    imposto = salário x alíquota – parcela da dedução
 * @version 0.1
 * @date 2023-08-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    float salario;
    float imposto;

    printf("Digite o seu salário\n");
    scanf("%f", &salario);

    if (salario < 1903.98) {
        printf("Isento de impostos\n");
        return 0;
    } else if (salario > 1903.98 && salario < 2826.65) {
        imposto = (salario * 0.075) - 142.80;
        printf("O imposto sobre o seu salário é igual a %2.f\n", imposto);
        return 0;
    } else if (salario > 2828.65 && salario < 3751.05) {
        imposto = (salario * 0.15) - 354.80;
        printf("O imposto sobre o seu salário é igual a %2.f\n", imposto);
        return 0;
    } else if (salario > 2828.65 && salario < 4664.68) {
        imposto = (salario * 0.225) - 636.13;
        printf("O imposto sobre o seu salário é igual a %.2f\n", imposto);
        return 0;
    } else if (salario >=  4664.68) {
        imposto = (salario * 0.275) - 869.36;
        printf("O imposto sobre o seu salário é igual a %.2f\n", imposto);
        return 0;
    }
    
    return 0;

}