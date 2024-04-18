#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL,"");

    int numero;
    int contador = 0;
    int soma = 0;

    printf ("Insira os Números positivos(insira um número negativo para encerrar): \n");

    while (1){
        scanf("%d", &numero);
        if (numero < 0){
            break; // interrompe o loop quando um número negativo é inserido
        }
        soma += numero;
        contador++;
    }

    if (contador == 0){
        printf("Nenhum número positivo foi inserido\n");
    } else{
        float media = (float)soma/contador;
        printf("A média dos números inseridos é: %.2f\n", media);
    }
}


