#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	int soDoan,soBimat;
    srand(time(NULL));
    soBimat = rand() % 10 + 1;
	while(1){
	printf("Nhap so ban doan: ");
	while (scanf ("%d",&soDoan) !=1 || soDoan < 1 || soDoan > 10){ 
	printf("Sai roi! Yeu cau nhap lai: ");
	while (getchar() != '\n');
	}
	if(soDoan>soBimat){
		printf ("Nho hon\n");
	}else if(soDoan<soBimat) {
		printf ("Lon hon\n");
	}else {
		printf ("Chuc mung!Ban da doan dung tadaa so bi mat la %d",soBimat);
		break;
	}
	}
	return 0;
}
