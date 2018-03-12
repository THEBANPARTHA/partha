#include <stdio.h>

int main() {
	int a;
	scanf("%d",&a);
	printf("INPUT\n%d",a);
	if(a%2!=0)
	{
		a=--a;
             }
    printf("\nOUTPUT\n%d",a);
	return 0;
}
