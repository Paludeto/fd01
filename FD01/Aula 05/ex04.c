/**
 * @file ex04.c
 * @author Gabriel Paludeto
 * @brief Calcule a média aritmética de 4 números reais que o usuário
    digitar. Imprima a média na tela apenas com 2 casas decimais.
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    float num1, num2, num3, num4;
    float media = 0;

    printf("Digite 4 números reais para descobrir a média entre eles:\n");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);

    media = (num1 + num2 + num3 + num4) / 4;

    printf("A média entre os números digitados é de %.2f\n", media);

    return 0;

}