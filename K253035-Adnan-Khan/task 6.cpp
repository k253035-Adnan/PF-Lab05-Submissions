#include<stdio.h>
int main(){
	int num1=0;
	int num2=0;
	int max=0;
	printf("Enter first number:\n");
	scanf("%d", &num1);
	printf("Enter Second number:\n");
	scanf("%d", &num2);	
	max = (num1 > num2) ? num1 : num2;
	printf("The maximum of %d and %d is %d.\n", num1, num2, max);
	return 0;
}
