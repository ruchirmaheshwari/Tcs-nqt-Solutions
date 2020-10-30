#include<stdio.h>
int leapprog(int year)
{
//checking divisibility by 4
    if(year%4 == 0)
    {
//checking divisibility by 100
        if( year%100 == 0)
        {
//checking divisibility by 400
            if ( year%400 == 0)
                printf("%d, the year entered happens to be a leap year", year);
            else
                printf("%d is surely not a leap year", year);
        }
        else
            printf("%d, the year entered happens to be a leap year", year );
    }
    else
        printf("%d is surely not a leap year", year);
        return 0;
}
int main()
{
    int input_year, val;
    printf("Enter the year that you want to check"); //enter the year to check
    scanf("%d",&input_year);
    val = leapprog(input_year);    
return 0;
}
