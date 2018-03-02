#include <stdio.h>

int main(void) {
	int n,t,flag=0;
	scanf("%d",&n);
	printf("INPUT\n%d",n);
	t=n;
	while(t!=1)
	{
		if(t%2!=0)
		{
			flag=1;
			break;
		}
		t=t/2;
	}
	if(flag==0)
	{
		printf("\nOUTPUT\nyes");
	}
	else
	{
		printf("\nOUTPUT\nno");
	}
	return 0;
}
