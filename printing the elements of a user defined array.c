#include<stdio.h>

int main(){
	int num[8]= {0};
	int i = 0, sum=0;
	while (i<=7){
		printf("Enter elements for the array: ");
		scanf("%d", &num[i]);
		sum += num[i];
		i += 1;
	}
	for(i=0;i<=7;i++){
		printf("%d\n", &num[i]);
	}
	printf("\nSum is %d", sum);
	return 0;
}
