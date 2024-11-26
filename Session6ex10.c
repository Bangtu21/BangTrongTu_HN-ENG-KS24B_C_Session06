#include<stdio.h>
int main (){
	int number, prime = 1;
	printf("Hay nhap mot so: ");
	scanf("%d", &number);
	for(int i = 2; i < number; i++){
		if(number%i==0){
			printf("%d khong phai la so nguyen to", number);
			prime++;
		}
	}
	if(prime==1){
		printf("%d la so nguyen to", number);
	}
}
