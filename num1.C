#include <stdio.h>

int main() {
   
    int num;
     scanf("%d",&num);
    printf("INPUT\n %d",num);
   
    if(num>0)
    printf("\nOUTPUT \npostive");
    else if(num<0)
    printf("\n OUTPUT \nnegative");
    else
    printf("\n OUTPUT \nzero");
    return 0;
}
