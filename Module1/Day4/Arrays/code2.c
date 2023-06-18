#include <stdio.h>
int main()
{
    int arr[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0]; // Initialize min with the first element
    int max = arr[0]; // Initialize max with the first element
    // Find the minimum and maximum values in the array
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    return 0;
}
