#include <stdio.h>
int main()
{
   char a;
   scanf("%c",&a);
   printf("INPUT\n%c",a);
   if(a>='0'&&a<='9')
   printf("\nOUTPUT\nyes");
   else
   printf("\nOUTPUT\nno");
   return 0;	
}

