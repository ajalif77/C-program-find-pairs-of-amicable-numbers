#include <stdio.h>

int sumOfDivisors(int num) {
    int sum = 0;

    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int limit;

    printf("Enter the upper limit to search for amicable numbers: ");
    scanf("%d", &limit);

    printf("Amicable number pairs within the range 1 to %d:\n", limit);

    for (int num1 = 1; num1 <= limit; num1++) {
        int sum1 = sumOfDivisors(num1);
        if (sum1 > num1 && sum1 <= limit) {
            int sum2 = sumOfDivisors(sum1);
            if (sum2 == num1) {
                printf("(%d, %d)\n", num1, sum1);
            }
        }
    }

    return 0;
}
