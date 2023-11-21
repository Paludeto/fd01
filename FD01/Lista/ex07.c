/**
 * @file ex07.c
 * @author Gabriel Paludeto
 * @brief  Considerando uma aplicação de renda fixa, faça um programa que receba o capital investido, a taxa (em %) e a quantidade de meses. O programa deverá retornar o montante final considerando o desconto do imposto de renda segundo regras abaixo:

    22,5% - prazo inferior a 6 meses
    20% - de 6 a 12 meses
    17,5% - de 12 a 24 meses
    15% - igual ou superior a 24 meses

    Obs: O imposto é calculado apenas sobre o lucro da aplicação.


 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {

    float capital, taxa, meses, montante, lucro;

    printf("Digite o capital inicial investido nesta aplicação\n");
    scanf("%f", &capital);

    printf("Digite a taxa, em porcentagem\n");
    scanf("%f", &taxa);
    taxa = 1 + (taxa * 0.01);

    printf("Digite o prazo, em meses, desta aplicação\n");
    scanf("%f", &meses);

    if (meses < 6) {
        montante = capital * pow(taxa, meses);
        lucro = (montante - capital) * 0.775;
        montante = capital + lucro;
    } else if (meses >= 6 && meses < 12) {
        montante = capital * pow(taxa, meses);
        lucro = (montante - capital) * 0.8;
        montante = capital + lucro;
    } else if (meses >= 12 && meses < 24) {
        montante = capital * pow(taxa, meses);
        lucro = (montante - capital) * 0.825;
        montante = capital + lucro;
    } else {
        montante = capital * pow(taxa, meses);
        lucro = (montante - capital) * 0.85;
        montante = capital + lucro;
    }
    
    printf("Lucro %f\n", lucro);
    printf("Capital inicial %f\n", capital);
    printf("Taxa %f\n", taxa);
    printf("Meses decorridos %f\n", meses);
    printf("O seu montante final fora de %.2f\n", montante);

}