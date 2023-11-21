/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief 2) Faça um algoritmo que exiba todos números de 100 a 1
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int i;

    for (i = 100; i >= 1; i--) {
        printf("%d\n", i);
    }

    return 0;

}