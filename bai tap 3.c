#include <stdio.h>
#include <math.h>
int main(){
	int minute, cuoc;
	printf("Nhap vao so phut su dung: ");
	scanf ("%d", &minute);
	if (minute<50){
	cuoc = minute*600;
	printf("Cuoc dien thoai la: %d", cuoc);
		
	}
	else if (50<minute<150){
	cuoc = minute*400;
	printf("Cuoc dien thoai la: %d", cuoc);
	}
	else if(150<minute<200){
	cuoc = minute*200;
	printf("Cuoc dien thoai la: %d", cuoc);
		
	}
	else if(minute>200){
	cuoc = minute*100;
	printf("Cuoc dien thoai la: %d", cuoc);
	}
	
	
}
