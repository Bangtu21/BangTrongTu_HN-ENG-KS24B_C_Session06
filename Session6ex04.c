#include <stdio.h>
int main(){
	float a, b, c, delta;
	printf("Nhap 3 so a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	if(a==0){
		printf("Phuong trinh co nghiem %.2f", -c/b);
	}else{
		if(delta>0){
			printf("Phuong trinh co hai nghiem phan biet la: %.2f va %.2f",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
		}else if(delta==0){
			printf("Phuong trinh co nghiem kep la: %.2f",-b/(2*a));
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}
	return 0;
}
