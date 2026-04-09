#include<stdio.h>

int main(){
	
	double L, C, area, preco, valor;
	
	printf("Digite a largura do terreno: ");
	scanf("%lf", &L);
	printf("Digite o comprimento do terreno: ");
	scanf("%lf", &C);
	printf("Digite o valor do metro quadrado: ");
	scanf("%lf", &valor);
	
	area = L*C;
	preco = valor*area;
	
	printf("\nO terreno tem %.2lf m2 e tem um valor total de %.2lf reais\n", area, preco);
	
return 0;
}
