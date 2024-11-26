#include <stdio.h>
int main(){
	int a;
	printf("Moi ban nhap mat khau co 4 chu so: ");
	scanf("%d",&a);
	while(a != 2024){
		printf("Sai mat khau, moi ban nhap lai: ");
		scanf("%d",&a);
	}
	return 0;
}
