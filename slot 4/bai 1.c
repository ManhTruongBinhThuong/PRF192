#include <stdio.h>
int main(){
<<<<<<< HEAD
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
=======
	int a;
	printf("nhap vao a: ");
	scanf("%d",&a);
	printf("a= %d", a);
>>>>>>> 80e8e0718afa284aa0df26fdb49a17d26d361685
	return 0;
}
