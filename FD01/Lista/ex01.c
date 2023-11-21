/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Sabendo-se que 200 kw de energia custa um quarto do salário mínimo, faça um programa que receba o valor do salário mínimo e a quantidade de kw gasta por uma residência e mostre:
    a) O valor em reais de cada quilowatt;
    b) O valor em reais a ser pago pelos kw gasto;
    c) O novo valor a ser pago por essa residência com um desconto de 12%;
 * @version 0.1
 * @date 2023-09-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    float salarioMinimo, kwGastos, kwValor, totalValor, novoValor;
    
    printf("Digite o valor do salário mínimo\n");
    scanf("%f", &salarioMinimo);
    printf("Digite a quantidade de kw gastos\n");
    scanf("%f", &kwGastos);

    kwValor = (salarioMinimo / 4) / 200;
    totalValor = kwGastos * kwValor;
    novoValor = 0.88 * totalValor;

    printf("O valor de cada quilowatt é de %.2f R$\n", kwValor);
    printf("O valor total a ser pago (sem desconto) é de %.2f R$\n", totalValor);
    printf("O valor total com desconto é igual a %.2f R$\n", novoValor);

} //main