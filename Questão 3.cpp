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
 	 
 	 printf("Digite seu número de telefone: ");
 	 scanf("%d",&telefone);
 	 
 	 
 	 printf("Escolha uma das opções a baixo");
 	 
 	 do{
	  
 	 
 	 printf("\n1- Mostra nome e idade");
 	 printf("\n2 - Mostrar nome e e-mail");
 	 printf("\n3 - Mostrar nome e telefone");
 	 printf("\n4 - Mostrar todas as informações");
 	 printf("\n0 - Sair do programa");
 	 
 	 printf("\nDigite a opção Escolhida: ");
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
	   		printf("Seu Número de telefone: %d\n", telefone);
	   	break;
	   	case 4:
	   		printf("Seu nome: %s\n", nome);
	        printf("Sua idade: %d\n", idade);
	  	    printf("Seu Email: %s\n ", email);
	    	printf("Seu Número de telefone: %d\n", telefone);
	   	break;
	   	case 0:
	   		printf("Você escolheu sair do programa ");
           default:
           	
           	
		   break;                                                     	   		
	  }
	  printf("Opção incorreta, tente novamente!");
   } while (opcaoEscolhida != 0);
   
	  return 0;
 }
