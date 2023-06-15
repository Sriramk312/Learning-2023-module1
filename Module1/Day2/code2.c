#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swapData(void* a, void* b, size_t size) 
{
    char* temp = (char*)malloc(size); 
    memcpy(temp, a, size); 
    memcpy(a, b, size);
    memcpy(b, temp, size); 
    free(temp); 
}

int main() 
{
    
    int num1 = 10;
    int num2 = 20;
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swapData(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    
    char char1 = 'A';
    char char2 = 'B';
    printf("Before swapping: char1 = %c, char2 = %c\n", char1, char2);
    swapData(&char1, &char2, sizeof(char));
    printf("After swapping: char1 = %c, char2 = %c\n", char1, char2);

    return 0;
}