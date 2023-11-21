/**
 * @file ex09.c
 * @author Faça um programa que simule um jogo, onde o usuário
    deverá descobrir um número aleatório escolhido pelo
    computador (de 1 a 100).
    - O usuário poderá realizar até 6 tentativas, o programa deverá
    retornar as mensagens “muito alto”, “muito baixo” até o usuário
    acertar o número ou esgotar o número máximo de tentativas
 * @brief 
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main() {

    time_t t; //struct da hora atual em segundos a partir da epoch da lib time.h, que será usada com seed na função srand a fim de gerar números "aleatórios"
	srand((unsigned)time(&t)); //define a seed de rand() utilizando a hora atual como um inteiro sem sinal via cast
    int resposta;
    int tentativas = 1;
    int num = 1 + (rand() % 100); //define a range da função rand(), que é de 1 a 100

    printf("Adivinhe um número aleatório de 1 a 100!\n");

    while (tentativas <= 6 && resposta != num) {
        scanf("%d", &resposta);
        if (resposta > num) {
            printf("Muito alto!\n");
        } else if (resposta < num) {
            printf("Muito baixo!\n");
        } else {
            printf("Você adivinhou corretamente o número!\n");
        } //if-else
        tentativas++;
    } //while

} //main