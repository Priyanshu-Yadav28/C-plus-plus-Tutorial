#include<stdio.h>
int main() {
    int arr[] = {2, 3, 4, 5, 7, 9, 10};
    int target;
    printf("Enter the number which you want to find in the array \n");
    scanf("%d", &target);
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]);
    int ans = binarySearch(arr, start, end, target);
    if (ans == -1)
    {
        printf("The element is not present in the array");
    } 
    
    else {
        printf("The element is at position %d ", ans);
    }
    
    


 return 0;   
}

int binarySearch(int arr[], int start, int end, int target) {
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target == arr[mid])
        {
            return mid;
        }
        
        else if (target > arr[mid])
        {
            /* code */
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            /* code */
            end = mid - 1;
        }
    }
     return -1;
}