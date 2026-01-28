#include <stdio.h>
int main(){
	float soKm;
	int money;
	int thoiGian;
	float tong;
	printf("nhap quang duong (km): ");
	if (scanf("%f", &soKm) != 1 || soKm <= 0 ){
		printf("nhap sai, dung chuong trinh\n");
		return 0;
 	}
	printf("thoi gian cho(phut): ");
	scanf("%d", &thoiGian);
	if (soKm <= 0.5){
		money = 12000;
	} else if (soKm <= 30 && soKm >= 0.5){
		money = 12000 + (soKm - 0.5) * 15000;
	} else {
		money = 12000 + ((30 - 0.5) * 15000) + ((soKm - 30)* 12000);
	} 
	tong = money;
	if (thoiGian > 5){
		tong = money + (thoiGian - 5) * 1000;
	}
	printf("Tong tien taxi: %.0f \n", tong);
	return 0;	
}






