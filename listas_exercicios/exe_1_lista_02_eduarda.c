#include <stdio.h>

int main() {

    int x, y;

    printf("Insira o Primeiro Numero: ");
    scanf("%d", &x);

    printf("Insira o Segundo Numero: ");
    scanf("%d", &y);

    if (x > y) {
        printf("O Primeiro Numero Inserido e Maior que o Segundo Numero\n");
    } 
    else{
        printf("O Segundo Numero Inserido e Maior que o Primeiro Numero\n");
    }

    return 0;
}