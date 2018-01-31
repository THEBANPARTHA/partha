#include <stdio.h>

int main() {
	int n,a,d,sum=0,i;
	scanf("%d%d%d",&n,&a,&d);
	printf("INPUT\n%d %d %d",n,a,d);
	for(i=1;i<=n;i++)
	{
	sum=(sum+(a*(i*d)));
	}
	printf("\nOUTPUT\n%d",sum);
	return 0;
}
