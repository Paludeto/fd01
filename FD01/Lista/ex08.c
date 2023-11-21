/**
 * @file ex08.c
 * @author Gabriel Paludeto
 * @brief Crie um programa que, ao receber três números, verifique se podem ser lados 
 * de um triângulo e nesse caso mostre se o triângulo é equilátero, isosceles ou escaleno. 
 * Caso seja um triângulo retângulo, o programa deve também informar.
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    float lA, lB, lC;
    float maiorLado;

    printf("Digite o lado A de determinado triângulo ABC\n");
    scanf("%f", &lA);

    printf("Digite o lado B de determinado triângulo ABC\n");
    scanf("%f", &lB);

    printf("Digite o lado C de determinado triângulo ABC\n");
    scanf("%f", &lC);

    if (lA > lB && lA > lC) {
        maiorLado = lA;

        if (pow(maiorLado, 2) == pow(lB, 2) + pow(lC, 2)) {
            printf("Triângulo retângulo\n");
        }

    } else if (lB > lA && lB > lC) {
        maiorLado = lB;

        if (pow(maiorLado, 2) == pow(lA, 2) + pow(lC, 2)) {
            printf("Triângulo retângulo\n");
        }

    } else if (lC > lA && lC > lB) {
        maiorLado = lC;

        if (pow(maiorLado, 2) == pow(lB, 2) + pow(lA, 2)) {
            printf("Triângulo retângulo\n");
        }

    }

    if (lA == lB && lA == lC) {
        printf("Triângulo equilátero\n");
        return 0;
    } 

    if (lA != lB && lB != lC) {
        printf("Triângulo escaleno\n");
        return 0;
    }

    printf("Triângulo isósceles\n");

    return 0;

}