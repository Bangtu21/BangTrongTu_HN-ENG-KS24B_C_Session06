#include <stdio.h>
int main(){
	int month, year;
	printf("Nhap so nam ban muon biet: ");
	scanf("%d",&year);
	printf("Nhap so thang ban muon biet: ");
	scanf("%d",&month);
	if(year%4==0 && year%100!=0 || year%400==0){
		printf("Nam %d la nam nhuan co 366 ngay\n", year);
		if(month==1 && 0<month && month <13){
			printf("Thang 1 co 31 ngay");
		}else if(month==2){
			printf("Thang 2 co 29 ngay");
		}else if(month==3){
			printf("Thang 3 co 31 ngay");
		}else if(month==4){
			printf("Thang 4 co 30 ngay");
		}else if(month==5){
			printf("Thang 5 co 31 ngay");
		}else if(month==6){
			printf("Thang 6 co 30 ngay");
		}else if(month==7){
			printf("Thang 7 co 31 ngay");
		}else if(month==8){
			printf("Thang 8 co 31 ngay");
		}else if(month==9){
			printf("Thang 9 co 30 ngay");
		}else if(month==10){
			printf("Thang 10 co 31 ngay");
		}else if(month==11){
			printf("Thang 11 co 30 ngay");
		}else{
		printf("Thang 12 co 31 ngay");
		}	
	}else{
		printf("Nam %d la nam khong nhuan co 365 ngay\n", year);
		if(month==1 && 0<month && month <13){
			printf("Thang 1 co 31 ngay");
		}else if(month==2){
			printf("Thang 2 co 28 ngay");
		}else if(month==3){
			printf("Thang 3 co 31 ngay");
		}else if(month==4){
			printf("Thang 4 co 30 ngay");
		}else if(month==5){
			printf("Thang 5 co 31 ngay");
		}else if(month==6){
			printf("Thang 6 co 30 ngay");
		}else if(month==7){
			printf("Thang 7 co 31 ngay");
		}else if(month==8){
			printf("Thang 8 co 31 ngay");
		}else if(month==9){
			printf("Thang 9 co 30 ngay");
		}else if(month==10){
			printf("Thang 10 co 31 ngay");
		}else if(month==11){
			printf("Thang 11 co 30 ngay");
		}else{
		printf("Thang 12 co 31 ngay");
		}
	}
}
