#include <stdio.h>

void printExponent(double x) 
{
    // Create a pointer to the double variable
    unsigned long long* p = (unsigned long long*)&x;

    // Get the bits representation of the double variable
    unsigned long long bits = *p;

    // Extract the exponent part (bits 52-62) using bitwise operations
    unsigned long long exponent = (bits >> 52) & 0x7FF;

    // Print the exponent part in hexadecimal format
    printf("Exponent (hex): 0x%llX\n", exponent);

    // Print the exponent part in binary format
    printf("Exponent (binary): 0b");
    for (int i = 10; i >= 0; i--) 
{
        unsigned long long mask = 1ULL << i;
        putchar((exponent & mask) ? '1' : '0');
    }
    printf("\n");
}

int main() 
{
    double x = 0.7;
    printExponent(x);
    return 0;
}