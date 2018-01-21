#include <stdio.h>

int main() {
	int n;
	int count =0;
	scanf("%d",&n);
	printf("Input\n%d",n);
	while(n!=0)
	{
		n= n/10;
		count ++;
	}
	printf("\nOutput \n%d",count);
	return 0;
}
