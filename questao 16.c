#include <stdio.h>

int main(){
int i, tamanho;
char nome[1000];
	
	printf("Escreva uma frase: ");
	fgets(nome, 1000, stdin);
	tamanho = strlen(nome)-1;
	
	for(i = tamanho; i>=0; i--){
		printf("%c", nome[i]);
	}

	return 0;
}
