/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Crie um algoritmo que imprima uma tabela de conversão de polegadas para centímetros. 
 * Deseja-se que na tabela conste valores de 1 polegada até 20 polegadas inteiras. (Para isso considere: 1 polegada = 2,54 cm)
 * @version 0.1
 * @date 2023-10-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

#define POLEGADA_CM 2.54

int main() {

    for (int i = 1; i <= 20; i++) {
        printf("%d\" equivale a %.2f centímetros\n", i, i * POLEGADA_CM);
    }

    return 0;

}