#include <stdio.h>

// Function to calculate factorial using recursion
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
        return 1;
    
    // Recursive call to calculate factorial
    return n * factorial(n - 1);
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    // Check if the number is positive
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(number);
        printf("Factorial of %d is %d\n", number, result);
    }
    
    return 0;
}
