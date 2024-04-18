#include <stdio.h>
#include <locale.h>

int main() {
    char nome[50];
    float notas[4];
    float media;
   
    // Solicita o nome do aluno
    printf("Digite o nome do aluno: ");
    scanf("%s", nome);
   
    // Solicita as notas do aluno
    printf("Digite as 4 notas do aluno:\n");
    for (int i = 0; i < 4; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }
   
    // Calcula a m�dia aritm�tica
    media = 0;
    for (int i = 0; i < 4; i++) {
        media += notas[i];
    }
    media /= 4;
   
    // Verifica a situa��o do aluno
    printf("\nDados do aluno:\n");
    printf("Nome: %s\n", nome);
    printf("Notas: ");
    for (int i = 0; i < 4; i++) {
        printf("%.1f ", notas[i]);
    }
    printf("\nM�dia: %.2f\n", media);
   
    if (media >= 7.0) {
        printf("Situa��o: Aprovado\n");
    } else if (media >= 5.0 && media <= 6.9) {
        printf("Situa��o: Recupera��o\n");
    } else {
        printf("Situa��o: Reprovado\n");
    }
   
    return 0;
}

