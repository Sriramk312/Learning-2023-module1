#include <stdio.h>
void toggleCase(char *str) 
{
    while (*str) 
    {
        if (*str >= 'a' && *str <= 'z') 
        {
            *str = *str - 32; // Convert lowercase to uppercase
        } 
        else if (*str >= 'A' && *str <= 'Z') 
        {
            *str = *str + 32; // Convert uppercase to lowercase
        }
        str++;
    }
}

int main() 
{
    char str[] = " "; 
    printf("Enter a string:\n");
    scanf("%s", str);
    printf("Original String: %s\n", str);
    toggleCase(str);
    printf("Toggled String: %s\n", str);
    return 0;
}
