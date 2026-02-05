#include <stdio.h>

int main() {
	int n;
	printf("Nhap so nguyen n: ");
	while(scanf("%d", &n) != 1 || n < 1 || n < 1000) {
		printf("Nhap lai n: ");
	}
	
	int i = 1;
	while(i <= n) {
		printf("%d ", i);
		i++;
	}
	return 0;
}