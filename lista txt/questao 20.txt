  
#include <stdio.h>

int primo(int n){
  int fator=2;
  printf("%d =", n);

  while(n > 1){
      while(n % fator == 0){
          printf(" %d", fator);
          n = n / fator; 
          if(n > 1){
        printf(" x");
            }
        }
      fator++;   
    }
    return 0;
}
int main(){
  int numero, fator=2;

  printf("digite um nemero: ");
  scanf("%d", &numero);
  printf("Decomposicao de %d em fatores primos:\n", numero);  

  int p = primo(numero);
  printf("\n");
}
