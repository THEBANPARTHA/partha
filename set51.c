#include <stdio.h>

int main() {
	int a,i,num=0,n=0,b[i];
	scanf("%d",&a);
	printf("INPUT\n%d",a);
	while(a!=0)
	{
	  num=a%10;
	  a=a/10;
	  b[i]=num;
	  i++;
	  n++;
	  
	}
		printf("\nOUTPUT\n");
	for(i=n-1;i>=0;i--)
	{
	printf("%d\t",b[i]);}
	return 0;
}
