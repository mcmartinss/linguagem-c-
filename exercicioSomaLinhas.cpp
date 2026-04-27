#include<stdio.h>

int main(){
	
	int m, n; 
	
	printf("Qual a quantidade de linhas na matriz? ");
	scanf("%d", &n);
	printf("Qual a quantidade de colunas na matriz? ");
	scanf("%d", &m);
	
	double mat[n][m];
	double vet[m];
	
	for(int i=0; i<n; i++){
		printf("Digite os elementos da %da linha: \n", i+1);
		for(int j=0; j<m; j++){
			scanf("%lf", &mat[i][j]);
		}
	}
	
	for(int i=0; i<n; i++){
		vet[i]=0;
		for(int j=0; j<m; j++){
			vet[i] = vet[i] + mat[i][j];
		}
	}
	
	printf("\nVETOR GERADO: \n");
	for(int i=0; i<n; i++){
		printf("%.1lf\n", vet[i]);
	}
	
return 0; 

}
