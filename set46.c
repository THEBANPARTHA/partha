#include <stdio.h>

int main() {
	// your code goes here
	int a[10],n,i,j,temp;
	scanf("%d",&n);
	printf("INPUT\n%d\n",n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	printf("%d\t",a[i]);
	}
	for(i=1;i<=n;i++)
	{
	 for(j=1;j<=n;j++)
	 if(a[i]<a[j])
	 {
	  temp=a[i];
	  a[i]=a[j];
	  a[j]=temp;
	 }
	}
	printf("\nOUTPUT\n%d %d\t",a[n],a[1]);
	
	return 0;
}
