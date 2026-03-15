#include <stdio.h>

int main() {
    int n;
    int isPrime = 1; 

    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0; 
    } else {
        for (int i = 2; i <= n / 2; i++) { 
            if (n % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime) {
        printf("So %d la so nguyen to\n", n);
    } else {
        printf("So %d khong phai la so nguyen to\n", n);
    }

    return 0;
}