#include <stdio.h>
int main() {
int n,i,j,temp;
scanf("%d",&n);
printf("Input\n %d",n);
int a[n];
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);	
}
for(i=1;i<=n;i++)
{
	
for(j=i+1;j<=n;j++)
{
	
if(a[i]<a[j])
{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
}
}
printf("\n Output \n %d",a[n]);
return 0;
}
