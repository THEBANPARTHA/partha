#include <stdio.h>

int main() {
	int a,b;
	scanf("%d",&a);
	printf("INPUT\n%d",a);
	while(a!=0)
	{
		a=a/10;
		b++;
	}
	printf("\nOUTPUT\n%d",b);
	return 0;
}
