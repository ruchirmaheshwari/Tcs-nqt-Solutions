#include <stdio.h>
int main()
{
   int i, n, a=0, b=0;
   printf("enter number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      if(i%2!=0)
      {
           a = a + 7;
      }
       else
      {    
           b = b + 6;
      }
   }
      if(n%2!=0)
      {
           printf("%d term of series is %d\t",n,a-7);
      }
      else
      {    
           printf("%d term of series is %d\t",n,b-6);
      }
return 0;
 }
