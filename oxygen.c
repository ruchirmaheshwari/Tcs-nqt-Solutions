#include <stdio.h>   
int main()  
{
	int trainee[3][3];
	int average[3] = {0};
	int i, j, max=0;
	for(i=0; i<3; i++)
	{
    		for(j=0; j<3; j++)
    		{
        		scanf("%d",&trainee[i][j]);
        		if(trainee[i][j]<1 || trainee[i][j]>100)
        		{
            		trainee[i][j] = 0;
        		}
    		}
	}
	for(i=0; i<3; i++)
	{
    		for(j=0; j<3; j++)
    		{
        			average[i] = average[i] + trainee[j][i];
    		}
    		average[i] = average[i] / 3;
	}
	for(i=0; i<3; i++) { if(average[i]>max)
    		{
        			max = average[i];
    		}
	}
	for(i=0; i<3; i++)
	{
    		if(average[i]==max)
    		{
        			printf("Trainee Number : %d\n",i+1);
    		}
    		if(average[i]<70)
    		{
        			printf("Trainee is Unfit");
    		}
	}
	return 0;
}  
