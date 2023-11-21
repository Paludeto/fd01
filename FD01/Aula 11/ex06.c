/**
 * @file ex06.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba e armazene 20 números em
    um vetor. Em seguida exiba:
     Quantos números são iguais a 30;
     Quantos números são maior que a média;
     Quantos números são iguais à media;
 * @version 0.1
 * @date 2023-10-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {

    int vetorA[20];
    int somaElementos = 0;
    int media = 0;
    int conta30 = 0;
    int contaMaiorMedia = 0;
    int contaIgualMedia = 0;

    for (int i = 0; i < 20; i++) {
        printf("Digite o elemento de número %d\n", i + 1);
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 20; i++) {
        somaElementos += vetorA[i];
    }

    media = somaElementos / 20;
    
    for (int i = 0; i < 20; i++) {
        if (vetorA[i] == 30) {
            conta30++;
        }

        if (vetorA[i] > media) {
            contaMaiorMedia++;
        }

        if (vetorA[i] == media) {
            contaIgualMedia++;
        }
    }

    printf("Números iguais a 30: %d\n", conta30);
    printf("Números maiores que a média: %d\n", contaMaiorMedia);
    printf("Números iguais à média: %d\n", contaIgualMedia);

    return 0;

}