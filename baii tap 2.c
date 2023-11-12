#include <stdio.h>
#include <math.h>
int main(){
	int tong,hoahong;
	printf("Nhap doanh so: ");
	scanf("%d", &tong );
	if (tong<=100){
		hoahong = tong*5;
		printf("Hoa hong cua dai ly la: %d", hoahong);
		
	}
	else if (100<tong<=300){
		hoahong = tong*10;
		printf("Hoa hong cua dai ly la: %d", hoahong);
		
	}
	else if (tong>300){
		hoahong = tong*20;
		printf("Hoa hong cua dai ly la: %d", hoahong);
		
	}
	
	
}
