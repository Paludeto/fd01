/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief Tendo como entrada de dados o total vendido por um
    funcionário no mês, calcule a sua comissão e o salário bruto no
    mês. Para isso, considere um salário base de R$1.200,00 e
    comissão de 10% sobre o total vendido.
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    float vendas = 0;
    float base = 1200.00;
    float comissao = 0.10;
    float total = 0;

    printf("Digite a quantia de reais em vendas efetuadas em determinado mês:\n");
    scanf("%f", &vendas);

    total = (vendas * comissao) + base;

    printf("A quantia recebida será de %.2f\n", total);

    return 0;

}