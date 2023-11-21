/**
 * @file ex05.c
 * @author Gabriel Paludeto
 * @brief Sabendo que a função sqrt(valor), que está na biblioteca
    math.h retorna a raiz quadrada do valor, calcule a raiz
    quadrada de um número que o usuário digitar.
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>
#include <complex.h>

int main() {

    float num = 0;
    float raiz = 0;
    float complex raizComplexa = 0;

    printf("Digite um número para descobrir a sua raiz quadrada:\n");
    
    scanf("%f", &num);

    if (num < 0) {
        raizComplexa = csqrt(num);
        printf("A raiz do número complexo é igual a %.2fi\n", cimag(raizComplexa));
        return 0;
    }

    raiz = sqrt(num);

    printf("A raiz do número digitado é igual a %.2f\n", raiz);

    return 0;

}