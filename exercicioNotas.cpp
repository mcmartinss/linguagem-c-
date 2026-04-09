#include<stdio.h>

int main(){
	
	double n1, n2, nFinal;
	
	printf("Digite a primeira nota: ");
	scanf("%lf", &n1);
	printf("Digite a segunda nota: ");
	scanf("%lf", &n2);
	
	nFinal = (n1+n2);
	
	printf("NOTA FINAL = %.1lf\n", nFinal);
	
	if (nFinal < 60){
		printf("REPROVADO");
	} else {
		printf("APROVADO");
	}
	
return 0;
}
