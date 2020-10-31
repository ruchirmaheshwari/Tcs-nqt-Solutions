#include<stdio.h>

int main() {

int n;
scanf(“%d”, &n);
if(n % 2 == 1)
{
int a = 1;
int r = 2;
int term_in_series = (n+1)/2;
int res = 2 * (term_in_series – 1);
printf(“%d “, res);
}
else
{
int a = 1;
int r = 3;
int term_in_series = n/2;

int res = term_in_series – 1;
printf(“%d “, res);
}

return 0;
}
