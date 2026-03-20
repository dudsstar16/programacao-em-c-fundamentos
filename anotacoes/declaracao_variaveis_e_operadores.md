# 📘 Fundamentos da Linguagem C## Declaração de VariáveisA declaração de variáveis em C segue o formato:```ctipo nome;Mostrar mais linhas

Exemplos:
Cint x;          // número inteiroint y = 2;      // inteiro inicializadochar a, b;      // caracteresfloat j = 1.0;  // número decimalMostrar mais linhas

Tipos de Dados Básicos

int → números inteiros
float → números com casas decimais
char → caracteres

Entrada e Saída de Dados

Saída de Dados (printf)
A função printf() é utilizada para imprimir dados na tela.

Cprintf("Texto");printf("%d", x); // inteiroprintf("%f", j); // floatprintf("%c", a); // caractereMostrar mais linhas

Impressão de um único caractere

Cputchar('A');putchar(65); // código ASCII do caractereMostrar mais linhas

Entrada de Dados (scanf)
Utilizada para receber dados do teclado.

Cint x;scanf("%d", &x);Mostrar mais linhas

⚠️ O operador & indica o endereço da variável na memória.

Leitura de caractere

Cchar c;c = getchar();Mostrar mais linhas

Constantes
Valores que não podem ser modificados durante a execução do programa.

Utilizando const
Cconst float PI = 3.1415;Mostrar mais linhas
Utilizando #define

C#define PI 3.1415Mostrar mais linhas

Sequências de Escape
Usadas para formatação de texto:

\n → quebra de linha
\t → tabulação
\" → aspas
\\ → barra invertida

Exemplo:
Cprintf("Olá\nMundo");Mostrar mais linhas

Operadores Aritméticos

+ soma
- subtração
* multiplicação
/ divisão
% resto da divisão (apenas para int)

⚠️ Divisão entre inteiros retorna valor inteiro.
Use float para casas decimais.

Operadores Relacionais
Comparam valores e retornam:

1 → verdadeiro
0 → falso

Operadores Lógicos

&& → AND
|| → OR
! → NOT


Estruturas Condicionais

if / else
Cif (x % 2 == 0) {    printf("Par");} else {    printf("Ímpar");}Mostrar mais linhas
else if
Usado quando há múltiplas condições.

switch
Usado para múltiplas opções fixas.
Cswitch (opcao) {    case 1:        printf("Opção 1");        break;    case 2:        printf("Opção 2");        break;    default:        printf("Opção inválida");}Mostrar mais linhas

Estruturas de Repetição
for
Cfor (int i = 0; i < 5; i++) {    printf("%d ", i);}Mostrar mais linhas

##Resumo Final

Aritméticos → fazem contas
Relacionais → comparam valores
Lógicos → combinam condições
Condicionais → controlam decisões
Laços → controlam repetições
