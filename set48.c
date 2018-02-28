#include <stdio.h>

int main() {
	int a[10],n,i,b,c=0;
	scanf("%d",&n);
	printf("INPUT\n%d\n",n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	printf("%d\t",a[i]);
	}
	for(i=1;i<=n;i++)
	{
	 c=a[i]+c;	
	}
	b=c/n;
	
	printf("\nOUTPUT\n%d",b);
	return 0;
}
