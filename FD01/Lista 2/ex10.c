/**
 * @file ex10.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba e armazene 10 nomes de carros (tamanho máximo: 20 caracteres). Em seguida, o programa deverá permitir a busca pelos nomes. Ao receber um carro, o sistema deverá informar se o carro está ou não na lista e quantas vezes ele está na lista. 
 * O programa deverá finalizar se for feita a busca por "Fusca", que deve ser informado também se está ou não na lista.
 * @version 0.1
 * @date 2023-11-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>

int main () {

    char carros[10][21];
    char carroBuscado[21];

    for (int i = 0; i < 10; i++) {

        printf("Digite o nome do carro de número %d:\n", i + 1);
        fgets(carros[i], 21, stdin);
        carros[i][strcspn(carros[i], "\n")] = '\0';
        setbuf(stdin, NULL); 

    }
    

    do {

        int vezes = 0;

        printf("Digite o nome do carro a ser buscado: \n");
        fgets(carroBuscado, 21, stdin);
        carroBuscado[strcspn(carroBuscado, "\n")] = '\0';
        setbuf(stdin, NULL);

        for (int i = 0; i < 10; i++) {
            if (strcasecmp(carroBuscado, carros[i]) == 0) {
                vezes++;
            }
        }

        if (vezes > 0) {
            printf("O carro está na lista %d vezes\n", vezes);
        }

    } while (strcasecmp(carroBuscado, "fusca") != 0);

    printf("Fim de programa\n");
    
    return 0;

}