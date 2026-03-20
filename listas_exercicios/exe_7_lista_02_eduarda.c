#include <stdio.h>

int main() {

int num1;

    printf("Digite um numero: ");
        scanf("%d", & num1);

    if (num1 % 3 == 0) {
        printf("O numero e divisivel por 3\n");
    } 
    else if (num1 % 5 == 0) {
        printf("O numero e divisivel por 5\n");
    }
    else {
        printf("O numero nao e divisivel por 3 nem por 5\n");
    }

    return 0;
}