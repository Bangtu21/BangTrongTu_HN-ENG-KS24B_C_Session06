#include <stdio.h>
int main(){
	int n, count = 0, number=0, prime=2;
	printf("Ban hay nhap mot so nguyen bat ky: ");
	scanf("%d", &n);
	while(number<n){
		count = 0;
		for(int i =1; i<=prime; i++){
			if(prime%i==0){
				count++;
			}
		}
		if(count==2){
			printf("\n So nguyen to %d", prime);
			number++;
		}
		prime++;
	}
}
