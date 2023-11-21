/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Crie uma calculadora usando a instrução switch, que
    pergunte qual das operações básicas quer fazer (+, -, *
    e /), em seguida peça os dois números e mostre o
    resultado da operação matemática entre eles.
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int opcao;
    float operacao, num1, num2;
    printf("Bem-vindo à calculadora!\n");
    printf("Digite um número para escolher uma operação\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Digite dois números para somá-los: \n");
            scanf("%f%f", &num1, &num2);
            operacao = num1 + num2;
            printf("O resultado da sua operação é igual a %.2f\n", operacao);
            break;

        case 2:
            printf("Digite dois números para subtraí-los: \n");
            scanf("%f%f", &num1, &num2);
            operacao = num1 - num2;
            printf("O resultado da sua operação é igual a %.2f\n", operacao);
            break;

        case 3:
            printf("Digite dois números para multiplicá-los: \n");
            scanf("%f%f", &num1, &num2);
            operacao = num1 * num2;
            printf("O resultado da sua operação é igual a %.2f\n", operacao);
            break;

        case 4:
            printf("Digite dois números para dividi-los: \n");
            scanf("%f%f", &num1, &num2);
            operacao = num1 / num2;
            printf("O resultado da sua operação é igual a %.2f\n", operacao);
            break;
        
        default:
            break;
        } //switch
} //main