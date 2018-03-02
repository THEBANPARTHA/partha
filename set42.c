#include <stdio.h>

int main() {
    int a,b;
    char c[100],d[100];
    scanf("%s %s",&c,&d);
    printf("INPUT\n%s %s",c,d);
    a=strlen(c);
    b=strlen(d);
    printf("\nOUTPUT\n");
    if(a>b)
    printf("%s",c);
    else 
    printf("%s",d);
    
	return 0;
}
