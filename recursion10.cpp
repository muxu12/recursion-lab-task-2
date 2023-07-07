#include <stdio.h>

// Function to calculate GCD (Greatest Common Divisor) using recursion
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to calculate LCM (Least Common Multiple) using recursion
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int lcm_result = lcm(num1, num2);

    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm_result);

    return 0;
}
