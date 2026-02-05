#include <stdio.h>
int main() {
    int n, i = 0;
    printf("Nhap n: ");
    while(scanf("%d", &n) !=1 || n < 0){
        printf("sai roi , nhap lai n: ");
    }

    while (i * i < n) {
        i++;
    }

    if (i * i == n)
        printf("La so chinh phuong");
    else
        printf("Khong phai so chinh phuong");

    return 0;
}
