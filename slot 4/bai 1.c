#include <stdio.h>
int main(){
	int a, b;
	printf("Nhap vao so a b:");
	int kq = scanf("%d%d",&a,&b);
	if (kq>0){
		printf("ket qua cua scanf : %d\n", kq);
		printf("a =%d, b =%d", a, b);
	}
	else 
	    printf("\nnhap sai r kia m, chua tay dau");
	    printf("\nbai tap voi ham scanf");
	return 0;
}