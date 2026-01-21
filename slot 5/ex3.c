#include <stdio.h>
int main(){
	float a,b,c;
	printf("Nhap a b c: ");
	scanf("%f%f%f",&a,&b,&c);
	if (a>b && a>c)
		printf("gia tri max la : %.2f", a);
     else 
		if( b>a && b>c )
		printf("gia tri max la : %.2f", b);
        else
		printf("gia tri max la : %.2f", c);
		return 0;		
}