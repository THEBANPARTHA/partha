
#include <stdio.h>

int main() 
{
 int a[10],i,j,temp;
 printf("INPUT\n");
 for(i=1;i<=10;i++)
 {
 	scanf("%d",&a[i]);
 	printf("%d\t",a[i]);
 }
for(i=1;i<=10;i++)
{
	for(j=1;j<=10;j++)
	{
	 if(a[i]>a[j])
	 {
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
	}}
}printf("\nOUTPUT\n");
 printf("%d",a[1]);
  return 0;
}
