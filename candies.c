#include<stdio.h>   
int main()  
{
	int n=10;
	int num;
    printf("Enter the quantity of the candies which has been sold\n");

	scanf("%d",&num);
	if(num<10)
	{
    		printf("NUMBER OF CANDIES SOLD : %d\n",num);
    		printf("NUMBER OF CANDIES LEFT : %d",n-num);
	}
	else
	{
    		// printf("INVALID INPUT\n");
    		printf("NUMBER OF CANDIES LEFT : %d",n);
	}
	return 0;
}
