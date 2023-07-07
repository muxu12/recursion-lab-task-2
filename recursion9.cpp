#include <stdio.h>

int isPrime(int n, int i)
{
    if (i == 1)
        return 1; // Base case: 1 is neither prime nor composite
    else
    {
        if (n % i == 0)
            return 0; // Number is divisible by i, hence not prime
        else
            return isPrime(n, i - 1); // Check divisibility with next smaller number
    }
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 2)
        printf("%d is not a prime number.\n", num);
    else
    {
        int result = isPrime(num, num / 2);
        if (result == 1)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}
