#include <stdio.h>

int main() {
    int n;
    long long kq = 0;
    long long mu = 1;
    printf("Nhap so thap phan: ");
    while (scanf("%d", &n) !=1 || n <= 0){
    	printf("nhap lai so thap phan: ");
	}

    while (n > 0) {
        kq += (n % 2) * mu;
        mu *= 10;
        n /= 2;
    }

    printf("So nhi phan: %lld", kq);
    return 0;
}
