#include<stdio.h>
int main()
{
   int i, n, a=1, b=1;
   printf("enter number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
           a = a * 2;
       }
       else
       {    
            b = b * 3;
       }
   }
    if(n%2!=0)
       {
           printf("\n%d term of series is %d\t",n,a/2);
       }
       else
       {    
           printf("\n%d term of series is %d\t",n,b/3);
       }
return 0;
}
