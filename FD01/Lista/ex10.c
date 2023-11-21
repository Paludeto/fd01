/**
 * @file ex10.c
 * @author Gabriel Paludeto
 * @brief Desenvolva um programa que receba um valor de 1 a 99 e exiba o valor por extenso
    Ex:
    Digite um Número: 74
    Valor por extenso: setenta e quatro
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int valor;

    printf("Digite um valor de 1 a 99\n");
    scanf("%d", &valor);

    while (valor > 99 || valor < 1) {
        printf("Digite um valor válido\n");
        scanf("%d", &valor);
    }

    if (valor > 19) {

        switch (valor / 10) {
            case 2:
                printf("Vinte");
                break;
            case 3:
                printf("Trinta");
                break;
            case 4:
                printf("Quarenta");
                break;
            case 5:
                printf("Cinquenta");
                break;
            case 6:
                printf("Sessenta");
                break;
            case 7:
                printf("Setenta");
                break;
            case 8:
                printf("Oitenta");
                break;
            case 9:
                printf("Noventa");
                break;
            default:
                break;
        }

        switch (valor % 10) {
            case 0:
                printf("\n");
                break;
            case 1:
                printf(" e um\n"); 
                break;
            case 2:
                printf(" e dois\n"); 
                break;
            case 3:
                printf(" e três\n"); 
                break;
            case 4:
                printf(" e quatro\n"); 
                break;
            case 5:
                printf(" e cinco\n"); 
                break;
            case 6:
                printf(" e seis\n"); 
                break;
            case 7:
                printf(" e sete\n"); 
                break;
            case 8:
                printf(" e oito\n"); 
                break;
            case 9:
                printf(" e nove\n"); 
                break; 
            default:
                break;
        }

    }

    if (valor >= 1 && valor <= 19) {

        switch (valor) {
            case 1:
                printf("Um\n");
                break;
            case 2:
                printf("Dois\n");
                break;
            case 3:
                printf("Três\n");
                break;
            case 4:
                printf("Quatro\n");
                break;
            case 5:
                printf("Cinco\n");
                break;
            case 6:
                printf("Seis\n");
                break;
            case 7:
                printf("Sete\n");
                break;
            case 8:
                printf("Oito\n");
                break;
            case 9:
                printf("Nove\n");
                break;
            case 10:
                printf("Dez\n");
                break;
            case 11:
                printf("Onze\n");
                break;
            case 12:
                printf("Doze\n");
                break;
            case 13:
                printf("Treze\n");
                break;
            case 14:
                printf("Quatorze\n");
                break;
            case 15:
                printf("Quinze\n");
                break;
            case 16:
                printf("Dezesseis\n");
                break;
            case 17:
                printf("Dezessete\n");
                break;
            case 18:
                printf("Dezoito\n");
                break;
            case 19:
                printf("Dezenove\n");
                break;
            default:
                break;
        }

    }

    return 0;

}