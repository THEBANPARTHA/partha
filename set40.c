#include <stdio.h>

int main() 
{
 int a,b=1,c=0,n,i;
 scanf("%d",&n);
 printf("INPUT\n%d",n);
 printf("\nOUTPUT\n");
 for(i=1;i<=n;i++)
 {
  a=b+c;
  b=c;
  c=a;
  printf("%d\t",a);
 }
 
  return 0;
}
