#include <stdio.h>
//Calcular a diferença entre o 6o e o 12o números Primos.


int main() {
	int i,j, numero, cont=0, contNumero=0, sexton, dozen;
	
	for(i=2;i<100;i++){
		for(j=i;j>1;j--){
			if(i%j==0){
				cont++;
			}
		}
		if(cont==1){
			contNumero++;
				if(contNumero == 6){
					sexton=i;			
				}
				if(contNumero == 12){
					dozen=i;
				}
		}
		cont = 0;
		
		
		
	}
	
	printf("a diferenca entre o 6o e 12o numeros primos e: %d", (dozen-sexton));
		
	return 0;
}
