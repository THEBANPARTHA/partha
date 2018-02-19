#include<stdio.h>
int main()
{
  char b[100];
  int i,a,count=0;
    gets(b);
    printf("INPUT\n");
  for(i=0;i<b[i];i++)
  {
  printf("%c",b[i]);
  }
  for(a=0;b[a]!='\0';++a)
  {
  	
  }
  for(i=0;i<a;i++)
  {
  if(b[i]>='0'&&b[i]<='9')
  {
  	++count;
  }}
  printf("\nOUTPUT\n%d",count);
  return 0;
	
}
	
