#include <stdio.h>

int converter(float x){
	float tc = 5*(x-32)/9;
	return tc;
}

int main(){
	float tempc, tf;
	
	printf("digite uma temperatura nas escala farhrenheit: ");
	scanf("%f", &tf);
	
	tempc = converter(tf);
	printf("%.2f graus em celsius e %.2f graus em fahrenheint.", tf, tempc);
	return 0;
}
