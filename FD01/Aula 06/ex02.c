/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba um número e determine
    se ele é um número par ou ímpar.
    - Obs.: Utilize o operador % que retorna o resto da divisão)
 * @version 0.1
 * @date 2023-08-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int num;

    printf("Digite um número qualquer:\n");
    scanf("%i", &num);

    if (num % 2 == 0) {
        printf("O número digitado é par\n");
        return 0;
    }

    printf("O número digitado é ímpar\n");

    return 0;

}