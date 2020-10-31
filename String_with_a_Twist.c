#include <stdio.h>
#include <string.h>
int main()
{
  char a[10], b[10], c[10];
  int i,j;
  int x, y, z;

  scanf("%s",a);
  scanf("%s",b);
  scanf("%s",c);

  x = strlen(a);
  y = strlen(b);
  for(i=0;i<x;i++)
  {
      if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
      {
          a[i] = '%';
      }
  }
  for(j=0;j<y;j++)
  {
      if(b[j]=='b'||b[j]=='c'||b[j]=='d'||b[j]=='f'||b[j]=='g'||b[j]=='h'||b[j]=='j'||b[j]=='k'||b[j]=='l'||
         b[j]=='m'||b[j]=='n'||b[j]=='p'||b[j]=='q'||b[j]=='r'||b[j]=='s'||b[j]=='t'||b[j]=='v'||b[j]=='w'||
         b[j]=='x'||b[j]=='y'||b[j]=='z')
      {
          b[j] = '#';
      }
      
      if(b[j]=='B'||b[j]=='C'||b[j]=='D'||b[j]=='F'||b[j]=='G'||b[j]=='H'||b[j]=='J'||b[j]=='K'||b[j]=='L'||
         b[j]=='M'||b[j]=='N'||b[j]=='P'||b[j]=='Q'||b[j]=='R'||b[j]=='S'||b[j]=='T'||b[j]=='V'||b[j]=='W'||
         b[j]=='X'||b[j]=='Y'||b[j]=='Z')
      {
          b[j] = '#';
      }
  }
  z=0;
   while (c[z] != '\0') {
      if (c[z] >= 'a' && c[z] <= 'z')
       {
         c[z] = c[z] - 32;
      }
      z++;
   }
   printf("%s%s%s",a,b,c);
}
