#include <stdio.h>
//Para calcular o fatorial de um número qualquer.
int main() {
int i, numero, fatorial=1;
	printf("digite um numero qualquer: ");
	scanf("%d", &numero);
	
	for(i=numero;i>1;i--){
		fatorial *=i;
	}
	printf("o fatorial de %d e %d", numero, fatorial);
		
	
	return 0;
}
