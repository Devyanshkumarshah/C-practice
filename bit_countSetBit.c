#include<stdio.h>

int main()
{
    int n = 9;

    int count = 0;
    for(int i = 0; i < 16; i++)
    {
        int result = n & (1 << i);

        if(result)
        {
            count++;
        }
        result = 0;
    }
    printf("%d", count);
}

// M-2
int main()
{
  int n = 9;
  int count = 0;
  
  while(n)
    {
      count += n & 1;
      n >> 1;
    }
}
