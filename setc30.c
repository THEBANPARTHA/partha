#include <stdio.h>

int main() {
	int a,b,c,d,e,f;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("INPUT\n%d %d\n%d %d",a,b,c,d);
	e=a-c;
	f=b-d;
	printf("\nOUTPUT\n%d %d",e,f);
	return 0;
}
