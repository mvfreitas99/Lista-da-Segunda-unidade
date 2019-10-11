#include <stdio.h>

int main(){
	int i, tamanho, cont=0;
	char nome[1000],carac ='a';
	
	printf("Escreva uma frase: ");
	fgets(nome, 1000, stdin);
	
	tamanho = strlen(nome)-1;
	for(i=0;i<=tamanho;i++){
		if(nome[i] == 'a'){
			cont++;
		}
	}
	
	printf("A quantidade de letras %c e: %d", carac, cont);
		
	return 0;
}
