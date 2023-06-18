#include <stdio.h>

int stringToInt(const char* str)
 {
    int result = 0;
    int sign = 1; // Positive by default

    // Check for a sign character
    if (*str == '-' || *str == '+') 
    {
        if (*str == '-')
            sign = -1;

        str++;
    }

    // Convert each digit to integer and update the result
    while (*str != '\0') 
    {
        // Check if the character is a valid digit
        if (*str < '0' || *str > '9') 
        {
            // Handle invalid input here (e.g., return an error code)
            break;
        }

        // Convert the character to integer and update the result
        result = result * 10 + (*str - '0');
        str++;
    }
    return result * sign;
}

int main() 
{
    char str[] = "5287";
    int num = stringToInt(str);
    printf("Converted integer: %d\n", num);
    return 0;
}
