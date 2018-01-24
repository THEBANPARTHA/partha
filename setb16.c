#include <stdio.h>

int main() {
	
	int a,b,i,j;
	scanf("%d",&a);
	scanf("%d",&b);
	printf("INPUT\n%d %d",a,b);
	printf("\nOUTPUT\n");
	for(int i=++a;i<b;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d\t",i);
        }
    }
	return 0;
}
