/**
 * @file ex13.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que verifique se um número dado via teclado é primo.
    Dica: para saber se um número n é primo, basta dividir por cada um dos números entre 2 e raiz quadrada de n; 
    se o resto for diferente de zero pra todos ele é primo.
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    int num;
    int inicio = 2;
    
    printf("Digite um número para saber se ele é primo\n");
    scanf("%d", &num);

    if (num == 1 || num < 1) {

        printf("Não primo\n");
        return 0;
        
    }

    while (inicio <= sqrt(num)) {

        if (num % inicio == 0) {
            printf("Não primo\n");
            return 0;
        }

        inicio++;

    }

    printf("Número primo\n");        

    return 0;

}