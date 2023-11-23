/**
 * @file ex11.c
 * @author Gabriel Paludeto
 * @brief Faça um programa que receba uma palavra e em seguida gere e exiba uma outra string contendo a palavra concatenada da mesma palavra invertida, porém em maiúscula. 
 * Dica: usar a função toupper() da biblioteca ctype.h para transformar uma letra na sua letra maiúscula.
 * @version 0.1
 * @date 2023-11-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char palavra[21];
    char palavraNova[42];

    printf("Digite uma palavra qualquer\n");
    fgets(palavra, 21, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    setbuf(stdin, NULL);

    strncpy(palavraNova, palavra, 21);

    int j = strlen(palavra) - 1;

    for (int i = 0; i < j; i++) {
        char temp = palavra[i];
        palavra[i] = toupper(palavra[j]);
        palavra[j] = toupper(temp);
        j--;
    }

    strcat(palavraNova, palavra);
    
    printf("Palavra nova: %s\n", palavraNova);

    return 0;

}