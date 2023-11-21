/**
 * @file ex04.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba 3 idades distintas e mostre: a idade da pessoa mais velha; a idade da pessoa mais nova e a média das 3 idades . 
 * O programa deve considerar e informar o caso de 2 ou 3 pessoas terem a mesma idade.
 * @version 0.1
 * @date 2023-09-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int idade1, idade2, idade3, media;
    
    printf("Digite a idade 1\n");
    scanf("%d", &idade1);

    printf("Digite a idade 2\n");
    scanf("%d", &idade2);

    printf("Digite a idade 3\n");
    scanf("%d", &idade3);

    if (idade1 > idade2 && idade1 > idade3) {
        printf("A maior idade é igual a %d\n", idade1);
    } else if (idade2 > idade1 && idade2 > idade3) {
        printf("A maior idade é igual a %d\n", idade2);
    } else {
        printf("A maior idade é igual a %d\n", idade3);
    } //if

    if (idade1 < idade2 && idade1 < idade3) {
        printf("A menor idade é igual a %d\n", idade1);
    } else if (idade2 < idade1 && idade2 < idade3) {
        printf("A menor idade é igual a %d\n", idade2);
    } else {
        printf("A menor idade é igual a %d\n", idade3);
    } //if

    media = (idade1 + idade2 + idade3) / 3;
    printf("A média entre as idades digitadas é igual a %d\n", media);

    if (idade1 == idade2 || idade1 == idade3 || idade2 == idade3) {
        printf("Existem ao menos duas pessoas com a mesma idade\n");
    } //if

    return 0;

} //main