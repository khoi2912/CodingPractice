#include <stdio.h>

// for
int main() {
    int n;

    printf("Nhap so hang n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {       // i = số hàng
        for (int j = 1; j <= i; j++) {   // j = số in trong hàng
            printf("%d ", j);
        }
        printf("\n"); 
    }

    return 0;
}

// While
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Nhap so hang n: ");
//     scanf("%d", &n);

//     int i = 1;  // hàng
//     while (i <= n) {
//         int j = 1;  // số trong hàng
//         while (j <= i) {
//             printf("%d ", j);
//             j++;
//         }
//         printf("\n");
//         i++;
//     }

//     return 0;
// }

// do-while
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Nhap so hang n: ");
//     scanf("%d", &n);

//     int i = 1;
//     do {
//         int j = 1;
//         do {
//             printf("%d ", j);
//             j++;
//         } while (j <= i);
//         printf("\n");
//         i++;
//     } while (i <= n);

//     return 0;
// }