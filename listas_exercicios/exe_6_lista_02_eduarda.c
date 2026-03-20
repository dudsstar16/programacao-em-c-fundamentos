#include <stdio.h>

int main() {

    int opcao;
    int add, sub, mult, div;
    int num1, num2;

switch (opcao)
{
case 1:
    printf("Opcao 1\n");
    break;
case 2:
    printf("Opcao 3\n");
    break;
case 3:
    printf("Opcao 3\n");
    break;
case 4:
    printf("Opcao 4\n");
    break;
}

printf("Menu de Operacoes: \n");
    printf("1 - Adicao\n");         
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Agora selecione a Operacao que Deseja Realizar de Acordo com as Opcoes listadas: \n");
        scanf("%d", & opcao);

        printf("Insira o Primeiro Numero: ");
            scanf("%d", & num1);
        printf("Insira o Segundo Numero: ");
            scanf("%d", & num2);

add = num1 + num2;
sub = num1 - num2;      
mult = num1 * num2;
div = num1 / num2;

if (opcao == 1) {
    printf("A Adicao dos numeros informados foi: %d\n", add);
} 
else if (opcao == 2) {
    printf("A Subtracao dos numeros informados foi: %d\n", sub);
} 
else if (opcao == 3) {
    printf("A Multiplicacao dos numeros informados foi: %d\n", mult);
} 
else if (opcao == 4) {
    printf("A Divisao dos numeros informados foi: %d\n", div);
} 
else {
    printf("Opcao Invalida\n");
}
{
}

    return 0;
}