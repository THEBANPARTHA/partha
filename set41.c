#include <stdio.h>

int main() 
{
 int n,i;
 char a[10];
 
 scanf("%s %d",&a,&n);
 printf("INPUT\n%s %d",a,n);
 printf("\nOUTPUT\n");
 for(i=1;i<=n;i++)
 {
  printf("%s\n",a);
 }
 
  return 0;
}
