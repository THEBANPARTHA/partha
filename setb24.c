#include<stdio.h>
int main()
{
 int n,i,j,temp;
 scanf("%d",&n);
 printf("INPUT\n%d\n",n);
 int a[n];
 for(i=0;i<n;i++)
 {
   scanf("%d",&a[i]);
   printf("%d\t",a[i]);
 
 }  
 
 for(i=0;i<n;i++)
 {
   for(j=i+1;j<n;j++)
   {
   if(a[i]>a[j])
   {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
   }}}
   printf("\nOUTPUT");
   printf("\n");
   for(i=0;i<n;i++)
   {
     printf("%d\t",a[i]);
   	
   }
 
 return 0;
}
