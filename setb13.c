#include <stdio.h>
int main()
{
    int n, i, flag = 0;
     scanf("%d",&n);
    printf("INPUT\n%d",n);


    for(i=2; i<=n/2; ++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("\nOUTPUT\nyes",n);
    else
        printf("\nOUTPUT\nNO",n);
    
    return 0;
}
