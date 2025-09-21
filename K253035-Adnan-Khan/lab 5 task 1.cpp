#include<stdio.h>
int main(){
	char light = 0, R = 0, Y = 0, G = 0;
	printf("Enter the traffic light colour, RED(R), YELLOW(Y) OR GREEN(G):\n");
	scanf("%c", &light);
	if (light == 'R'){
		printf("Stop your vehicle!");
	}
	else
	{
	   if (light == 'Y')
     	{
		printf("Stay Caution! and prepare to move");
    	}
	     else
        	{
	          if (light == 'G')
            	{
	            printf("You are free to Go.");
             	}
	             else 
	             {
	             	printf("Invalid traffic light colour!");
				 }
	     	}
   	}
	return 0;
}
