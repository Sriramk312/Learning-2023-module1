#include <stdio.h>

int findBiggestIfElse(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}


int findBiggestTernary(int a, int b) {
    int biggest = (a > b) ? a : b;
    return biggest;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int biggestIfElse = findBiggestIfElse(num1, num2);
    int biggestTernary = findBiggestTernary(num1, num2);

    printf("Using if-else: %d\n", biggestIfElse);
    printf("Using ternary operator: %d\n", biggestTernary);

    return 0;
}

