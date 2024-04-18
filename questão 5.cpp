#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"");
	
    int numeros[5];
    int i;
    int numeroMenor, numeroMaior;

    printf("Digite 5 números inteiros:\n");

    // Leitura dos números
    for (i = 0; i < 5; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &numeros[i]);
    }

    // Inicializa o menor e o maior com o primeiro número
    numeroMenor = numeros[0];
    numeroMaior = numeros[0];

    // Encontra o menor e o maior número
    for (i = 1; i < 5; i++) {
        if (numeros[i] < numeroMenor) {
            numeroMenor = numeros[i];
        }
        if (numeros[i] > numeroMaior) {
            numeroMaior = numeros[i];
        }
    }

    // Exibe o menor e o maior número
    printf("O menor número é: %d\n", numeroMenor);
    printf("O maior número é: %d\n", numeroMaior);

    return 0;
}

