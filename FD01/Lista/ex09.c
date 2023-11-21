/**
 * @file ex09.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba o dia, mês e ano de uma data e informe se é uma data válida ou não
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int dia, mes, ano;

    printf("Digite uma data no formato DD/MM/AAAA para checar a sua validade\n");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    while (dia > 31 || dia < 1) {
        printf("Digite um dia válido\n");
        scanf("%d", &dia);
    }

    while (mes > 12 || mes < 1) {
        printf("Digite um mês válido\n");
        scanf("%d", &mes);
    }

    while (ano < 1 || ano > 9999) {
        printf("Digite um ano válido\n");
        scanf("%d", &ano);
    }

    printf("A data %02d/%02d/%04d é válida\n", dia, mes, ano);

}