#include <stdio.h>

int main() {
	
	int a,b,i;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("INPUT\n%d %d",a,b);
	printf("\nOUTPUT\n");
	for(i=++a;i<=b;i++)
	{
	if((i%2)!=0)
	
	printf("%d\t",i);
		
	}
	return 0;
}
