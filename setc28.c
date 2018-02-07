#include <stdio.h>
int main()
{
   int n,i;
   scanf("%d",&n);
   printf("INPUT\n%d\n",n);
   int a[n];
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);
   printf("%d\t",a[i]);

   }
   printf("\nOUTPUT");
   for(i=0;i<n;i++)
   {
   	
  
   printf("\n%d%d",a[i],i);
   }
   
   return 0;	
}

