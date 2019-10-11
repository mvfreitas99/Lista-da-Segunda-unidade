#include <stdio.h>
//Ler um número e escreva se ele "é primo" ou "não é primo".


int main() {
	int i, numero, cont=0;
	
	printf("digite um numero qualquer: ");
	scanf("%d", &numero);
	
	for(i=numero-1;i>1;i--){
		if(numero%i==0){
			cont++;
		}
	}
	
	if(cont==0){
		printf("o numero %d e um numero primo", numero);
	}else{
		printf("o numero %d nao e um numero primo", numero);

	}
		
	return 0;
}
