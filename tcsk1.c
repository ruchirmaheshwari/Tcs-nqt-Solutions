#include

int main()
{
int n, i, r1, r2;
printf("nEnter the total number of terms : ");
scanf("%d", &n);
printf("nEnter the common ratio for GP - 1 : ");
scanf("%d", &r1);
printf("nEnter the common ratio for GP - 2 : ");
scanf("%d", &r2);
printf("nThe series isn");
int a = 1, b = 1;
if(n % 2 == 0)
{
for(i = 0; i < n/2; i++)
{
printf("%d ", a);
a = a * r1;
printf("%d ", b);
b = b * r2;
}
}
else
{
for(i = 0; i < n/2; i++)
{
printf("%d ", a);
a = a * r1;
printf("%d ", b);
b = b * r2;
}
printf("%d ", a);
}
printf("n");

}
