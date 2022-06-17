#include<stdio.h>

int main(){
	int integer[10], i, n=3;
	float fp[10];
	for(i=0;i<=n;i++){
		printf("enter the integer value: ");
		scanf("%d", &integer[i]);
	}
	for(i=0;i<=n;i++){
		printf("enter the floating point value: ");
		scanf("%f",&fp[i]);
	}	
	
	printf("Interger value: ");
	
	for(i=0;i<=n;i++){
		printf("%d\t", integer[i]);
    }
	
	printf("\nFloating point value: ");
	
	for(i=0;i<=n;i++){
		printf("%.2f\t", fp[i]);
    }
}
