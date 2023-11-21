/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief Crie um algoritmo que exiba todos os números múltiplos
    de 3 no intervalo de 1 a 322.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int num = 1;

    while (num <= 322) {
        if(num % 3 == 0) {
            printf("O número %d é divisível por 3\n", num);
        }
        num++;
    } //while

    return 0;

} //main