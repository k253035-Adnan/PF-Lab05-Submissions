#include<stdio.h>
int main(){
	int age = 0;
	printf("Enter your age:\n");
	scanf("%d", &age);
	if (age < 13)
	{
		printf("\nYour current life stage is: A Child");
	}
	else 
	{
		if (age >= 13 && age <=17)
		{
			printf("Your current life stage is: A teenager\n");
		}
		else
		{
			if (age > 17 && age <60)
			{
				printf("Your current life stage is: An Adult");
			}
			else 
			{
				printf("Your current life stage is: A Senior Citizen");
			}
		}
	}
	return 0;
	
}
