/**
 * @file ex01.c
 * @author Gabriel Paludeto
 * @brief Crie um programa que forneça um menu com duas
    opções. Caso o usuário digite 1, o programa solicitará um
    número e verificará se o valor é par ou impar. Caso o
    usuário digite 2, o programa solicitará uma idade e
    verificará se pessoa é maior ou menor de idade.
    Veja o exemplo de menu abaixo:
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int opcao;
    int num;
    int idade;

    printf("Menu de programa:\n");
    printf("1 - Verifica par/impar\n");
    printf("2 - Verifica maior/menor de idade\n");
    printf("Digite sua opção\n");   
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:

            printf("Digite um número inteiro\n");
            scanf("%d", &num);

            if (num % 2 == 0) {
                printf("Numero par!\n");
            } else { 
                printf("Numero impar\n");

            }

            break;
        
        case 2:

            printf("Digite a sua idade\n");
            scanf("%f", &idade);
            if (idade >= 18) {
                printf("Você é adulto\n");
            } else {
                printf("Você é menor de idade\n");
            }//else

            break;

        default:
            printf("Digite uma opção válida\n");
            break;
        }//switch

}//main