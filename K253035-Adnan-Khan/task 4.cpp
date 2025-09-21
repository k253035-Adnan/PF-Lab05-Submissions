#include<stdio.h>
int main(){
	int money = 0;
	int limit = 500;
	printf("Enter the amount to withdraw:\n");
	scanf("%d", &money);
	if (money <= limit)
	{
		if (money % 20 == 0)
		{
			 printf("Withdrawal Approved!");
		}
		else 
    	{
		printf("Withdrawal Denied!");
    	}
		
	}
	else 
	{
		printf("Withdrawal Denied!");
	}
	return 0;
}
