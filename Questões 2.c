#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");

    int numero;
    int contador = 0;
    int soma = 0;

    printf ("Insira os N�meros positivos(insira um n�mero negativo para encerrar): \n");

    while (1){
        scanf("%d", &numero);
        if (numero < 0){
            break; // interrompe o loop quando um n�mero negativo � inserido
        }
        soma += numero;
        contador++;
    }

    if (contador == 0){
        printf("Nenhum n�mero positivo foi inserido\n");
    } else{
        float media = (float)soma/contador;
        printf("A m�dia dos n�meros inseridos �: %.2f\n", media);
    }
}


