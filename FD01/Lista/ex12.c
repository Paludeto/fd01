/**
 * @file ex12.c
 * @author Gabriel Paludeto
 * @brief Técnicos analisam a perda da massa do Xenônio-135 e descobriram que o tempo de meia vida desse radioisótopo é de 9h. Crie um algoritmo para receber a massa inicial em gramas e retorne o tempo necessário para que a massa deste material seja menor que 1 grama. Caso o tempo exceda 24h a resposta deve ser dada em dias (Ex.: 2 dias e 6 horas).
    Obs.: O algoritmo deve calcular o tempo para várias massas, finalizando ao receber uma massa igual a zero ou negativa.
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    float massaXe, resultado;
    int horas = 0;
    int dias;

    do {
        printf("Digite a massa inicial de um átomo de xenônio\n");
        scanf("%f", &massaXe);

        if (massaXe <= 0) {
            printf("Programa abortado\n");
            return 0;
        }

        resultado = massaXe;

        while (resultado > 1) {
            resultado = massaXe - (15 * horas);
            horas++;        
        }

        horas--;

        printf("A quantia em horas necessária para que a massa de Xe seja menor que 1g/mol é igual a %d\n", horas);


        if (horas > 24) {
            dias = horas / 24;
            horas = horas - (24 * dias);
            printf("Demorou aproximadamente %d dias e %d horas para a massa se tornar menor do que 1g/mol\n", dias, horas);
        }

    } while (massaXe > 0);

    return 0;

}