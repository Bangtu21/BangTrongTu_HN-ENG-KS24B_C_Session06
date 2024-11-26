#include <stdio.h>
int main (){
	int num, chan = 0, le = 0;
	for(int i = 0; i < 5; i++){
		printf("Hay nhap so thu %d: ", i + 1);
		scanf("%d", &num);
		if(num % 2 == 0){
			chan++;
		}else{
			le++;
		}
	}
	printf("So chan la %d\n", chan);
	printf("So le la %d", le);
}
