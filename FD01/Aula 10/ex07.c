/**
 * @file ex07.c
 * @author Gabriel Paludeto
 * @brief 7) Faça um programa que mostre n elementos da sequência de
    Fibonacci.
     O valor de n é passado para o programa.
     O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a
    fórmula t
    n = tn-1 + tn-2
 * @version 0.1
 * @date 2023-10-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int num;
    int i;
    int anterior1 = 1;
    int anterior2 = 0;
    int temp;

    printf("Digite o número de termos da função de Fibonacci\n");
    scanf("%d", &num);

    printf("0 ");
    printf("1 ");

    for(i = 2; i < num; i++) {

        temp = anterior1;
        anterior1 = anterior1 + anterior2;
        anterior2 = temp;
        
        printf("%d ", anterior1);    

    }

    return 0;

}