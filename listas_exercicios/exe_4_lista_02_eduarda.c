#include <stdio.h>

int main() {

float h, peso_ideal_f, peso_ideal_m;
char f, m;

    printf("Informe a sula Altura: ");
        scanf("%f", &  h);
    printf("Informe o Sexo (F ou M): ");
        scanf(" %c", & f);

    peso_ideal_f = (62.1 * h) - 44.7;
    peso_ideal_m = (72.7 * h) - 58;

    if (f == 'F' || f == 'f') // pessoa pode tanto inserir F ou f para o programa reconhecer que é do sexo feminino{
       { printf("O Peso Ideal para o Sexo Feminino e: %.2f\n", peso_ideal_f);
    } 
    else if (f == 'M' || f == 'm') {
        printf("O Peso Ideal para o Sexo Masculino e: %.2f\n", peso_ideal_m);   
    }
    

    return 0;
}