#include <stdio.h>
#include <stdlib.h>

int main () {

    char nome1[] = "Gabriel Paludeto";
    char email1[] = "paludeto@utfpr.edu.br";

    printf("O meu nome é %s, e o meu e-mail é %s\n", nome1, email1);

    char nome2[] = "Koti";
    char email2[] = "koti@utfpr.edu.br";

    printf("Digite um caractere para exibir nome e e-mail do Koti\n");

    char caractere = getchar();

    printf("Você pressionou %c \n", caractere);
    printf("O nome do meu amigo é %s, e o e-mail dele é %s\n", nome2, email2);

    return 0;

}