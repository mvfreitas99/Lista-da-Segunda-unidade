#include <stdio.h>
//Imprimir a tabuada de qualquer número n.

int main() {
	int i, numero;
		printf("digite um numero qualquer: ");
		scanf("%d", &numero);
		
		for(i=0;i<=10;i++){
		printf("%d x %d = %d\n", numero, i, (numero*i));
		}

	return 0;
}
