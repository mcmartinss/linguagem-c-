#include<stdio.h>

int main(){
	
	int X, Y, i, troca, soma;
	
	printf("Digite dois numeros: \n");
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if (X > Y){
		troca = X;
		X = Y;
		Y = troca;
	}
	
	soma = 0;
	for (int i =0+1; i < Y; i++){
		if (i%2 != 0){
			soma = soma + i;
		}	
	}
	
	printf("SOMA DOS IMPARES = %d", soma);
	
return 0;

}
