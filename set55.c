#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d %d",&a,&b);
	printf("INPUT\n%d %d",a,b);
	c=a*b;
	if(c%2==0)
	{
	   printf("\nOUTPUT\neven");
             }
           else
           {
           	printf("\nOUTPUT\nodd");
           }
	return 0;
}
