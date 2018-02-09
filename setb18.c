#include <stdio.h>
int main()
{
int number,a, originalNumber, remainder, result = 0,i;
scanf("%d%d",&number,&a);
 printf("INPUT\n%d %d",number,a);
for(i=number;i<=a;i++)
{
originalNumber =i;
result=0;
while (originalNumber != 0)
{
remainder = originalNumber%10;
result += remainder*remainder*remainder;
originalNumber /= 10;
}
if(result == i)
printf("\nOUTPUT\n%d",i);
}

return 0;
}
