/**
 * @file ex04.c
 * @author Gabriel Paludeto
 * @brief Crie e inicialize um vetor de inteiros de tamanho 8. Faça a
    soma dos seus elementos, e apresente o resultado.
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    int soma = 0;
    int vetorInteiros[] = {1, 2, 3, 4, 5, 6, 7, 8};

    for (int i = 0; i < 8; i++) {
        soma += vetorInteiros[i];
    }

    printf("A soma dos elementos é igual a %d\n", soma);
    
    return 0;

}