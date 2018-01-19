#include <stdio.h>

int main() {
   
    int num;
     scanf("%d",&num);
    printf("INPUT\n %d",num);
   
    if(num>0)
    printf("\nOUTPUT \npostive");
    else if(num<0)
    printf("\nOUTPUT \nnegative");
    else
    printf("\nOUTPUT \nzero");
    return 0;
}
