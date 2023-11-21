/**
 * @file ex04.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba um nome, ele deve perguntar
    novamente caso o nome tenha tamanho inferior a 5 caracteres. Ao receber
    um nome com 5 caracteres ou mais o programa exibe o nome e finaliza.
 * @version 0.1
 * @date 2023-10-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>

int main() {

    char nome[21];

    do {
        printf("Digite um nome com 5 caracteres ou mais\n");
        fgets(nome, 21, stdin);
        nome[strcspn(nome,"\n")] = '\0';
        setbuf(stdin, NULL);
    } while (strlen(nome) < 5);

    printf("Nome: %s\n", nome);

    return 0;

}