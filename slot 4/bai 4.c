#include <stdio.h>
int main() {
    int a, b;
    char kytu;
    printf("nhap a,b: ");
    scanf("%d,%d", &a, &b);

    printf("nhap phep toan: ");
    scanf(" %c", &kytu); 
    if (kytu == '/') {
        if (b == 0) {
            printf("khong the chia cho 0");
        } else {
            printf("ket qua: %d/%d = %.2f", a, b, (float)a / b);
        }
    }

    return 0;
}