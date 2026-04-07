#include <stdio.h>
#include <string.h>

int main(){
	
	int idade;
	double salario;
	double altura;
	char nome[50];
	
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite seu salario atual: ");
	scanf("%lf", &salario);
	printf("Digite sua altura: ");
	scanf("%lf", &altura);
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("IDADE = %d\n", idade);
	printf("SALARIO = %3.lf\n", salario);
	printf("ALTURA = %.2lf\n", altura);
	printf("NOME = %s\n", nome);
	
	return 0;
}
