#include <stdio.h>

int main() {
	int n;
    int tong = 0;
	printf("nhap cac so nguyen duong: \n");
    while (scanf("%d", &n) == 1 && n != 0 ) {
        if (n > 0) {
            tong += n;
        }
        else if (n < 0){
        	printf("vui long nhap so nguyen duong: \n ");
		}
    }

    printf("Tong cac so nguyen duong la: %d", tong);
    return 0;
}

