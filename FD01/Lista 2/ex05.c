/**
 * @file ex05.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba 10 números inteiros. Em seguida o programa deverá permitir o usuário buscar números dentro do vetor, informando se o mesmo está ou não no vetor. 
 * O usuário poderá realizar quantas buscas quiser e finalizar ao solicitar a busca de um valor negativo.
 * @version 0.1
 * @date 2023-11-16
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 10

int buscaNumero(int valor, int vetor[TAMANHO]);
void preencheVetor(int vetor[TAMANHO]);
void exibeVetor(int vetor[TAMANHO]) ;

int main() {

    int numeros[TAMANHO];
    int numero;
    preencheVetor(numeros);
    exibeVetor(numeros); //debug

    do {
        printf("Digite um número a ser buscado\n");
        scanf("%d", &numero);

        if (buscaNumero(numero, numeros) == 1) {
            printf("Número encontrado\n");
        } else if (numero < 0) {
            printf("Encerrando programa\n");
        } else {
            printf("Valor não encontrado\n");
        }
        
    } while (numero > 0);

    return 0;

}

void preencheVetor(int vetor[TAMANHO]) {

    srand(time(NULL));

    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = rand() % 100;
    }

}

void exibeVetor(int vetor[TAMANHO]) {

    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");

}

int buscaNumero(int valor, int vetor[TAMANHO]) {

    if (valor < 0) {
        return -1;
    }

    for (int i = 0; i < TAMANHO; i++) {
        if (vetor[i] == valor) {
            return 1;
        }
    }

    return -1;

}