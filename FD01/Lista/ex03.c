/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que tenha como entrada: o número de horas, minutos e segundos atuais, informe quantos segundos faltam para chegar terminar o dia.
 * @version 0.1
 * @date 2023-09-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    float horas, minutos, segundos, segundosFaltantes;

    printf("Digite horas, minutos e segundos no formato HH:MM:SS\n");
    scanf("%f:%f:%f", &horas, &minutos, &segundos);

    segundos = segundos + (horas * 3600) + (minutos * 60);
    segundosFaltantes = 86400 - segundos;

    printf("Já se passaram %.2f segundos do seu dia, e faltam %.2f segundos para que ele acabe!\n", segundos, segundosFaltantes);

}