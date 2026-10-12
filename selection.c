#include<stdio.h>
int main()
{
    int arr[] = {13, 46, 25, 52, 20, 9};
    int n = sizeof(arr)/sizeof(int);
    int min;
    for(int i = 0; i < n-1; i++)
    {
        min = i;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                min = j;
            }
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    for(int i = 0 ; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }
}