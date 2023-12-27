#include <stdio.h>

// Function to calculate the sum of the squares of digits
int squareSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}

// Function to check if a number is a happy number
int isHappy(int n) {
    int slow = n, fast = n;
    do {
        slow = squareSum(slow);
        fast = squareSum(squareSum(fast));
    } while (slow != fast);

    return (slow == 1); // If the sum becomes 1, it's a happy number
}

int main() {
    printf("Two-digit happy numbers:\n");
    for (int i = 10; i <= 99; ++i) {
        if (isHappy(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}
