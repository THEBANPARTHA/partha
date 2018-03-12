#include<stdio.h>
int main()
{
    char a[100];
    int i,count=0,count1=0;
    scanf("%s",&a);
    printf("input\n%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>'a'&&a[i]<'z'||a[i]>'A'&&a[i]<'Z')
        {
            count++;
        }
        else if(a[i]>'0'&&a[i]<'9')
        {
            count1++;
        }
    }
    if(count>0&&count1>0)
    {
        printf("\nOUTPUT\nyes");
    }
    else
    {
        printf("\nOUTPUT\nno");
    }
    return 0;
}
