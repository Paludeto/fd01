/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que armazene o nome e salário de 5
    empregados. Em seguida calcule um aumento de 8% nos
    salários e exiba a nova folha de pagamentos.
 * @version 0.1
 * @date 2023-10-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>

#define NUM_PESSOAS 5

int main() {

    float salarios[NUM_PESSOAS];
    char nomes[NUM_PESSOAS][21];

    for (int i = 0; i < NUM_PESSOAS; i++) {
        setbuf(stdin, NULL);
        printf("Digite o nome %i\n", i + 1);
        fgets(nomes[i], 21, stdin);
        nomes[i][strcspn(nomes[i],"\n")]='\0';
        setbuf(stdin, NULL);
        printf("Digite o salário %i\n", i + 1);
        scanf("%f", &salarios[i]);
    }

    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("Nome: %s\n", nomes[i]);
        printf("Salário: %.2f\n", salarios[i]);
        printf("==========//==========\n");
    }

    for (int i = 0; i < NUM_PESSOAS; i++) {
        printf("Nome: %s\n", nomes[i]);
        printf("Novo salário: %.2f\n", salarios[i] = salarios[i] * 1.08);
        printf("==========//==========\n");
    }

    return 0;

}