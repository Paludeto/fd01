/**
 * @file ex06.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba um nome e um sobrenome. Ele deve
    construir uma nova string no formato americano (Sobrenome, Nome)
    Exemplo: Silva, José
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
    char sobrenome[21];
    char nomeAmericano[21];

    printf("Digite o seu nome\n");
    fgets(nome, 21, stdin);
    nome[strcspn(nome, "\n")] = '\0';
    setbuf(stdin, NULL);

    printf("Digite o seu sobrenome\n");
    fgets(sobrenome, 21, stdin);
    sobrenome[strcspn(sobrenome, "\n")] = '\0';
    setbuf(stdin, NULL);

    strcpy(nomeAmericano, sobrenome);
    strcat(nomeAmericano, ", ");
    strcat(nomeAmericano, nome);

    printf("Nice to meet you, mr. %s\n", nomeAmericano);

    return 0;

}