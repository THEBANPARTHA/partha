#include <stdio.h>

int main() {
	// your code goes here
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("INPUT\n%d %d %d",a,b,c);
	if(a>b&&a>c)
	printf("\nOUTPUT\n%d ",a);
	else if(b>a&&b>c)
	printf("\nOUTPUT\n%d",b);
	else
	printf("\nOUTPUT\n%d ",c);
	return 0;
}
