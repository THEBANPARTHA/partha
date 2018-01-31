#include <stdio.h>

int main() {
	// your code goes here
	int i,j,max,n;
	scanf("%d",&n);
	printf("INTPUT\n%d",n);
	int a[n];
	for(i=0;i<=n;i++)
	{
              for(j=i+1;i<=n;j++)
              if(a[i]>a[j])
              {
                max=a[i];
              }
              else
              {
                max=a[j];
              }

	}
		
	printf("OUTPUT%d",max);
	
	return 0;
}
