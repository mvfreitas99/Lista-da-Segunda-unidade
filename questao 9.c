#include <stdio.h>
//Calcular e mostrar a média aritmética dos números pares compreendidos entre 13 e 73.

int main() {
	int i, soma = 0, cont, media;
		for(i=13;i<=73;i++){
			if(i%2==0){
				soma +=i;
				cont++;
			}
		}
		media = (soma/cont);
		printf("a media entre 13 e 73 e %d\n", media);
	return 0;
}
