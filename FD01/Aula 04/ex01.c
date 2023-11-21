/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Escreva um programa para determinar a quantidade de litros
        de combustível gastos em uma viagem por um automóvel que
        faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem
        é de 35 min e a velocidade média do automóvel é 80 km/h.
 * @version 0.1
 * @date 2023-08-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    float autonomia = 12.0; //km/l
    float tempo = 35.0 / 60.0; //em hora
    float velocidade = 80.0; //em km/h
    float distancia = velocidade * tempo; //em km
    float consumo = distancia / autonomia; //em litros

    printf("Distância = %.2f km\n", distancia);
    printf("O consumo de combustível é igual a %.2f litros\n", consumo);

    return 0;

}