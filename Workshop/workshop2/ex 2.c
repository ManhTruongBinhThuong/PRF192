#include <stdio.h>
#include <math.h>
int main(){
	float n;
	int count = 0;
	while(count < 5){
		printf("nhap so %d: ", count + 1);
		while(scanf("%f", &n)!=1 || n <= 0){
			printf("nhap lai so %d: ", count + 1);
			fflush(stdin);
		}
		printf("can bac hai la: %.2f\n", sqrt(n));
		count ++;
	}
	printf("\nDa xong, qua xuat sac");

}