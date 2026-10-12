#include<stdio.h>


int main()
{
    int arr[] = {2,4,10,10,10,18,20};

    int start = 0;
    int end = (sizeof(arr)/sizeof(int)) - 1;

    int key = 10;
    int result = 0;

    while(start <= end)
    {
        int mid = (start + end) / 2;

        if(arr[mid] == key)
        {
            printf("Key found at pos %d", mid);
            result = mid;
            end = mid - 1;
        }

        else if(arr[mid] < key)
        {
            start = mid+1;
        }

        else{
            end = mid - 1;
        }
    }
    return result;
}