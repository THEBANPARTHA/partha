#include <stdio.h>

int main() {
	int a,i,sum=0;
	scanf("%d",&a);
	printf("INPUT\n%d",a);
	for(i=1;i<=a;i++)
	sum+=i;
	printf("\nOUTPUT\n%d",sum);
	
	return 0;
}
