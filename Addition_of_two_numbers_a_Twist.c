#include<stdio.h>
addition(int x, float y)
{
    float ans;
    ans = (float)x + y;
    printf("Answer : %.2f",ans);
}
int main()
{
   int a;
   float b;
   printf("enter first number : ");
   scanf("%d",&a);
   printf("enter second number : ");
   scanf("%f",&b);
   addition(a, b);
}
