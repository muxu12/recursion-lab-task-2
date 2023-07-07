#include <stdio.h>

int reverseNumber(int num, int reversedNum) {
    if (num == 0) {
        return reversedNum;
    } else {
        reversedNum = (reversedNum * 10) + (num % 10);
        return reverseNumber(num / 10, reversedNum);
    }
}

int main() {
    int num, reversedNum;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    reversedNum = reverseNumber(num, 0);
    
    printf("Reversed number: %d\n", reversedNum);
    
    return 0;
}
