#include<stdio.h>
#include<math.h>

int main(){
	
	double B, A, area, perimetro, diagonal; 
	
	printf("Digite a medida da base do retangulo: ");
	scanf("%lf", &B);
	printf("Digite a medida da altura do retangulo: ");
	scanf("%lf", &A);
	
	area = B*A;
	perimetro = 2*B + 2*A;
	diagonal = sqrt (B*B + A*A);
	
	printf("AREA = %.4lf\n", area);
	printf("PERIMETRO = %.4lf\n", perimetro);
	printf("DIAGONAL = %.4lf\n", diagonal);
	
return 0; 

}
