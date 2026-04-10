#include<stdio.h>

int main(){
	
	int i, x;
	
	printf("Deseja a tabuada para qual valor?: ");
	scanf("%d", &x); 
	
	for (i=0; i<=10; i++){
		printf("%d X %d = %d\n", x, i, x*i);
	}
	
return 0; 
}
