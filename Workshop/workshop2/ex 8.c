#include <stdio.h>
int main(){
    int a, b, r;
    printf("Nhap a va b: ");
    while (scanf("%d %d", &a, &b) != 2 || b == 0){
        printf("Nhap sai, nhap lai: ");
        while (getchar() != '\n'); 
    }
    while (b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    printf("UCLN la: %d", a);
    return 0;
}
