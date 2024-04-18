#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 int main (){
 	setlocale(LC_ALL,"");
 	
 	int numeros[6], impares = 0, pares = 0;
	int i, j;
	 
	 for ( i = 0; i < 6; i++) {
	 	printf("Digite o %iº número: ", i+1);
	 	scanf("%i", &numeros[i]);
	  
	 
	  if (numeros[i] % 2 == 0){
	  	 pares++;
     }  else{ 
      impares++;
     }
     
	 }
	 	
	 printf("Quantidade de números pares: %i\n", pares);
	 printf("Quantidade de números ímpares: %i\n", impares);
    
    for ( i = 0; i < 6; i++){
    	printf("\nNúmeros: %i\n", numeros[i]);
	}
		
 	return 0;
 	
 }
