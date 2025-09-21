#include<stdio.h>
int main(){
	int num1=0;
	printf("Enter any number to check if it is divisible by both 3 and 5:\n");
	scanf("%d", &num1);
	if (num1 % 3 == 0 && num1 % 5 == 0)
	{
		printf("The Number %d is divisible by both 3 and 5.", num1);
	}
	else 
	{
		printf("The number %d is not divisible by both 3 and 5.", num1);
	}
	return 0;
}
