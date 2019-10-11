#include <stdio.h>
//Calcular os divisores de um nº qualquer.
int main() {
int i, numero;
	printf("digite um numero qualquer: ");
	scanf("%d", &numero);
	
	for(i=1;i<=numero;i++){
		if(numero%i==0){
			printf("%d e um divisor de %d\n",i, numero);
		} 	
	}
	
		
	
	return 0;
}
