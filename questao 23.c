#include <stdio.h>
#include <string.h>
int main (){
char palavras[100];
int i, palavra=0, letra=0, zero=0;

printf("Digite a palavras\n");
fgets(palavras, 100, stdin);

for(i=0;palavras[i]!='\0';i++){
	if(palavras[i]!=zero && palavras[i]!=' '){
		letra++;
	}else{
        palavra++;
        }
    }
    printf("%d palavras, %d letras.\n", palavra+1, letra-1);
}
