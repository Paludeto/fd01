/**
 * @file ex07.c
 * @author Gabriel Paludeto
 * @brief Escreva um programa que receba uma sigla de um estado da região
    Sul ou Sudeste e exiba o nome completo do estado correspondente
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

    char estadoDigitado[21];
    char siglasEstados[7][21] = {{"rs"}, {"sc"}, {"pr"}, {"sp"}, {"mg"}, {"rj"}, {"es"}};
    char nomesEstados[7][21] = {{"Rio Grande do Sul"}, {"Santa Catarina"}, {"Paraná"}, {"São Paulo"}, {"Minas Gerais"}, {"Rio de Janeiro"}, {"Espírito Santo"}};
    int encontrado = 0;

    printf("Digite a sigla de um estado da região sul ou sudeste do país\n");
    fgets(estadoDigitado, 21, stdin);
    estadoDigitado[strcspn(estadoDigitado, "\n")] = '\0'; 
    setbuf(stdin, NULL);

    for (int i = 0; i < 7; i++) {
        if (strcasecmp(estadoDigitado, siglasEstados[i]) == 0) {
            printf("A sigla %s corresponde ao estado %s\n", estadoDigitado, nomesEstados[i]);
            encontrado = 1;
        }
    }

    if (encontrado == 0) {
        printf("A sigla digitada não corresponde a nenhum estado\n");
    }

    return 0;

}