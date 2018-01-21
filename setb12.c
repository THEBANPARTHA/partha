#include <stdio.h>

int main() {

  int r,sum=0,temp;    
  int n; 
  scanf("%d",&n);
  printf("INPUT\n%d",n);
  temp=n;    
  while(n>0){    
   r=n%10;    
   sum=(sum*10)+r;    
   n=n/10;    
  }    
  if(temp==sum)    
  printf("\nOUTPUT\nyes");    
  else    
  printf("\nOUTPUT\nno");    
	return 0;
}
