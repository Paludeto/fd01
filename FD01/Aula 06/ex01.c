/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba como entrada a nota de
    um aluno. O programa deve exibir “aprovado” caso a nota
    seja igual ou superior a 6, ou exibir “reprovado” caso
    contrário.
 * @version 0.1
 * @date 2023-08-31
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    float nota;

    printf("Digite a sua nota:\n");
    scanf("%f", &nota);

    if (nota >= 6) {
        printf("Aprovado!\n");
        return 0;
    }

    printf("Reprovado!\n");

    return 0;

}