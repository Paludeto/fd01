/**
 * @file ex08.c
 * @author Gabriel Paludeto
 * @brief 8) Utilizando a estrutura do laço for aninhado, crie um
    programa que exiba a tabuada de todos os números de
    1 a 10 no seguinte formato:
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int i;
    int j;
    int multiplicacao;

    for (i = 1; i <= 10; i++) {
        printf("Tabuada do %d\n", i);
        for (j = 1; j <= 10; j++) {
            multiplicacao = i * j;
            printf("%d * %d = %d\n", i, j, multiplicacao);
        }
    }

    return 0;

}