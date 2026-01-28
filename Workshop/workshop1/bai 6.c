#include <stdio.h>

int main() {
    float diemChuyencan, diemGiuaky, diemCuoiky;
    float diemTongKet;
    char diemChu;
    printf("Nhap diem chuyen can, giua ky, cuoi ky:");
	int kq = scanf("%f %f %f",&diemChuyencan, &diemGiuaky, &diemCuoiky);
	printf("kq nhap: %d",kq);
	if(kq !=3 || diemChuyencan <0 || diemGiuaky<0 || diemChuyencan <0 || diemCuoiky<0 || diemChuyencan >10 || diemGiuaky>10 ||diemCuoiky>10)
	{
		printf("\nNhap sai diem, diem >=0!");
		return 0;
	}
	diemTongKet = (diemChuyencan * 0.1) + (diemGiuaky * 0.3) + (diemCuoiky * 0.6);
    if (diemTongKet >= 8.5)
        diemChu = 'A';
    else if (diemTongKet >= 7.0)
        diemChu = 'B';
    else if (diemTongKet >= 5.5)
        diemChu = 'C';
    else if (diemTongKet >= 4.0)
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



