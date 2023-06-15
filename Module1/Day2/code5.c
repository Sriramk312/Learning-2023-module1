#include <stdio.h>

// Function to count the number of set bits in a given number
int countSetBits(int num) 
{
    int count = 0;
    while (num != 0)
     {
        count += num & 1; // Increment count if the least significant bit is set
        num >>= 1; // Right shift the number by 1 bit
    }
    return count;
}

int main() 
{
    int array[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(array) / sizeof(array[0]);
    int totalSetBits = 0;

    for (int i = 0; i < size; i++) 
    {
        totalSetBits += countSetBits(array[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}