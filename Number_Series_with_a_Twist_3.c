#include<stdio.h>

int main()
{
    int i, n, a=0, b=0;
    printf("enter number : ");
    scanf("%d",&n);
    
    
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            if(i>1)
                a = a + 2;
        }
        else
        {
            b = a/2;
        }
    }

    if(n%2!=0)
    {
        printf("%d",a);
    }
    else
    { 
        printf("%d",b);
    }
    
    return 0;
}
