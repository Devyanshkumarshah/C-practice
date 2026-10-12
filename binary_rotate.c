#include<stdio.h>

//in rotated array we will divide the array in 2 parts and seach the element in the sorted part if found good if not found then we will discard that half

int main()
{
    int arr[] = {7,8,9,1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    int low = 0;
    int high = arr[n-1];
    int mid = 0;
    int target = 2;
    while(low <= high)
    {
        mid = (low + high)/2;

        if(arr[mid] == target)
        {
            printf("position =  %d", mid);
            return mid;

        }

        if(arr[low] < arr[mid]) //then this is the sorted half
        {
            //do simple binary search here and check the element in this half
            if(target >= arr[low] && target < arr[mid])     // if true then the value must be in this half of the array
            {
                high = mid - 1;
            }
            else // we will eleminate this half of the array 
            {
                low = mid + 1;
            }
        }

        else 
        {
            if(target >= arr[mid] && target < arr[high])     // if true then the value must be in this half of the array
            {
                low = mid + 1;
            }
            else // we will eleminate this half of the array 
            {
                high = mid - 1;
            }
        }
            
    }
    return -1;
}