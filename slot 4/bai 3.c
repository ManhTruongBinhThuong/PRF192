#include <stdio.h>

int main() {
    float soThuc;
    int phanNguyen;
    float phanThapPhan;
	printf("Nhap vao so thuc: ");
    scanf("%f", &soThuc);
    phanNguyen = (int)soThuc;
    phanThapPhan = soThuc - (int)phanNguyen;
    printf("Gia tri da nhap: %.4f\n", soThuc);
    printf("Phan nguyen: %d\n", phanNguyen);
    printf("Phan thuc: %.4f\n", phanThapPhan);
    return 0;
}