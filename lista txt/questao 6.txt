#include <stdio.h>
#include <math.h>
//Imprimir o menor inteiro positivo x cujo quadrado é superior a um valor L dado.
int main(){
	int numero, quadrado = 1, i;
	printf("digite um numero qualquer: ");
	scanf("%d", &numero);
	
	do{
	i =	quadrado*quadrado;
	quadrado++;
	}while(i<numero);
	printf("%d\n", i);
	
	return 0;
}
