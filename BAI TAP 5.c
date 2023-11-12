#include <stdio.h>
int main(){
	int date, month;
	printf ("Nhap ngay sinh: ");
	scanf("%d", date);
	printf ("Nhap thang sinh: ");
	scanf ("%d", month);
	if(21<=date<=20 && 3<=month<=4){
		printf ("Ban la cung BACH DUONG");
	}
	else if (21<=date<=20 && 4<=month<=5){
		printf ("Ban la cung KIM NGUU");
	}
	else if (21<=date<=21 && 5<=month<=6){
		printf ("Ban la cung SONG TU");
	}
	else if (22<=date<=22 && 6<=month<=7){
		printf ("Ban la cung CU GIAI");
	}
	else if (22<=date<=23 && 7<=month<=8){
		printf ("Ban la cung SU TU");
	}
	else if (22<=date<=23 && 8<=month<=9){
		printf ("Ban la cung XU NU");
	}
	else if (23<=date<=23 && 9<=month<=10){
		printf ("Ban la cung THIEN BINH");
	}
	else if (22<=date<=24 && 10<=month<=11){
		printf ("Ban la cung BO CAP");
	}
	else if (21<=date<=23 && 11<=month<=12){
		printf ("Ban la cung NHAN MA");
	}
	else if (19<=date<=22 && 12<=month<=1){
		printf ("Ban la cung MA KET");
	}
	else if (18<=date<=20 && 1<=month<=2){
		printf ("Ban la cung BAO BINH");
	}
	else if (19<=date<=20 && 2<=month<=3){
		printf ("Ban la cung SONG NGU");
	}
}
