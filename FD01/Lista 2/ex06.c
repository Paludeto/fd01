/**
 * @file ex06.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que leia e armazene as notas (valores reais) de 10 alunos.
    O programa somente deverá aceitar notas entre 0 e 10 (inclusive), solicitando uma nova digitação quando uma nota inválida for digitada. Após a leitura o programa deve:

    a) Contar e exibir quantos alunos foram reprovados (nota < 6.0);
    b) Exibir as notas dos alunos que foram aprovados (nota >= 6.0);
    c) Calcular e exibir a média geral de todas as notas;
    d) Calcular e exibir a porcentagem de alunos aprovados;
    e) Exibir a nota mais alta e a mais baixa.
 * @version 0.1
 * @date 2023-11-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <float.h>

#define TAMANHO 10

int main () {

    int aprovados = 0;
    float percentualAprovados = 0;
    float mediaGeral = 0;
    float maior = FLT_MIN;
    float menor = FLT_MAX;
    float notas[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {

        printf("Digite a nota do aluno de número %d: \n", i + 1);
        scanf("%f", &notas[i]);

        while (notas[i] < 0 || notas[i] > 10) {
            printf("Digite uma nota de 0 a 10\n");
            scanf("%f", &notas[i]);
        }

    }

    for (int i = 0; i < TAMANHO; i++) {

        if (notas[i] >= 6) {
            printf("Nota %.2f do aluno %d\n", notas[i], i + 1);
            aprovados++;
        }

        if (notas[i] > maior) {
            maior = notas[i];
        } else if (notas[i] < menor) {
            menor = notas[i];
        }

        mediaGeral += notas[i];
    }

    mediaGeral = (float) mediaGeral / TAMANHO;
    percentualAprovados = (float) aprovados / TAMANHO;

    printf("Média geral da turma: %.2f\n", mediaGeral);
    printf("Percentual de alunos aprovados: %.2f%%\n", percentualAprovados * 100);
    printf("Maior nota: %.2f\n", maior);
    printf("Menor nota: %.2f\n", menor);

    return 0;

}