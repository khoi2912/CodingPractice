#include <stdio.h>
// Cách 1:
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

    if (isPrime) { // isPrime = 1; -> True
        printf("So %d la so nguyen to\n", n);
    } else { // isPrime = 0; -> False
        printf("So %d khong phai la so nguyen to\n", n);
    }

    return 0;
}

// Cách 2: 
// #include <stdio.h>

// int main() {
//     int n;
//     int count = 0; // đếm số lần n chia hết
//     printf("Nhap n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++) { 
//         if (n % i == 0) {
//             count++; // tăng count mỗi lần n chia hết cho i
//         }
//     }

//     if (count <= 2) {
//         printf("So %d la so nguyen to \n", n);
//     } else {
//         printf("So %d khong phai la so nguyen to \n", n);
//     }

//     return 0;
// }