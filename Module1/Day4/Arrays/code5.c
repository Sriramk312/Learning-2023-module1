#include <stdio.h>

int main() 
{
    int arr[] = {64,84,21,36,17,90,77,10,48,55};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sumEvenIndexed = 0;
    int sumOddIndexed = 0;

    // Calculate the sum of even-indexed and odd-indexed elements
    for (int i = 0; i < size; i++) 
    {
        if (i % 2 == 0)
         {
            sumEvenIndexed += arr[i];
        } 
        else 
        {
            sumOddIndexed += arr[i];
        }
    }

    // Calculate the difference between sum of even-indexed and sum of odd-indexed elements
    int diff = sumEvenIndexed - sumOddIndexed;

    printf("Sum of even-indexed elements: %d\n", sumEvenIndexed);
    printf("Sum of odd-indexed elements: %d\n", sumOddIndexed);
    printf("Difference: %d\n", diff);

    return 0;
}
