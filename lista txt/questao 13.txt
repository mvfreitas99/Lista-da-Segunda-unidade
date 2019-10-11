#include <stdio.h>

int main(){
	int qtdNumeros, i, soma=0;
	
	printf("Digite a quantidade de números que voce quer ver: ");
	scanf("%d", &qtdNumeros);
	
	int numero[qtdNumeros];
	numero[0] = 0;
	numero[1] = 1;
	
	for(i=2;i<qtdNumeros;i++){
		numero[i] = numero[i-2]+numero[i-1];
		soma+=numero[i];
	}
	
	for(i=0;i<qtdNumeros;i++){
		printf("%d, ", numero[i]);
	}
	printf("\nsoma = %d", soma);
	return 0;
}
