/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief Faça um programa com 2 variáveis, A e B, onde A terá
        o valor 40 e B terá o valor -1. Imprima o valor de A+B, A-B,
        AxB e A/B. Em seguida, faça B incrementar de uma
        unidade e repita as 4 operações.
 * @version 0.1
 * @date 2023-08-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 40;
    int b = -1;
    float resultado;

    resultado = a + b;

    printf("Soma: %.2f\n", resultado);

    resultado = a - b;

    printf("Subtracao: %.2f\n", resultado);

    resultado = a * b;

    printf("Multiplicacao: %.2f\n", resultado);

    resultado = a / b;

    printf("Divisao: %.2f\n", resultado);

    printf("---//---\n");

    //incrementando b com pré-operadores (incremento imediato ao valor de b)

    resultado = a + (++b);

    printf("Soma: %.2f\n", resultado);

    resultado = a - (++b);

    printf("Subtracao: %.2f\n", resultado);

    resultado = a * (++b);

    printf("Multiplicacao: %.2f\n", resultado);

    resultado = (float) a / (++b);

    printf("Divisao: %.2f\n", resultado);

    printf("---//---\n");

    //incrementando b com pós-operadores

    b = -1; //reset

    resultado = a + (b++); //resultado para, b = 0

    printf("Soma: %.2f\n", resultado); 

    resultado = a - (b++); //resultado para b = 1

    printf("Subtracao: %.2f\n", resultado);

    resultado = a * (b++); //resultado para, b = 2

    printf("Multiplicacao: %.2f\n", resultado);

    resultado = (float) a / (b++); //resultado para b = 3

    printf("Divisao: %.2f\n", resultado);

    return 0;

}