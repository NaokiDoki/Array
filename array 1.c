#include<stdio.h>

int main(){
	int num[8] = 0;
	int i = 0;
	while (i<=7){
		printf("Enter elements for the array: ");
		scanf("%d", &num[i]);
		i += 1;
		printf("%d\n", num[i]);
	}
	return 0;
}
