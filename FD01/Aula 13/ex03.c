/**
 * @file ex03.c
 * @author Gabriel Paludeto
 * @brief Desenvolva um programa que armazene o nome e o
    telefone de 5 pessoas. Ao digitar a posição desejada, o
    programa deve exibir o nome e telefone daquela posição. O
    programa finaliza ao receber a entrada -1.
 * @version 0.1
 * @date 2023-10-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include <string.h>

int main() {

    char nomes[5][21];
    char telefones[5][21];
    int indice = 0;

    for (int i = 0; i < 5; i++) {

        printf("Digite o nome da pessoa de número %d:\n", i + 1);
        fgets(nomes[i], 21, stdin);
        nomes[i][strcspn(nomes[i],"\n")]='\0';
        setbuf(stdin, NULL);
        
        printf("Digite o telefone da pessoa de número %d:\n", i + 1);
        fgets(telefones[i], 21, stdin);
        telefones[i][strcspn(telefones[i],"\n")]='\0';
        setbuf(stdin, NULL);

    }

    do {

        printf("Digite uma posição desejada entre 0 e 4\n");
        scanf("%i", &indice);

        while (indice > 4) {
            printf("Digite um índice válido entre 0 e 4\n");
            scanf("%i", &indice); 
        }

        if (indice > -1) {
            printf("Nome: %s\t", nomes[indice]);
            printf("Telefone: %s\n", telefones[indice]);
        }
        
    } while (indice != -1);

    return 0;
    
}