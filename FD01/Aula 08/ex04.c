/**
 * @file ex04.c
 * @author Gabriel Paludeto
 * @brief Crie um algoritmo que exiba todos os números pares
    entre 240 e 730 inclusive.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int num = 240;

    while (num <= 730) {
        if (num % 2 == 0) {
            printf("O número %d é par\n", num);
        }
        num++;
    } //while

    return 0;

} //main