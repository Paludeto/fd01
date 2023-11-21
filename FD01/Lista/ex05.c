/**
 * @file ex05.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba 2 números referentes ao numerador e denominador de uma fração e informe se é uma fração própria, 
 * imprópria, ou aparente
 * @version 0.1
 * @date 2023-09-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    int numerador, denominador;

    printf("Digite o numerador da sua fração\n");
    scanf("%d", &numerador);

    printf("Digite o denominador da sua fração\n");
    scanf("%d", &denominador);

    if (numerador < denominador) {
        printf("A sua fração é própria\n");
    } else if (numerador >= denominador && numerador % denominador == 0) {
        printf("Sua fração é aparente\n");
    } else if (numerador > denominador) {
        printf("Sua fração é imprópria\n");
    }

    return 0;

}