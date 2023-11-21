/**
 * @file ex04.c
 * @author Gabriel Paludeto
 * @brief 4) Crie um algoritmo que exiba todos os números pares
    entre 240 e 730 inclusive.
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int i;

    for (i = 240; i <= 730; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;

}