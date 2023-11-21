/**
 * @file ex06.c
 * @author Gabriel Paludeto
 * @brief Um professor maluco da UTFPR avalia seus alunos da seguinte maneira:

    3 provas (com peso 20 cada)
    1 conjunto de trabalhos menores durante o semestre (com peso 10)
    1 projeto de um jogo com peso 30

    A média regular do aluno será dada pela média ponderada das notas das 3 provas, nos projetos menores e do projeto do game. O aluno que atingir a nota igual ou superior a 60 estará aprovado, caso contrário, o aluno deverá realizar um exame onde a nota mínima necessária será dada pela fórmula:

    NotaMinima = 120 – Média regular

    O aluno aprovado via exame terá média final igual a 60 registrado no sistema.

    Faça um programa que receba a nota das 3 provas, 1 nota dos projetos menores e 1 nota do projeto do game (todas as notas entre 0 e 100) e informe se o aluno está aprovado ou terá que realizar o exame.
    Em caso de exame o sistema deverá solicitar a nota do exame e informar se o aluno está aprovado ou reprovado e qual sua nota final (com uma casa decimal).
 * @version 0.1
 * @date 2023-09-21
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>

int main() {
    
    float p1, p2, p3;
    float projetos;
    float game;
    float mediaPonderada;
    float exame;
    float notaFinal;

    printf("Digite a sua nota da P1\n");
    scanf("%f", &p1);

    printf("Digite a sua nota da P2\n");
    scanf("%f", &p2);

    printf("Digite a sua nota da P3\n");  
    scanf("%f", &p3);

    printf("Digite a nota do projeto menor\n");
    scanf("%f", &projetos);

    printf("Digite a nota do game\n");
    scanf("%f", &game);

    mediaPonderada = (20 * (p1 + p2 + p3) + (10 * projetos) + (30 * game)) / 100;

    if (mediaPonderada >= 60) {
        printf("Você foi aprovado, sua nota é igual %.2f\n", mediaPonderada);
        return 0;
    }

    printf("Digite a nota do exame\n");
    scanf("%f", &exame);

    if (exame < (120 - mediaPonderada)) {
        printf("Você foi reprovado, sua nota final é igual a %.2f\n", mediaPonderada);
        return 0;
    }

    printf("Você foi aprovado!\n");

    return 0;

}