#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, x1, x2, x3, delta;
	printf ("Nhap vao 3 nghiem a,b,c: ");
	scanf("%f%f%f", &a, &b, &c);
	if (delta > 0){
		x1 = (-b+sqrt(delta))/(2*a);
		x2 = (-b-sqrt(delta))/(2*a);
		printf("Pt co 2no phan biet: x1=%.2f va x2=%.2f", x1, x2);
		
	}
	else if(delta<0){
		printf ("Pt vo no");
	}
	else if(delta = 0){
		x1=-b/(2*a);
		prinf ("Pt co 2 no kep x1=x2=%.2f", x1);
	}
	if(a==0){
		printf("he so a phai khac 0");
	}
}
