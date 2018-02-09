#include <stdio.h>

int main() {
	int n,i,b;
	scanf("%d",&n);
	printf("INPUT\n%d",n);
	printf("\nOUTPUT\n");
	for(i=1;i<=5;i++)
	{
		b=n*i;
		printf("%d\t",b);
	}

	return 0;
}
