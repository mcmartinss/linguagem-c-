#include <stdio.h>

int main(){
	
	int n, nMenores; 
	double soma, media, porc;
	
	printf("Quantas pessoas serao digitadas? ");
	scanf("%d", &n);
	
	char nomes[n][50];
	int idades[n];
	double alturas[n];
	
	for (int i=0; i<n; i++){
		printf("Dados da %da pessoa: \n", i+1);
		printf("Nome: ");
		fseek(stdin, 0, SEEK_END);
		gets(nomes[i]);
		printf("Idade: ");
		scanf("%d", &idades[i]);
		printf("Altura: ");
		scanf("%lf", &alturas[i]);
	}
	
	soma = 0; 
	for(int i=0; i<n; i++){
		soma = soma + alturas[i];
	}
	
	media = soma/n;
	printf("\nAltura media = %.2lf\n", media);
	
	nMenores = 0; 
	for(int i=0; i<n; i++){
		if(idades[i]<16){
			nMenores = nMenores + 1; 
		}
	}
	
	porc = (nMenores*100.0)/n;
	printf("Pessoas com menos de 16 anos: %.1lf %%\n", porc);
	
	for(int i=0; i<n; i++){
		if(idades[i]<16){
			printf("%s\n", nomes[i]);
		}
	}
	
}
