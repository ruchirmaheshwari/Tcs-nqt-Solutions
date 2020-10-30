#include<stdlib.h>
#include<stdio.h>




int main()
{
int res = 0;
int s = 0;

scanf("%d",&s);
if ( s <= 20 && s > 0) {
   if (s % 2 == 0) {
       res= s/2 ;
       res = res + s;
   }
   else {
       res= (s+1)/2 ;
       res = res + s;
   }
   printf("%d",res);
}
else {
   printf("Wrong Infrastructure");
}
return 0;
}
