#include<stdio.h>

int main(){
	
	char nome1[50], nome2[50];
	int idade1, idade2;
	double media;
	
	printf("DADOS DA PRIMEIRA PESSOA\n");
	printf("Nome: ");
	gets(nome1);
	printf("Idade: ");
	scanf("%d", &idade1);
	
	printf("DADOS DA SEGUNDA PESSOA\n");
	printf("Nome: ");
	fseek(stdin, 0, SEEK_END);
	gets(nome2);
	printf("Idade: ");
	scanf("%d", &idade2); 
	
	media = (double)(idade1 + idade2)/2;
	
	printf("A media das idades de %s e %s eh de %.1lf anos\n", nome1, nome2, media);
	
return 0;

}
