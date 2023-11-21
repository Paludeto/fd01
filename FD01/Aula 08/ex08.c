/**
 * @file ex08.c
 * @author your name (you@domain.com)
 * @brief Faça um menu que mostre 3 opções
    Menu do programa:
    1 - Teste 1
    2 - Teste 2
    3 – Sair do programa
    Digite sua opção:
    - A primeira opção imprime o texto “Teste1” e mostra o menu novamente.
    - A segunda opção imprime “Teste2” e mostra o menu novamente.
    - A terceira opção finaliza o programa.
    - Caso digite uma opção diferente, deve mostrar uma mensagem de erro e
    mostrar o menu novamente.
 * @version 0.1
 * @date 2023-09-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <stdio.h>

int main() {

    int opcao = 0;
    
    while (opcao != 3) {
        
        printf("Menu do programa:\n");
        printf("1 - Teste 1 \n");
        printf("2 - Teste 2\n");
        printf("3 - Sair do programa\n");
        printf("Digite sua opção:\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Teste 1\n");
                break;
            case 2:
                printf("Teste 2\n");
                break;
            case 3:
                printf("Finalizando o programa...\n");
                break;
            default:
                printf("Digite um número válido!\n");
        } //switch
        
    } //while
    
    return 0;

} //main