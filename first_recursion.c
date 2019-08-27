#include <stdio.h>
int sumOfDigits(int);

int main(void) {
    /* This program takes as input an int, then uses the funciton sumOfDigits to
    recursively compute the sum of those digits. */
    int number, sum;
    // gather the number to be summed
    scanf("%d", &number);
    // call sumOfDigits, store in sum variable
    sum = sumOfDigits(number);
    // print sum
    printf("%d", sum);
    return 0;
}
// enter an int, return the sum of digits. Uses %10 and recurison
int sumOfDigits(int n) {
    if (n < 10) {
        return n;
    } else {
        int sum = n % 10 + sumOfDigits(n/10);
        return sum;
    }
}
