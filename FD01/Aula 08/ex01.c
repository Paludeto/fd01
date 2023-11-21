/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Faça um algoritmo que exiba todos números de 1 a 100.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int num = 1;

    while (num <= 100) {
        printf("%d\n", num);
        num++;
    } //while

    return 0;

} //main