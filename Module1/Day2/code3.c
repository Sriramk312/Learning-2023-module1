#include <stdio.h>
int main() 
{
    int array[] = {10, 20, 30, 40, 50};
    int size= sizeof(array) / sizeof(array[0]);
    int sum = 0;
    int i;
    for (i = 0; i < size; i = i+2) // using array & loops concepts
        if (i % 2 == 0) // using loops & basic operations
        {
            sum += array[i];
            
        }
        printf("Sum of alternate elements using arrays,loops & basic operations: %d\n", sum);
    return 0;
}
















