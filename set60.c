#include <stdio.h>

int main() {
	int i,n,a=0,b=1,c=0;
	scanf("%d",&n);
	printf("INPUT\n%d",n);
	printf("\nOUTPUT\n");
	for(i=1;i<=n;i++)
	{
	a=b+c;
            b=c;
            c=a;
            printf("%d\t",a);
}
	
	return 0;
}
