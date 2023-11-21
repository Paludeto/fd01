/**
 * @file ex02.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que calcule e mostre a idade de uma
    pessoa a partir do ano em que a pessoa nasceu e do ano atual.
    Os valores serão digitados pelo usuário.
    Obs.:Considere que ela já fez aniversário neste ano.
 * @version 0.1
 * @date 2023-08-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int idade = 0;
    int nascimento = 0;
    int anoAtual = 2023;

    printf("Digite o seu ano de nascimento:\n");
    scanf("%i", &nascimento);

    idade = anoAtual - nascimento;
    printf("Sua idade no ano de %i é igual a %i\n", anoAtual, idade);

    return 0;

}