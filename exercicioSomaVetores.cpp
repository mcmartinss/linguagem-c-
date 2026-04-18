#include <stdio.h>

int main(){
	
	int n; 
	double soma=0;
	
	printf("Quantos numeros serao digitados? ");
	scanf("%d", &n);
	
	double vet[n];
	
	for(int i=0; i<n; i++){
		printf("Digite um numero: ");
		scanf("%lf", &vet[i]);
	}
	
	printf("\nVALORES = ");
	for(int i=0; i<n; i++){
		printf("%.1lf ", vet[i]);	
	}
	printf("\n");
	
	for(int i=0; i<n; i++){
		soma = soma + vet[i];
	}
	
	double media = soma/n;
	
	printf("SOMA = %.2lf\n", soma);
	
	printf("MEDIA = %.2lf\n", media);
	
return 0; 

}
