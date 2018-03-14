#include <stdio.h>

int main(void) {
	int p=0,n ;
	scanf("%d",&n);
	printf("INPUT\n%d",n);
	
	while(n!=0)
	{
		p=p+(n%10);
		n=n/10;
	}
	 printf("\nOPUTPUT\n%d",p);
	return 0;
}
