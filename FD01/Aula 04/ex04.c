/**
 * @file ex04.c
 * @author Gabriel Paludeto
 * @brief Tendo a Altura da pessoa definida como uma constante,
        calcule seu peso ideal utilizando a seguinte fórmula:
        -peso ideal = 72.7 x altura – 58
 * @version 0.1
 * @date 2023-08-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    const float altura = 1.85;
    float pesoIdeal = 72.7 * altura - 58;

    printf("O seu peso ideal é de %.2f kg para %.2f metros de altura\n", pesoIdeal, altura);

    return 0;

}