#include<stdio.h>
#include<stdint.h>

int toggle(int num, int k)
{
    int result = num ^ (1 << k);

    printf("%d\n", result);
}

int setBit(int num, int k)
{
    return num | (1 << k);
}

void FindSingle(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if((arr[i] ^ arr[j]) == 0)
            {
                arr[i] = 0;
                arr[j] = 0;
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] != 0)
        {
            printf("%d", arr[i]);
        }
    }
}

int FindSingle(int arr[], int n)
{
    int result = 0;

    for (int i = 0; i < n; i++)
    {
        result ^= arr[i];
    }

    return result;
}

int missNo(int num[], int n)
{
    int result = 0;
    for(int i = 0; i < n; i++)
    {
        result ^=  num[i];
    }
    return result;
}

int main()
{
    int num = 10;
    int k = 2;
    int arr[] = {0, 1, 3};
    int n = sizeof(arr)/ sizeof(int);
    // toggle(num, k);
    // printf("%d\n", setBit(num , k));
    int x = FindSingle(arr, n);
    printf("%d\n", x);

    printf("%d\n", missNo(arr, n));

}
