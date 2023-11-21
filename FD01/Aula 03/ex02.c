#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 1;
    int b = 2; 
    int temp = 0;

    printf("O valor inicial de A é igual a %i, o de B é igual a %i\n", a, b);

    temp = b;
    b = a;
    a = temp;

    printf("O valor final de A é igual a %i, o de B é igual a %i\n", a, b);
    
    return 0;
    
}