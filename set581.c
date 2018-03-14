#include <stdio.h>

int main() {
	int b,a;
	scanf("%d %d",&b,&a);
	printf("INPUT\n%d %d",b,a);
	b=b^a;
	a=b^a;
	b=b^a;
	printf("\nOUTPUT\n%d %d ",b,a);
	return 0;
}
