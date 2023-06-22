#include <stdio.h>

struct Complex 
{
    double real;
    double imag;
};

// Function to read a complex number from the user
void readComplex(struct Complex *c) 
{
    printf("Enter real part: ");
    scanf("%lf", &(c->real));

    printf("Enter imaginary part: ");
    scanf("%lf", &(c->imag));
}

// Function to write a complex number to the console
void writeComplex(struct Complex c) 
{
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2)
 {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiplyComplex(struct Complex c1, struct Complex c2) 
{
    struct Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() 
{
    struct Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

    printf("\nEntered complex numbers:\n");
    printf("Number 1: ");
    writeComplex(num1);
    printf("Number 2: ");
    writeComplex(num2);

    // Addition of two complex numbers
    sum = addComplex(num1, num2);
    printf("\nSum of the two complex numbers: ");
    writeComplex(sum);

    // Multiplication of two complex numbers
    product = multiplyComplex(num1, num2);
    printf("Product of the two complex numbers: ");
    writeComplex(product);
    return 0;
}
