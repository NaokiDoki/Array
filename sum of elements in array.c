#include<stdio.h>

int main(){
	int i= 0,sum = 0;
	int num[8] = {1,2,3,4,5,6,7,8};
	while (i<=7){
		sum = num[i] + sum;
		i += 1;
	}
	printf("Sum = %d", sum);
	return 0;
}

