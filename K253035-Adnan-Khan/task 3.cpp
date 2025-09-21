#include<stdio.h>
int main(){
	int year = 0;
	printf("Enter the Year: \n");
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		if ( year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("The year %d is a Leap Year.\n", year);
			}
			else 
			{
				printf("The year %d is NOT a Leap Year.\n", year);
			}
		}
		else 
		{
			 printf("The year %d is a Leap Year.\n", year);
		}
	}
    else 
	{
		printf("The year %d is not a leap year.", year);
		}	
	return 0;
}
