#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input!\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            continue;
        }
        sum += i;
    }

    printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}