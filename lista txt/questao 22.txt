#include <stdio.h>
#include <string.h>

int imprimeVertical(int elemento[], int total){
    int i,x ,y;
    int max = elemento[0];
    for (i = 1; i < total; ++i){
        if (elemento[i] > max) max = elemento[i];
    }
    for (y = max; y >= 1; --y){
        for (x = 0; x < total; ++x){
            if (elemento[x] >= y)
                printf("*");
            else 
                printf(" ");
        } 
        printf("\n"); 
    }
    return 0;
}   
int main(){
    int i, j=0; 
	char palavras[100];
    int cop[100];
for(i=0; i<100; i++){
        cop[i] = 0;
        palavras[i] = 0;
    }

	printf("Digite: ");
	fgets(palavras, 40, stdin);
	int tamanho = strlen(palavras);

    

	for(i=0; i<tamanho; i++){
		if(palavras[i]>=48 && palavras[i]<=57){
			cop[j] = palavras[i]-48;
			j++;
		}
	}	
    tamanho = strlen(palavras);
    imprimeVertical(cop, tamanho);
    return 0;
}
