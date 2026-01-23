#include <stdio.h>

int main() {
    float diemChuyencan, diemGiuaky, diemCuoiky;
    float diemTongKet;
    char diemChu;
    printf("Nhap diem chuyen can, giua ky, cuoi ky:");
	scanf ("%f %f %f", &diemChuyencan, &diemGiuaky, &diemCuoiky);
	diemTongKet =((diemChuyencan * 0.1) + (diemGiuaky * 0.3) + (diemCuoiky * 0.5));
    if (diemTongKet >= 8.5 && diemTongKet <= 10)
        diemChu = 'A';
    else if (diemTongKet >= 7.0 && diemTongKet < 8.5)
        diemChu = 'B';
    else if (diemTongKet >= 5.5 && diemTongKet < 7.0)
        diemChu = 'C';
    else if (diemTongKet >= 4.0 && diemTongKet < 5.5)
        diemChu = 'D';
    else
        diemChu = 'F';
    printf("\nDiem tong ket: %.2f", diemTongKet);
    printf("\nDiem chu: %c", diemChu);
    if (diemChuyencan >= 4.0 && diemGiuaky >= 4.0 && diemCuoiky >= 4.0 && diemChu != 'F') {
        printf("\n=> Du dieu kien tot nghiep");
    } else {
        printf("\n=> Khong du dieu kien tot nghiep");
    }

    return 0;
}
