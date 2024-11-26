#include <stdio.h>
int main(){
	int number;
	printf("Hay nhap mot so nguyen bat ky: ");
	scanf("%d",&number);
	for(int i = 1; i<=number; i++){
		if(number%i==0){
			printf("Tat ca cac uoc cua %d la: %d\n", number, i);
		}
	}
}
