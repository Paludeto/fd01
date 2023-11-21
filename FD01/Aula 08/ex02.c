/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Faça um algoritmo que exiba todos números de 100 a 1.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int num = 100;

    while (num >= 1) {
        printf("%d\n", num);
        num--;
    } //while

    return 0;

} //main