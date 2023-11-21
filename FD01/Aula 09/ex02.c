/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba valores enquanto eles estiverem no
    intervalo de 500 a 1000. Ao receber um valor fora da faixa, o
    programa deverá parar de solicitar valores, exibir quantos valores
    válidos foram digitados e finalizar.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    float valor;
    int contador = 0;

    do {
        printf("Digite um valor no intervalo de 500 a 1000\n");
        scanf("%f", &valor);

        if (valor >= 500 && valor <= 1000) {
            contador++;
        } //if

    } while (valor >= 500 && valor <= 1000); //do-while

    printf("O número de valores válidos digitados é igual a %d\n", contador);

} //main