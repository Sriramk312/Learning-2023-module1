#include <stdio.h>

int main() 
{
    int arr[] = {64,84,21,36,17,90,77,10,48,55};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sumEven = 0;
    int sumOdd = 0;

    // Calculate the sum of even and odd elements
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 == 0)
        {
            sumEven += arr[i];
        }
        else 
        {
            sumOdd += arr[i];
        }
    }

    // Calculate the difference between sum of even and sum of odd elements
    int diff = sumEven - sumOdd;

    printf("Sum of even elements: %d\n", sumEven);
    printf("Sum of odd elements: %d\n", sumOdd);
    printf("Difference: %d\n", diff);

    return 0;
}