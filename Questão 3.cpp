#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
 int main (){
 	setlocale(LC_ALL,"");
 	char nome[150], email [200];
 	int idade, telefone;
 	int opcaoEscolhida;
 	 
 	 printf("Digite Seu nome: ");
 	 scanf("%s", &nome);
 	 
 	 printf("Digite sua idade: ");
 	 scanf("%de", &idade);
 	 
 	 printf("Digite seu Email: ");
 	 scanf("%s", &email);
 	 
 	 printf("Digite seu n�mero de telefone: ");
 	 scanf("%d",&telefone);
 	 
 	 
 	 printf("Escolha uma das op��es a baixo");
 	 
 	 do{
	  
 	 
 	 printf("\n1- Mostra nome e idade");
 	 printf("\n2 - Mostrar nome e e-mail");
 	 printf("\n3 - Mostrar nome e telefone");
 	 printf("\n4 - Mostrar todas as informa��es");
 	 printf("\n0 - Sair do programa");
 	 
 	 printf("\nDigite a op��o Escolhida: ");
 	 scanf("%i", &opcaoEscolhida);
 	 
 	 switch (opcaoEscolhida) {
	  case 1: 
	   printf("Seu nome: %s\n", nome);
	   printf("Sua idade: %d\n", idade);
	   break;
	   case 2:
	   	 printf("Seu nome: %s\n", nome);
	   	 printf("Seu Email: %s\n ", email);
	   	break;
	   	case 3:
	   		printf("Seu nome: %s\n", nome);
	   		printf("Seu N�mero de telefone: %d\n", telefone);
	   	break;
	   	case 4:
	   		printf("Seu nome: %s\n", nome);
	        printf("Sua idade: %d\n", idade);
	  	    printf("Seu Email: %s\n ", email);
	    	printf("Seu N�mero de telefone: %d\n", telefone);
	   	break;
	   	case 0:
	   		printf("Voc� escolheu sair do programa ");
           default:
           	
           	
		   break;                                                     	   		
	  }
	  printf("Op��o incorreta, tente novamente!");
   } while (opcaoEscolhida != 0);
   
	  return 0;
 }
