#include <stdio.h>
int main()
{
   int a,b;
   scanf("%d",&b);
   printf("INPUT\n%d",b);
   a=b/60;
   b=b%60;
   printf("\nOUTPUT\n%d %d",a,b);
   return 0;	
}

