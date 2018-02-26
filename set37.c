#include <stdio.h>

int main() {
	int n,a;
	scanf("%d %d",&n,&a);
	printf("INPUT\n%d %d",n,a);
	n=n+a;
	a=n-a;
	n=n-a;
	printf("\nOUTPUT\n%d %d ",n,a);
	return 0;
}
