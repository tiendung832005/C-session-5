#include<stdio.h>
#include<math.h>
float main(){
	float a, b;
	printf("nhap tong thu nhap: ");
	scanf("%f",&a);
	if(0<a<=5){
		b=a*0.95;
	} else if(5<a<=10){
		b=a*0.9;
	} else if(10<a<=18){
		b=a*0.85;
	} else if(18<a<=32){
		b=a*0.8;
	} else if(32<a<=52){
		b=a*0.75;
	} else if (52<a<=80){
		b=a*0.7;
	} else if(a>80){
		b=a*0.65;
	}
	printf("luong thuc te la: %f trieu",b);
} 
