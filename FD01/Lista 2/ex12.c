/**
 * @file ex12.c
 * @author Gabriel Paludeto
 * @brief Desenvolva um programa que receba uma frase. O programa deverá gerar e exibir uma nova string, contendo uma "palavra sim e outra não" da frase digitada, e exibir o número de palavras da frase original.

    Exemplo:
    Digite uma frase: A arte de programar consiste em organizar e dominar a complexidade.
    Saída
    A de consiste organizar dominar complexidade.
    Número de palavras: 11

 * @version 0.1
 * @date 2023-11-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';

    int tamanhoFrase = strlen(frase);
    int contadorPalavras = 0;
    int indice = 0;
    int alternarPalavra = 0;

    printf("Saída: ");

    for (int i = 0; i <= tamanhoFrase; i++) {
        if (frase[i] == ' ' || frase[i] == '\0') {
            if (alternarPalavra == 0) {
                for (int j = i - indice; j < i; j++) {
                    printf("%c", frase[j]);
                }
                printf(" ");
            }

            alternarPalavra = 1 - alternarPalavra; 
            indice = 0;
            contadorPalavras++;

        } else {
            indice++;
        }
    }

    printf("\nNúmero de palavras: %d\n", contadorPalavras);

    return 0;

}
