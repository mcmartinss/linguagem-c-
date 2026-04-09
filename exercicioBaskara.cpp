#include<stdio.h>
#include<math.h>

int main(){
	
	double a, b, c;
	double x1, x2;
	double delta;
	
	printf("Digite o coeficiente A: ");
	scanf("%lf", &a);
	printf("Digite o coeficiente B: ");
	scanf("%lf", &b);
	printf("Digite o coeficiente C: ");
	scanf("%lf", &c);
	
	delta = (b*b) - 4*a*c;
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	
	if (delta < 0){
		printf("Nao ha raizes reais!");
	} else {
		printf("\nAs raizes da equacao sao X1 = %.4lf e X2 = %.4lf\n", x1, x2);
	}
}
