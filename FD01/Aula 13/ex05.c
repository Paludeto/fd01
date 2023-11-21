/**
 * @file ex05.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba uma frase e depois exiba quantas vezes
    cada vogal aparece. Ele deve contar considerando o tamanho da String.
 * @version 0.1
 * @date 2023-10-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char frase[101];
    int tamanho;
    int contadores[5] = {0, 0, 0, 0, 0};
    char vogais[6] = "aeiou";

    printf("Digite uma frase: \n");
    fgets(frase, 101, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    setbuf(stdin, NULL);    
    tamanho = strlen(frase);

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < 5; j++) {
            if (tolower(frase[i]) == vogais[j]) {
                contadores[j]++;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("Existem %d letras %c\n", contadores[i], vogais[i]);
    }

}