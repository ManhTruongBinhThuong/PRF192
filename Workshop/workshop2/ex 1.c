#include <stdio.h>
#include <math.h>
int main(){
	float n;
	printf("nhap n ");
	while(scanf("%f", &n)!=1 || n <= 0 || n > 1000){
		printf("nhap lai n: ");
		fflush(stdin);
	}
	printf("can bac hai la: %.2f", sqrt(n));
}