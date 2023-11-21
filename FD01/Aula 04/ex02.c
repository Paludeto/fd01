/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Uma conta de caderneta de poupança foi aberta com um
        depósito de R$ 500,00. Imagine que esta conta é remunerada
        em 1% de juros ao mês. Qual será o valor da conta após três
        meses?
 * @version 0.1
 * @date 2023-08-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float capital = 500.00; //reais
    float juros = 1.01; //porcentagem
    float meses = 3;
    float montante = capital * pow(juros, meses);

    printf("A quantidade total em reais ao final de 3 meses será de %f reais\n", montante);

    return 0;

}