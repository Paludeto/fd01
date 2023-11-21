/**
 * @file ex11.c
 * @author Gabriel Paludeto
 * @brief Desenvolva um algoritmo que receba vários números no intervalo fechado de 1 a 1000. Ao receber um valor fora da faixa, o programa deverá exibir a soma dos números pares e o produto dos números ímpares e finalizar.
    Obs: O valor fora da faixa utilizado para sair não deverá entrar na conta da soma nem do produto.
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int numero;
    int somaPar = 0;
    int somaImpar = 0;

    do {

        printf("Digite um número no intervalo de 1 a 1000\n");
        scanf("%d", &numero);

        if (numero <= 1000 && numero >= 1) {
            if (numero % 2 == 0) {
                somaPar += numero;
            } else {
                somaImpar += numero;
            }
            
        }

    } while (numero <= 1000 && numero >= 1);

    printf("Soma dos pares: %d\n", somaPar);
    printf("Soma dos impares: %d\n", somaImpar);

    return 0;

}