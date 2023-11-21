/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Crie um programa para armazenar 10 nomes em um vetor
    e imprimir uma lista numerada
 * @version 0.1
 * @date 2023-10-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>

int main() {

    char nomes[10][21];

    for (int i = 0; i < 10; i++) {
        printf("Digite o nome %i:\n", i + 1);
        fgets(nomes[i], 21, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
        setbuf(stdin, NULL);
    }

    for (int i = 0; i < 10; i++) {
        printf("Nome %i: %s\n", i + 1, nomes[i]);
    }

    return 0;
    
}