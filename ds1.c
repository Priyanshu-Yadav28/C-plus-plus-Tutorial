#include <stdio.h>
#include <conio.h>

int create(int arr[], int size)
{
    printf("Enter the size of the array");
    scanf("%d", &size);

    printf("INPUT: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element at position %d: \n", i);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        printf("The element at positon %d is %d \n",i, arr[i]);
    }
    
}

int main()
{
    int size;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int arr[size];
    create(arr, size);
    display(arr, size);

    return 0;
}