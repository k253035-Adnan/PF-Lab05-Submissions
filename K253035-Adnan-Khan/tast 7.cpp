#include<stdio.h>
int main(){
	int rating=0;
	printf("What would you like to Rate the movie “The Lion King” from (1 to 5):\n");
	scanf("%d", &rating);
	if (rating == 5)
	{
		printf("Feedback: Excellent");
	}
	else if (rating == 4)
	{
		printf("Feedback: Good");
	}
	else if (rating == 3)
	{
		printf("Feedback: Average");
	}
	else if (rating == 2)
	{
		printf("Feedback: Poor");
	}
	else if (rating == 1)
	{
		printf("Feedback: Terrible");
	}
	else
	{
		printf("Invalid rating, enter from 1 to 5.");
	}
	return 0;
}
