#include <stdio.h>

int main() {
	
	int a=0,b=0;

	scanf("%d",&b);
	printf("INPUT\n%d",b);
            a=b%4;
	if(a==0)
	printf("\nOUTPUT\nyes");
	else
	printf("\nOUTPUT\nno ");
	return 0;
}
