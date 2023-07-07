#include <stdio.h>

int fibonacci(int n);

int main()
{
    int num, i;
    
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    
    printf("Fibonacci Series: ");
    for(i = 0; i < num; i++)
    {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}

int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
