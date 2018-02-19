
#include <stdio.h>
 
void main()
{
    char a[100];
    int count = 0, i;
 
    printf("INPUT\n%c",a);
    scanf("%[^\n]s",&a);
    for (i = 0;a[i] != '\0';i++)
    {
        if (a[i] == ' ')
            count++;    
    }
    printf("\nOUTPUT\n%d\n", count);
}
