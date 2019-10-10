#include <stdio.h>

float converter(float x){
	float tf = x*9/5+32;
	return tf;
}

int main(){
	float tempf, tc;
	
	printf("digite uma temperatura em oCelsius: ");
	scanf("%f", &tc);
	
	tempf = converter(tc);
	printf("%.2f graus em celsius e %.2f graus em fahrenheit.", tc, tempf);
	return 0;
}
