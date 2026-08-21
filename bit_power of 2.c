#include<stdio.h>

int main()
{
  int n = 8;
  if((n & (n-1)) == 0)   printf("yes it is");
  else printf("no");
}
