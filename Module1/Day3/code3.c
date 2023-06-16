#include <stdio.h>

int findLargestNumber(int num)
 {
    int maxNum = 0;
    int temp = num;

    for (int i = 0; i < 4; i++) 
    {
        int divisor = 1;
        for (int j = 0; j < i; j++) 
        {
            divisor *= 10;
        }

        int currentNum = (temp / (divisor * 10)) * divisor + (temp % divisor);
        if (currentNum > maxNum)
         {
            maxNum = currentNum;
        }
    }

    return maxNum;
}
int main() 
{
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largestNum = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNum);

    return 0;
}