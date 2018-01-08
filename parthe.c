#include <stdio.h>

int main() {
    
    int num;
    scanf("%d",&num);
    printf(" INPUT\n %d ", num);
    
    if(num>0)
    printf("\n OUTPUT \n postive");
    else if(num<0)
    printf("\nOUTPUT \n negative");
    else
    printf("\n OUTPUT \n zero");
    return 0;
}

