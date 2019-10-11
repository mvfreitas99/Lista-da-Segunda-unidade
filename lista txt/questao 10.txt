#include <stdio.h>
//Ler 10 valores, um de cada vez, e contar quantos deles estão no intervalo [10,50]
// e quantos deles estão fora deste intervalo, mostrando estas informações.

int main() {
	int i, numeros[10], cont1=0, cont2=0;
	
		for(i=0; i<10;i++){
			printf("digite um numero: ");
			scanf("%d", &numeros[i]);
		}
		for(i=0; i<10;i++){
			if(numeros[i]>=10 && numeros[i]<=50){
				cont1 ++;
			}else{
				cont2++;
			}
		}
		printf("%d numeros estao no intervalo [10,50]\n%d numeros estao fora.",cont1, cont2);
	
		
	return 0;
}
