#include<stdio.h>

int main(){
	
	int a, b, c;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &a);
	printf("Digite o segundo valor: ");
	scanf("%d", &b);
	printf("Digite o terceiro valor: ");
	scanf("%d", &c);
	
	if ((a<b) && (a<c)){
		printf("MENOR = %d\n", a);
	} 
	else if ((b<c) && (b<a)){
		printf("MENOR = %d\n", b);
	} 
	else{
		printf("MENOR = %d\n", c);
	}
	
return 0;

}
