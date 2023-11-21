/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que calcule a média para 5 alunos, sendo que
    cada aluno tem 2 notas (reais). O programa somente deverá aceitar
    notas no intervalo fechado de 0 a 10, solicitando nova digitação
    quando necessário.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int contador = 1;
    float nota1, nota2, media;

    printf("Esse programa calculará a média aritmética entre duas notas de 1 a 10 para 5 alunos\n");

    do {
        
        printf("Bem-vindo, aluno de número %d, digite a sua primeira nota\n", contador);
        scanf("%f", &nota1);

        while (nota1 < 1 || nota1 > 10) {
            printf("Digite a sua primeira nota em um intervalo válido\n");
            scanf("%f", &nota1);
        }

        printf("Digite a sua segunda nota\n");
        scanf("%f", &nota2);

        while (nota2 < 1 || nota2 > 10) {
            printf("Digite a sua segunda nota em um intervalo válido\n");
            scanf("%f", &nota2);
        }

        media = (nota1 + nota2) / 2;

        printf("Aluno de número %d, sua média é igual a %.2f\n", contador, media);

        contador++;

    } while (contador <= 5); //do-while

    return 0;

} //main