#include <stdio.h>

int main() {

    int x;
    
    printf("Insira um Numero: ");
    scanf("%d", & x);
    if (x % 2 == 0) {
        printf("O Numero Inserido e Par\n");
    } 
    else {
        printf("O Numero Inserido e Impar\n");
    }
    return 0;
}