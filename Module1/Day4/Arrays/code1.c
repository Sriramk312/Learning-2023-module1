#include <stdio.h>

int main() 
{
    int arr[] = {12,84,20,36,64,56,72,10,45,90};
    int len = sizeof(arr) / sizeof(arr[0]);;
    int sum = 0;
    float average;

    // Calculate the sum of the array
    for (int i = 0; i < len; i++) 
    {
        sum += arr[i];
    }

    // Calculate the average of the array
    average = (float) sum / len;

    printf("Sum: %d\n", sum);
    printf("Average: %0.2f\n", average);

    return 0;
}