/**
 * @file ex07.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que calcule o fatorial de um número a ser
    digitado.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    int num;
    int fatorial = 1;

    printf("Digite um número para descobrir o seu fatorial\n");
    scanf("%d", &num);

    while (num > 1) {
        fatorial = fatorial * num;
        num--;
    } //while

    printf("O fatorial do número digitado é igual a %d\n", fatorial);

    return 0;
    
} //main
