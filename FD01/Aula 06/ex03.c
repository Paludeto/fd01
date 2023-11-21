/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba os coeficientes a, b e c
    de uma equação do segundo grau e retorne as raízes da
    equação (se existirem).
    - Para isso, lembre-se da fórmula de Báskara
 * @version 0.1
 * @date 2023-08-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c;
    float delta, raiz1, raiz2;

    printf("Digite o coeficiente a de uma equação de segundo grau:\n");
    scanf("%f", &a);

    printf("Digite o coeficiente b de uma equação de segundo grau:\n");
    scanf("%f", &b);

    printf("Digite o coeficiente c de uma equação de segundo grau:\n");
    scanf("%f", &c);

    delta = pow(b, 2) - (4 * a * c);

    if (delta >= 0) {

        raiz1 = (-b + (sqrt(delta))) / (2 * a);
        raiz2 = (-b - (sqrt(delta))) / (2 * a);

        printf("As raizes da equação %.1fx² %+.1fx %+.1f são iguais a %.2f e %.2f\n", a, b, c, raiz1, raiz2);

        return 0;
    }
    
    printf("Não há solução real, pois o discriminante é igual a %.2f\n", delta);
    return 0;

}   
