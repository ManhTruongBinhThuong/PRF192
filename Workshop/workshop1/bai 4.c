#include <stdio.h>
int main(){
	int money;
	int soKwh;
	printf("Nhap so Kwh: ");
	scanf("%d", &soKwh);

	if ( soKwh <= 100 ){
		money = soKwh * 950;

	} else if(soKwh <= 150 && soKwh > 100){
		money = soKwh * 1250;
	} else if(soKwh <= 200 && soKwh > 150){
		money = soKwh * 1350;
	} else 
		money = soKwh * 1550;
	printf("so tien la : %d", money);
	return 0;
		
}