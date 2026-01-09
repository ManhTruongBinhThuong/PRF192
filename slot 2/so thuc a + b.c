#include <stdio.h>
int main(){
	//khai bao 1 bien so thuc a, b, khoi tao gia tri
	float a, b ,sum;
	a = 18;
	printf("a = %.1f\n", a);
	b = 0.36;
	printf("b = %.2f\n", b);
	sum = a + b;
	printf("%.1f + %.2f = %.2f" , a, b, sum);
	return 0;
}