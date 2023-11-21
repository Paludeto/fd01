/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief 2) Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distância entre os dois pontos no plano
 * @version 0.1
 * @date 2023-09-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    float x1, x2, y1, y2, distancia;

    printf("Digite x1:\n");
    scanf("%f", &x1);
    printf("Digite y1:\n");
    scanf("%f", &y1);

    printf("Digite x2:\n");
    scanf("%f", &x2);
    printf("Digite y2:\n");
    scanf("%f", &y2);

    distancia = sqrt(pow(x2 - x2, 2) + pow(y2 - y1, 2));

    printf("A distância entre os dois pontos no plano cartesiano é igual a %.2f\n", distancia);

}