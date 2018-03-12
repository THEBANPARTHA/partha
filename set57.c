#include <stdio.h>

int main(void) {
	int a,b,c=0;
	scanf("%d%d",&a,&b);
	printf("INPUT\n%d %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nOUTPUT\n%d %d",a,b);
	return 0;
}
