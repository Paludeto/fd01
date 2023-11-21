/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief 3) Crie um algoritmo que exiba todos os números múltiplos
    de 5 no intervalo de 1 a 500.
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int i;

    for (i = 1; i <= 500; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;

}