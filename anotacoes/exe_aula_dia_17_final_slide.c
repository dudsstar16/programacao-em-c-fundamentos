#include <stdio.h>

int main() {
    int nota1[5], nota2[5], soma_total = 0;
    char nome[5][50];  // Array de strings: 5 alunos, cada nome até 49 chars
    int i;

    printf("=== CADASTRO DE 5 ALUNOS ===\n\n");

    // Lê dados dos 5 alunos
    for (i = 0; i < 5; i++) {
        printf("--- Aluno %d ---\n", i + 1);
        
        printf("Nome: ");
        scanf("%s", nome[i]);  // ✅ %s para string completa
        
        printf("Nota M1: ");
        scanf("%d", &nota1[i]);
        
        printf("Nota M2: ");
        scanf("%d", &nota2[i]);
        
        soma_total += nota1[i] + nota2[i];
        printf("\n");
    }

    // Calcula média da turma
    float media_turma = (float)soma_total / 10.0;

    // Mostra todos os dados + média
    printf("\n=== RELATORIO FINAL ===\n");
    for (i = 0; i < 5; i++) {
        printf("%s: M1=%.1d, M2=%.1d\n", nome[i], nota1[i], nota2[i]);
    }
    printf("\nMEDIA DA TURMA: %.1f\n", media_turma);



    // exemplo feito pelo professor 

    

    return 0;
}