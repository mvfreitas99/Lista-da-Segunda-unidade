#include <stdio.h>
#include <stdlib.h>
//Gerar 20 números entre 1000 a 1999 que divididos por 11 dão um resto igual a 5.

int main() {
	int i, cont =0;
	
		for (i=1000; i<2000; i++){
			if(i%11==5){
				cont++;
				printf("%d numero: %d \n",cont, i);
				if(cont>=20){
					exit(0);
				}
			}
		}
	
		
	return 0;
}
