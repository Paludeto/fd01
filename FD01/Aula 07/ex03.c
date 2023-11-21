/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Altere o exercício anterior para receber os 3 valores no
    mesmo scanf
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int opcao;
    float num1, num2, resultado;
    char operacao;

    printf("Bem-vindo à calculadora!\n");
    printf("Digite uma expressão numérica no formato X + Y, X - Y, X * Y ou X / Y\n");
    scanf("%f %c %f", &num1, &operacao, &num2);

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("O resultado da sua operação é igual a %.2f\n", resultado);
            break;

        case '-':
            resultado = num1 - num2 ;
            printf("O resultado da sua operação é igual a %.2f\n", resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("O resultado da sua operação é igual a %.2f\n", resultado);
            break;

        case '/':
            resultado = num1 / num2;
            printf("O resultado da sua operação é igual a %.2f\n", resultado);
            break;
        
        default:
            break;
        } //switch
} //main